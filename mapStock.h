#pragma once
#include "Article.h"

namespace NS_mapStock
{
	ref class mapStock
	{
	private:
		NS_Article::Article^ article;

	public:
		mapStock();
		mapStock(int^ id, String^ nom, int^ quantite, float^ prix_ht, float^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction);
		String^ SELECT();
		String^ INSERT();
		String^ UPDATE(int^ id_m, String^ nom_m, int^ quantite_m, float^ prix_ht_m, float^ taux_tva_m, int^ seuil_reapprovisionnement_m, int^ seuil_reduction_m);
		String^ DELETE();
	};
}