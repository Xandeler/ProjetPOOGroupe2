#include "Stock.h"

NS_Stock::Stock::Stock()
{
	this->map = gcnew NS_mapStock::mapStock();
	this->article = gcnew NS_Article::Article();
	this->Acces_Base = gcnew AB::AccesBase();
}

void NS_Stock::Stock::ajouter(int^ id, String^ nom, int^ quantite, float^ prix_ht, float^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction)
{
	String^ requete;

	this->map = gcnew NS_mapStock::mapStock(id, nom, quantite, prix_ht, taux_tva, seuil_reapprovisionnement, seuil_reduction);

	requete = this->map->INSERT();

	this->Acces_Base->actionRows(requete);
}

void NS_Stock::Stock::supprimer(int^ id, String^ nom, int^ quantite, float^ prix_ht, float^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction)
{
	String^ requete;

	this->map = gcnew NS_mapStock::mapStock(id, nom, quantite, prix_ht, taux_tva, seuil_reapprovisionnement, seuil_reduction);

	requete = this->map->DELETE();

	this->Acces_Base->actionRows(requete);
}

void NS_Stock::Stock::modifier(int^ id, String^ nom, int^ quantite, float^ prix_ht, float^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction, int^ id_m, String^ nom_m, int^ quantite_m, float^ prix_ht_m, float^ taux_tva_m, int^ seuil_reapprovisionnement_m, int^ seuil_reduction_m)
{
	String^ requete;

	this->map = gcnew NS_mapStock::mapStock(id, nom, quantite, prix_ht, taux_tva, seuil_reapprovisionnement, seuil_reduction);

	requete = this->map->UPDATE(id_m, nom_m, quantite_m, prix_ht_m, taux_tva_m, seuil_reapprovisionnement_m, seuil_reduction_m);

	this->Acces_Base->actionRows(requete);
}

Data::DataSet^ NS_Stock::Stock::afficher(String^ NomTable)
{
	String^ requete;

	requete = this->map->SELECT();

	return this->Acces_Base->getRows(requete, NomTable);
}
