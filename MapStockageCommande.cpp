#include "MapStockageCommande.h"


StoCom::CLgenerateSQLStoCom::CLgenerateSQLStoCom()
{
    this->commande = gcnew Commande();
}

StoCom::CLgenerateSQLStoCom::CLgenerateSQLStoCom(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    this->commande = gcnew Commande(id, reference, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_Select(void)
{
    String^ requete = "SELECT C.ID_Commande, Cl.ID_Clients, C.Reference_Commande, C.Livraison_Prevue_Commande, C.Emission_Commande, A.Nom_Article, Co.Quantite_Commande_Article, C.Moyen_Paiement, C.Date_Paiement, SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * CASE WHEN ISNULL(M.Taux_Reduction_Modif, 0) = 0 THEN 1 ELSE M.Taux_Reduction_Modif END) AS Total_TTC, SUM(Prix_HT_Article * Quantite_Commande_Article) AS Total_HT FROM Commande C JOIN Effectue E ON C.ID_Commande = E.ID_Commande JOIN Clients Cl ON E.ID_Clients = Cl.ID_Clients JOIN Compose Co ON C.ID_Commande = Co.ID_Commande JOIN Article A ON Co.Reference_Article = A.Reference_Article JOIN Comporte Cp ON Cp.Reference_Article = A.Reference_Article JOIN Modif M ON M.ID_Modif = Cp.ID_Modif WHERE C.ID_Commande = " + this->commande->get_ID_Commande() + " GROUP BY C.ID_Commande, Cl.ID_Clients, C.Reference_Commande, C.Livraison_Prevue_Commande, C.Emission_Commande, A.Nom_Article, Co.Quantite_Commande_Article, C.Moyen_Paiement, C.Date_Paiement;";
    return requete;
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_Select_all(void)
{
    String^ requete = "SELECT C.ID_Commande, Cl.ID_Clients, C.Reference_Commande, C.Livraison_Prevue_Commande, C.Emission_Commande, A.Nom_Article, Co.Quantite_Commande_Article, C.Moyen_Paiement, C.Date_Paiement, SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * CASE WHEN ISNULL(M.Taux_Reduction_Modif, 0) = 0 THEN 1 ELSE M.Taux_Reduction_Modif END) AS Total_TTC, SUM(Prix_HT_Article * Quantite_Commande_Article) AS Total_HT FROM Commande C JOIN Effectue E ON C.ID_Commande = E.ID_Commande JOIN Clients Cl ON E.ID_Clients = Cl.ID_Clients JOIN Compose Co ON C.ID_Commande = Co.ID_Commande JOIN Article A ON Co.Reference_Article = A.Reference_Article JOIN Comporte Cp ON Cp.Reference_Article = A.Reference_Article JOIN Modif M ON M.ID_Modif = Cp.ID_Modif;";
    return requete;
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_Insert(void)
{
    String^ requete = "INSERT INTO Commande (Reference_Commande, Livraison_Prevue_Commande, Emission_Commande, Moyen_Paiement, Date_Paiement) VALUES ('" + this->commande->get_Reference() + "', '" + this->commande->get_Date_Livraison() + "', '" + this->commande->get_Date_Emission() + "', '" + this->commande->get_Moyen_Paiement() + "', '" + this->commande->get_Date_Paiement() + "');";
    return requete;
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_Delete(void)
{
    String^ requete = "DELETE FROM Effectue WHERE ID_Commande = " + this->commande->get_ID_Commande() + "; DELETE FROM Compose WHERE ID_Commande = " + this->commande->get_ID_Commande() + "; DELETE FROM Comprend WHERE ID_Commande = " + this->commande->get_ID_Commande() + "; DELETE FROM Comporte WHERE Reference_Article IN (SELECT Reference_Article FROM Compose WHERE ID_Commande = " + this->commande->get_ID_Commande() + "); DELETE FROM Commande WHERE ID_Commande = " + this->commande->get_ID_Commande() + ";";
    return requete;
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_Update(void)
{
    String^ requete = "UPDATE Commande SET Reference_Commande = '" + this->commande->get_Reference() + "', Livraison_Prevue_Commande = '" + this->commande->get_Date_Livraison() + "', Emission_Commande = '" + this->commande->get_Date_Emission() + "', Moyen_Paiement = '" + this->commande->get_Moyen_Paiement() + "', Date_Paiement = '" + this->commande->get_Date_Paiement() + "' WHERE ID_Commande = " + this->commande->get_ID_Commande() + ";";
    return requete;
}
