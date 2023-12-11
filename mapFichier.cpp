#include "mapFichier.h"

mapFichier::mapFichier()
{
	this->set_id_commande(1);
}

mapFichier::mapFichier(int^ id)
{
	this->set_id_commande(id);
}

int^ mapFichier::get_id_commande()
{
	return this->id_commande;
}

void mapFichier::set_id_commande(int^ id)
{
	this->id_commande = id;
}

String^ mapFichier::SELECT_commande()
{
	return "SELECT C.ID_Commande, A.Nom_Article, Co.Quantite_Commande_Article, SUM(Prix_HT_Article * Quantite_Commande_Article) AS Total_HT, SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * CASE WHEN ISNULL(M.Taux_Reduction_Modif, 0) = 0 THEN 1 WHEN A.Seuil_Reduction_Article <= Co.Quantite_Commande_Article THEN M.Taux_Reduction_Modif ELSE 1 END) AS Total_TTC FROM Commande C JOIN Effectue E ON C.ID_Commande = E.ID_Commande JOIN Clients Cl ON E.ID_Clients = Cl.ID_Clients JOIN Compose Co ON C.ID_Commande = Co.ID_Commande JOIN Article A ON Co.Reference_Article = A.Reference_Article JOIN Comporte Cp ON Cp.Reference_Article = A.Reference_Article JOIN Modif M ON M.ID_Modif = Cp.ID_Modif WHERE C.ID_Commande = " + this->get_id_commande() + " GROUP BY C.ID_Commande, Cl.ID_Clients, C.Reference_Commande, C.Livraison_Prevue_Commande, C.Emission_Commande, A.Nom_Article, Co.Quantite_Commande_Article, C.Moyen_Paiement, C.Date_Paiement;";
}

String^ mapFichier::SELECT_totaux()
{
	return "SELECT SUM(Prix_HT_Article * Quantite_Commande_Article) AS Total_HT, SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * CASE WHEN ISNULL(M.Taux_Reduction_Modif, 0) = 0 THEN 1 WHEN A.Seuil_Reduction_Article <= Co.Quantite_Commande_Article THEN M.Taux_Reduction_Modif ELSE 1 END) AS Total_TTC FROM Commande C JOIN Effectue E ON C.ID_Commande = E.ID_Commande JOIN Clients Cl ON E.ID_Clients = Cl.ID_Clients JOIN Compose Co ON C.ID_Commande = Co.ID_Commande JOIN Article A ON Co.Reference_Article = A.Reference_Article JOIN Comporte Cp ON Cp.Reference_Article = A.Reference_Article JOIN Modif M ON M.ID_Modif = Cp.ID_Modif WHERE C.ID_Commande = " + this->get_id_commande() + ";";
}

String^ mapFichier::SELECT_reference()
{
	return "SELECT Reference_Commande FROM Commande WHERE ID_Commande = " + this->get_id_commande() + ";";
}

String^ mapFichier::SELECT_id_client()
{
	return "SELECT Clients.ID_Clients FROM Clients INNER JOIN Effectue ON Clients.ID_Clients = Effectue.ID_Clients WHERE Effectue.ID_Commande = " + this->get_id_commande() + ";";
}

String^ mapFichier::SELECT_nom_client()
{
	return "SELECT Personne.Nom_Personne, Personne.Prenom_Personne FROM Personne INNER JOIN Clients ON Personne.ID_Personne = Clients.ID_Personne INNER JOIN Effectue ON Clients.ID_Clients = Effectue.ID_Clients WHERE Effectue.ID_Commande = " + this->get_id_commande() + ";";
}

String^ mapFichier::SELECT_adresse_facturation()
{
	return "SELECT Adresse.Numero_Maison_Adresse, Adresse.Rue_Adresse, Ville.CodePostal_Ville, Ville.Nom_ville FROM Personne INNER JOIN Possede ON Personne.ID_Personne = Possede.ID_Personne INNER JOIN Adresse ON Adresse.ID_Adresse = Possede.ID_Adresse INNER JOIN Ville ON Ville.ID_Ville = Adresse.ID_Ville INNER JOIN Clients ON Clients.ID_Personne = Personne.ID_Personne INNER JOIN Effectue ON Effectue.ID_Clients = Clients.ID_Clients WHERE Effectue.ID_Commande = " + this->get_id_commande() + " AND Adresse.Nature_Adresse = 'Facturation';";
}

String^ mapFichier::SELECT_adresse_livraison()
{
	return "SELECT Adresse.Numero_Maison_Adresse, Adresse.Rue_Adresse, Ville.CodePostal_Ville, Ville.Nom_ville FROM Personne INNER JOIN Possede ON Personne.ID_Personne = Possede.ID_Personne INNER JOIN Adresse ON Adresse.ID_Adresse = Possede.ID_Adresse INNER JOIN Ville ON Ville.ID_Ville = Adresse.ID_Ville INNER JOIN Clients ON Clients.ID_Personne = Personne.ID_Personne INNER JOIN Effectue ON Effectue.ID_Clients = Clients.ID_Clients WHERE Effectue.ID_Commande = " + this->get_id_commande() + " AND Adresse.Nature_Adresse = 'Livraison';";
}

String^ mapFichier::SELECT_date_emission()
{
	return "SELECT Emission_Commande FROM Commande WHERE ID_Commande = " + this->get_id_commande() + ";";
}

String^ mapFichier::SELECT_date_livraison()
{
	return "SELECT Livraison_Prevue_Commande FROM Commande WHERE ID_Commande = " + this->get_id_commande() + ";";
}