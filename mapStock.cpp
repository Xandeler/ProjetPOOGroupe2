#include "mapStock.h"

NS_mapStock::mapStock::mapStock()
{
	this->article = gcnew NS_Article::Article();
}

NS_mapStock::mapStock::mapStock(int^ id, String^ nom, int^ quantite, float^ prix_ht, int^ seuil_reapprovisionnement, int^ seuil_reduction)
{
	this->article = gcnew NS_Article::Article(id, nom, quantite, prix_ht, seuil_reapprovisionnement, seuil_reduction);
}

String^ NS_mapStock::mapStock::SELECT()
{
	return "SELECT Article.Reference_Article, Article.Nom_Article, Article.Quantite_Stock_Article, Article.Prix_HT_Article, Modif.Taux_TVA_Modif, Article.Seuil_Reduction_Article, Article.Seuil_Reapprovisionnement_Article FROM Article INNER JOIN Comporte ON Article.Reference_Article = Comporte.Reference_Article INNER JOIN Modif ON Comporte.ID_Modif = Modif.ID_Modif; ";
}

String^ NS_mapStock::mapStock::INSERT()
{
	return "INSERT INTO Article (Prix_HT_Article, Nom_Article, Seuil_Reduction_Article, Quantite_Stock_Article, Seuil_Reapprovisionnement_Article) VALUES(" + this->article->get_Prix_HT() + ", '" + this->article->get_Nom() + "', " + this->article->get_Seuil_Reduction() + ", " + this->article->get_Quantite() + ", " + this->article->get_Seuil_Reapprovisionnement() + "); INSERT INTO Comporte (ID_Modif, Reference_Article) VALUES((SELECT ID_Modif FROM Modif WHERE Taux_TVA_Modif = 1.2), (SELECT Reference_Article FROM Article WHERE Nom_Article = '" + this->article->get_Nom() + "'));";
}

String^ NS_mapStock::mapStock::UPDATE(int^ id_m, String^ nom_m, int^ quantite_m, float^ prix_ht_m, int^ seuil_reapprovisionnement_m, int^ seuil_reduction_m)
{
	return "UPDATE Article SET Prix_HT_Article = " + prix_ht_m + ", Nom_Article = '" + nom_m + "', Seuil_Reduction_Article = " + seuil_reduction_m + ", Quantite_Stock_Article = " + quantite_m + ", Seuil_Reapprovisionnement_Article = " + seuil_reapprovisionnement_m + " WHERE Reference_Article = " + this->article->get_ID_Article() + "; ";
}

String^ NS_mapStock::mapStock::DELETE()
{
	return "DELETE FROM Compose WHERE Reference_Article = " + this->article->get_ID_Article() + "; DELETE FROM Comporte WHERE Reference_Article = " + this->article->get_ID_Article() + "; DELETE FROM Article WHERE Reference_Article = " + this->article->get_ID_Article() + ";";
}