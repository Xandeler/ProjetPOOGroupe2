#include "Statistiques.h"

Statistiques::Statistiques()
{
    this->Acces_Base = gcnew AB::AccesBase();

}

void Statistiques::Calcul_Panier_Moyen()
{
    String^ requete = "SELECT SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * Taux_Reduction_Modif) / SUM(Quantite_Commande_Article) AS PrixPanierMoyen FROM Article INNER JOIN Compose ON Article.Reference_Article = Compose.Reference_Article INNER JOIN Commande ON Compose.ID_Commande = Commande.ID_Commande INNER JOIN Comporte ON Comporte.Reference_Article = Article.Reference_Article INNER JOIN Modif ON Modif.ID_Modif = Comporte.ID_Modif WHERE Commande.ID_Commande = 1; // Ajouter un getId_commande dans le code sur visual studio";

    this->Acces_Base->actionRows(requete);
}

void Statistiques::Calcul_Chiffre_Affaires()
{
    String^ requete = "SELECT SUM(a.Prix_HT_Article * c.Quantite_Commande_Article) AS Total_HT, SUM((a.Prix_HT_Article * c.Quantite_Commande_Article * m.Taux_TVA_Modif)) - SUM(a.Prix_HT_Article * c.Quantite_Commande_Article) AS Total_TVA, SUM((a.Prix_HT_Article * c.Quantite_Commande_Article * (m.Taux_TVA_Modif)) * CASE WHEN ISNULL(r.Valeur_Remise, 0) = 0 THEN 1 ELSE r.Valeur_Remise END) AS Total_TTC FROM Compose c JOIN Article a ON c.Reference_Article = a.Reference_Article JOIN Comporte com ON a.Reference_Article = com.Reference_Article JOIN Modif m ON com.ID_Modif = m.ID_Modif JOIN Commande co ON c.ID_Commande = co.ID_Commande LEFT JOIN Comprend cr ON co.ID_Commande = cr.ID_Commande LEFT JOIN Remise r ON cr.ID_Remise = r.ID_Remise";

    this->Acces_Base->actionRows(requete);
}

void Statistiques::Produit_A_Commander()
{
    String^ requete = "SELECT Nom_Article, Quantite_Stock_Article, Seuil_Reapprovisionnement_Article FROM Article WHERE Quantite_Stock_Article < Seuil_Reapprovisionnement_Article; ";

    this->Acces_Base->actionRows(requete);
}

void Statistiques::Calcul_Montant_Client(int^ id)
{
    String^ requete = "SELECT SUM( Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * CASE WHEN ISNULL(Modif.Taux_Reduction_Modif, 0) = 0 THEN 1 WHEN Article.Sueil_Reduction_Article <= Compose.Quantite_Commande_Article THEN(Modif.Taux_Reduction_Modif) ELSE 1 END ) AS MontantTotalClient FROM Article INNER JOIN Compose ON Article.Reference_Article = Compose.Reference_Article INNER JOIN Commande ON Compose.ID_Commande = Commande.ID_Commande INNER JOIN Comporte ON Comporte.Reference_Article = Article.Reference_Article INNER JOIN Modif ON Modif.ID_Modif = Comporte.ID_Modif INNER JOIN Effectue ON Commande.ID_Commande = Effectue.ID_Commande INNER JOIN Clients ON Effectue.ID_Clients = Clients.ID_Clients WHERE Clients.ID_Clients = " + id;

    this->Acces_Base->actionRows(requete);
}

void Statistiques::Articles_Plus_Vendus()
{
    String^ requete = "SELECT TOP 10 Article.Nom_Article, SUM(Quantite_Commande_Article) AS Total_Ventes FROM Article LEFT JOIN Compose ON Article.Reference_Article = Compose.Reference_Article GROUP BY Article.Reference_Article, Article.Nom_Article ORDER BY Total_Ventes DESC; ";

    this->Acces_Base->actionRows(requete);
}

void Statistiques::Articles_Moins_Vendus()
{
    String^ requete = "SELECT TOP 10 Article.Nom_Article, SUM(Quantite_Commande_Article) AS Total_Ventes FROM Article LEFT JOIN Compose ON Article.Reference_Article = Compose.Reference_Article GROUP BY Article.Reference_Article, Article.Nom_Article ORDER BY Total_Ventes ASC; ";

    this->Acces_Base->actionRows(requete);
}


void Statistiques::Calcul_Valeur_Commerciale_Stock()
{
    String^ requete = "SELECT SUM((Prix_HT_Article * (Modif.Taux_TVA_Modif)) * Quantite_Stock_Article) AS Valeur_Commerciale_Stock FROM Article INNER JOIN Comporte ON Article.Reference_Article = Comporte.Reference_Article INNER JOIN Modif ON Comporte.ID_Modif = Modif.ID_Modif; ";

    this->Acces_Base->actionRows(requete);
}

void Statistiques::Calcul_Valeur_Achat_Stock()
{
    String^ requete = "SELECT SUM(Prix_HT_Article * Quantite_Stock_Article) AS Valeur_Achat_Stock FROM Article";

    this->Acces_Base->actionRows(requete);
}

//String^ Statistiques::Simulation_Variations()
//{
    //return "0"; // A completer
//}
