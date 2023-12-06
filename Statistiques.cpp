#include "Statistiques.h"

Statistiques::Statistiques()
{
    this->Acces_Base = gcnew AccesBase();

}

String^ Statistiques::Calcul_Panier_Moyen() // FAIT
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Mettre les prix TTC totaux de toutes les commandes dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC avec le r�sultat.
    // Retourner le r�sultat.

    String^ sSql = "SELECT SUM(Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * Taux_Reduction_Modif) / SUM(Quantite_Commande_Article) AS PrixPanierMoyen FROM Article INNER JOIN Compose ON Article.Reference_Article = Compose.Reference_Article INNER JOIN Commande ON Compose.ID_Commande = Commande.ID_Commande INNER JOIN Comporte ON Comporte.Reference_Article = Article.Reference_Article INNER JOIN Modif ON Modif.ID_Modif = Comporte.ID_Modif WHERE Commande.ID_Commande = 1; // Ajouter un getId_commande dans le code sur visual studio";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Article");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Calcul_Chiffre_Affaires() // FAIT      
{
    // Cr�er une variable qui va contenir le r�sultat.
	// Mettre les prix TTC totaux de toutes les commandes dans un tableau.
	// Parcourir le tableau et additionner chaque prix TTC avec le r�sultat.
	// Retourner le r�sultat. 

    String^ sSql = "SELECT SUM(a.Prix_HT_Article * c.Quantite_Commande_Article) AS Total_HT, SUM((a.Prix_HT_Article * c.Quantite_Commande_Article * m.Taux_TVA_Modif)) - SUM(a.Prix_HT_Article * c.Quantite_Commande_Article) AS Total_TVA, SUM((a.Prix_HT_Article * c.Quantite_Commande_Article * (m.Taux_TVA_Modif)) * CASE WHEN ISNULL(r.Valeur_Remise, 0) = 0 THEN 1 ELSE r.Valeur_Remise END) AS Total_TTC FROM Compose c JOIN Article a ON c.Reference_Article = a.Reference_Article JOIN Comporte com ON a.Reference_Article = com.Reference_Article JOIN Modif m ON com.ID_Modif = m.ID_Modif JOIN Commande co ON c.ID_Commande = co.ID_Commande LEFT JOIN Comprend cr ON co.ID_Commande = cr.ID_Commande LEFT JOIN Remise r ON cr.ID_Remise = r.ID_Remise";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Article");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();


}

String^ Statistiques::Produit_A_Commander() // FAIT
{
    // Cr�er une variable qui va contenir le r�sultat.
    // R�cup�rer la liste des articles o� la quantit� est inf�rieure au seuil de r�approvisionnement.
    // Le r�sultat doit contenir tous les noms des articles de la liste s�par�s par des virgules/points virgules.
    // Retourner le r�sultat.   

    String^ sSql = "SELECT Nom_Article, Quantite_Stock_Article, Seuil_Reapprovisionnement_Article FROM Article WHERE Quantite_Stock_Article < Seuil_Reapprovisionnement_Article; ";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Article");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Calcul_Montant_Client(int^ id)
{
    // Cr�er une variable qui va contenir le r�sultat.
    // R�cup�rer la liste des commandes effectu�es par le client dont l'ID est "id".
    // Mettre tous les prix TTC des commandes de ce client dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC au r�sultat.
    // Retoruner le r�sultat.    
    // 
    String^ sSql = "SELECT SUM( Prix_HT_Article * Taux_TVA_Modif * Quantite_Commande_Article * CASE WHEN ISNULL(Modif.Taux_Reduction_Modif, 0) = 0 THEN 1 WHEN Article.Sueil_Reduction_Article <= Compose.Quantite_Commande_Article THEN(Modif.Taux_Reduction_Modif) ELSE 1 END ) AS MontantTotalClient FROM Article INNER JOIN Compose ON Article.Reference_Article = Compose.Reference_Article INNER JOIN Commande ON Compose.ID_Commande = Commande.ID_Commande INNER JOIN Comporte ON Comporte.Reference_Article = Article.Reference_Article INNER JOIN Modif ON Modif.ID_Modif = Comporte.ID_Modif INNER JOIN Effectue ON Commande.ID_Commande = Effectue.ID_Commande INNER JOIN Clients ON Effectue.ID_Clients = Clients.ID_Clients WHERE Clients.ID_Clients = " + id;
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Article");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Articles_Plus_Vendus() // FAIT
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Utiliser la table qui fait la liaison entre les commandes et les articles contenus dans chaque commande.
    // Trier les articles par le nombre de fois que chacun appara�t dans la table dans l'ordre d�croissant.
    // (Essayer d'int�grer la quantit� de chaque article sur une m�me commande.)
    // Le r�sultat doit contenir le nom des dix premiers articles s�par�s par des virgules/points virgules. 
    // 
    String^ sSql = "SELECT TOP 10 Article.Nom_Article, SUM(Quantite_Commande_Article) AS Total_Ventes FROM Article LEFT JOIN Compose ON Article.Reference_Article = Compose.Reference_Article GROUP BY Article.Reference_Article, Article.Nom_Article ORDER BY Total_Ventes DESC; ";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Articles");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Articles_Moins_Vendus() // FAIT      
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Utiliser la table qui fait la liaison entre les commandes et les articles contenus dans chaque commande.
    // Trier les articles par le nombre de fois que chacun appara�t dans la table dans l'ordre croissant.
    // (Essayer d'int�grer la quantit� de chaque article sur une m�me commande.)
    // Le r�sultat doit contenir le nom des dix premiers articles s�par�s par des virgules/points virgules.
    
    String^ sSql = "SELECT TOP 10 Article.Nom_Article, SUM(Quantite_Commande_Article) AS Total_Ventes FROM Article LEFT JOIN Compose ON Article.Reference_Article = Compose.Reference_Article GROUP BY Article.Reference_Article, Article.Nom_Article ORDER BY Total_Ventes ASC; ";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Articles");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Calcul_Valeur_Commerciale_Stock() // FAIT
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Mettre les prix TTC de tous les articles du stock dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC avec le r�sultat.
    // Retourner le r�sultat.
     
    String^ sSql = "SELECT SUM((Prix_HT_Article * (Modif.Taux_TVA_Modif)) * Quantite_Stock_Article) AS Valeur_Commerciale_Stock FROM Article INNER JOIN Comporte ON Article.Reference_Article = Comporte.Reference_Article INNER JOIN Modif ON Comporte.ID_Modif = Modif.ID_Modif; ";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Article");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Calcul_Valeur_Achat_Stock() // FAIT
{
    //  SELECT SUM(Prix_HT_Article * Quantite_Stock_Article) AS Valeur_Commerciale_Stock FROM Article

    // Cr�er une variable qui va contenir le r�sultat.
    // Mettre les prix HT de tous les articles du stock dans un tableau.
    // Parcourir le tableau et additionner chaque prix HT avec le r�sultat
    // Retourner le r�sultat.

    String^ sSql = "SELECT SUM(Prix_HT_Article * Quantite_Stock_Article) AS Valeur_Achat_Stock FROM Article";
    this->Acces_Base = gcnew AccesBase();
    System::Data::DataSet^ oDs = this->Acces_Base->getRows(sSql, "Article");
    return oDs->Tables["Valeur_Achat_Stock"]->Rows[0]->ItemArray[0]->ToString();
}

String^ Statistiques::Simulation_Variations()
{
    return 0; // A completer
}
