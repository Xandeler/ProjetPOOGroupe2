#pragma once
#include "mapStock.h"
#include "Article.h"
#include "AccesBase.h"

using namespace System;

namespace NS_Stock
{
	ref class Stock
	{
	private:
		AB::AccesBase^ Acces_Base;
		NS_Article::Article^ article;
		NS_mapStock::mapStock^ map;

	public:
		Stock();
		void ajouter(int^ id, String^ nom, int^ quantite, float^ prix_ht, int^ seuil_reapprovisionnement, int^ seuil_reduction);
		void supprimer(int^ id, String^ nom, int^ quantite, float^ prix_ht, int^ seuil_reapprovisionnement, int^ seuil_reduction);
		void modifier(int^ id, String^ nom, int^ quantite, float^ prix_ht, int^ seuil_reapprovisionnement, int^ seuil_reduction, int^ id_m, String^ nom_m, int^ quantite_m, float^ prix_ht_m, int^ seuil_reapprovisionnement_m, int^ seuil_reduction_m);
		Data::DataSet^ afficher(String^ NomTable);
	};
}