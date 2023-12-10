#include "Statistiques.h"

stat::Statistiques::Statistiques()
{
    Client = gcnew CL::Client();
    Commande = gcnew CO::Commande();
}

void stat::Statistiques::set_commande(CO::Commande^ commande)
{
    this->Commande = commande;
}

void stat::Statistiques::set_client(CL::Client^ client)
{
    this->Client = client;
}

CO::Commande^ stat::Statistiques::get_commande()
{
    return this->Commande;
}

CL::Client^ stat::Statistiques::get_client()
{
    return this->Client;
}

String^ stat::Statistiques::Calcul_Panier_Moyen(int id, String^ NomTable)
{
    String^ requete = "SELECT SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * Taux_Reduction_Modif) / SUM(Quantite_Commande_Article) AS PrixPanierMoyen ";
    requete += "FROM Article ";
    requete += "INNER JOIN Compose ON Article.Reference_Article = Compose.Reference_Article ";
    requete += "INNER JOIN Commande ON Compose.ID_Commande = Commande.ID_Commande ";
    requete += "INNER JOIN Comporte ON Comporte.Reference_Article = Article.Reference_Article ";
    requete += "INNER JOIN Modif ON Modif.ID_Modif = Comporte.ID_Modif ";
    requete += "WHERE Commande.ID_Commande = " + id + ";";

    return requete;
}

String^ stat::Statistiques::Calcul_Chiffre_Affaires(String^ NomTable)
{
    String^ requete = "SELECT SUM(a.Prix_HT_Article * c.Quantite_Commande_Article) AS Total_HT, ";
    requete += "SUM((a.Prix_HT_Article * c.Quantite_Commande_Article * m.Taux_TVA_Modif)) - SUM(a.Prix_HT_Article * c.Quantite_Commande_Article) AS Total_TVA, ";
    requete += "SUM((a.Prix_HT_Article * c.Quantite_Commande_Article * (m.Taux_TVA_Modif)) * CASE WHEN ISNULL(r.Valeur_Remise, 0) = 0 THEN 1 ELSE r.Valeur_Remise END) AS Total_TTC ";
    requete += "FROM Compose c ";
    requete += "JOIN Article a ON c.Reference_Article = a.Reference_Article ";
    requete += "JOIN Comporte com ON a.Reference_Article = com.Reference_Article ";
    requete += "JOIN Modif m ON com.ID_Modif = m.ID_Modif ";
    requete += "JOIN Commande co ON c.ID_Commande = co.ID_Commande ";
    requete += "LEFT JOIN Comprend cr ON co.ID_Commande = cr.ID_Commande ";
    requete += "LEFT JOIN Remise r ON cr.ID_Remise = r.ID_Remise;";

    return requete;
}

String^ stat::Statistiques::Produit_A_Commander(String^ NomTable)
{
    String^ requete = "SELECT Nom_Article, Quantite_Stock_Article, Seuil_Reapprovisionnement_Article ";
    requete += "FROM Article ";
    requete += "WHERE Quantite_Stock_Article < Seuil_Reapprovisionnement_Article;";

    return requete;
}

String^ stat::Statistiques::Calcul_Montant_Client(int id, String^ NomTable)
{
    String^ requete = "SELECT SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * ";
    requete += "CASE ";
    requete += "WHEN ISNULL(Modif.Taux_Reduction_Modif, 0) = 0 THEN 1 ";
    requete += "WHEN Article.Seuil_Reduction_Article <= Compose.Quantite_Commande_Article THEN Modif.Taux_Reduction_Modif ";
    requete += "ELSE 1 END) AS MontantTotalClient ";
    requete += "FROM Article ";
    requete += "INNER JOIN Compose ON Article.Reference_Article = Compose.Reference_Article ";
    requete += "INNER JOIN Commande ON Compose.ID_Commande = Commande.ID_Commande ";
    requete += "INNER JOIN Comporte ON Comporte.Reference_Article = Article.Reference_Article ";
    requete += "INNER JOIN Modif ON Modif.ID_Modif = Comporte.ID_Modif ";
    requete += "INNER JOIN Effectue ON Commande.ID_Commande = Effectue.ID_Commande ";
    requete += "INNER JOIN Clients ON Effectue.ID_Clients = Clients.ID_Clients ";
    requete += "WHERE Clients.ID_Clients = " + id + ";";

    return requete;
}

String^ stat::Statistiques::Articles_Plus_Vendus(String^ NomTable)
{
    String^ requete = "SELECT TOP 10 Article.Nom_Article, SUM(Quantite_Commande_Article) AS Total_Ventes ";
    requete += "FROM Article ";
    requete += "LEFT JOIN Compose ON Article.Reference_Article = Compose.Reference_Article ";
    requete += "GROUP BY Article.Reference_Article, Article.Nom_Article ";
    requete += "ORDER BY Total_Ventes DESC;";

    return requete;
}

String^ stat::Statistiques::Articles_Moins_Vendus(String^ NomTable)
{
    String^ requete = "SELECT TOP 10 Article.Nom_Article, SUM(Quantite_Commande_Article) AS Total_Ventes ";
    requete += "FROM Article ";
    requete += "LEFT JOIN Compose ON Article.Reference_Article = Compose.Reference_Article ";
    requete += "GROUP BY Article.Reference_Article, Article.Nom_Article ";
    requete += "ORDER BY Total_Ventes ASC;";

    return requete;
}


String^ stat::Statistiques::Calcul_Valeur_Commerciale_Stock(String^ NomTable)
{
    String^ requete = "SELECT SUM((Prix_HT_Article * (Modif.Taux_TVA_Modif)) * Quantite_Stock_Article) AS Valeur_Commerciale_Stock ";
    requete += "FROM Article ";
    requete += "INNER JOIN Comporte ON Article.Reference_Article = Comporte.Reference_Article ";
    requete += "INNER JOIN Modif ON Comporte.ID_Modif = Modif.ID_Modif;";

    return requete;
}

String^ stat::Statistiques::Calcul_Valeur_Achat_Stock(String^ NomTable)
{
    String^ requete = "SELECT SUM(Prix_HT_Article * Quantite_Stock_Article) AS Valeur_Achat_Stock ";
    requete += "FROM Article;";

    return requete;
}

//String^ Statistiques::Simulation_Variations()
//{
    //return "0"; // A completer
//}
