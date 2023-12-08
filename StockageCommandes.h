#pragma once
#include "AccesBase.h"
#include "MapStockageCommande.h"

using namespace System;
using namespace System::IO;
using namespace System::Data;

ref class StockageCommandes
{
private:
	AB::AccesBase^ Acces_Base;
	StoCom::CLgenerateSQLStoCom^ map;

public:
	StockageCommandes();
	void ajouter(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison);
	void supprimer(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison);
	void modifier(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison);
	DataSet^ afficher(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison, String^ NomTable);
	DataSet^ afficher_tout(String^ NomTable);
	void imprimer();
};