#pragma once
#include "Commande.h"

namespace StoCom
{
	ref class CLgenerateSQLStoCom
	{
	private:
		CO::Commande^ commande;

	public:
		CLgenerateSQLStoCom();
		CLgenerateSQLStoCom(int^ id_commande, int^ id_client, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison);
		System::String^ SQL_Select(void);
		System::String^ SQL_Select_all(void);
		System::String^ SQL_Insert(void);
		System::String^ SQL_Delete(void);
		System::String^ SQL_Update(void);
	};
}