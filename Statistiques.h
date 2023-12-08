#pragma once
#include "Stock.h"
#include "StockageCommandes.h"
#include "AccesBase.h"


ref class Statistiques
{
private:
	AB::AccesBase^ Acces_Base;

public:
	Statistiques();
	System::Data::DataSet^ Calcul_Panier_Moyen(String^ NomTable);
	System::Data::DataSet^ Calcul_Chiffre_Affaires(String^ NomTable);
	System::Data::DataSet^ Produit_A_Commander(String^ NomTable);
	System::Data::DataSet^ Calcul_Montant_Client(int^ id, String^ NomTable);
	System::Data::DataSet^ Articles_Plus_Vendus(String^ NomTable);
	System::Data::DataSet^ Articles_Moins_Vendus(String^ NomTable);
	System::Data::DataSet^ Calcul_Valeur_Commerciale_Stock(String^ NomTable);
	System::Data::DataSet^ Calcul_Valeur_Achat_Stock(String^ NomTable);
	//String^ Simulation_Variations();
};