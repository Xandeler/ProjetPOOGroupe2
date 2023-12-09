#include "mapArticle.h"

NS_mapArticle::mapArticle::mapArticle()
{
	
}

String^ NS_mapArticle::mapArticle::INSERT(int^ id_commande, int^ id_article, int^ quantite)
{
	return "INSERT INTO Compose (ID_Commande, Reference_Article, Quantite_Commande_Article) VALUES(" + id_commande + ", " + id_article + ", " + quantite + "); ";
}
