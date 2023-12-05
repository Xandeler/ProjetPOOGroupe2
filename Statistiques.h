#pragma once
#include "Stock.h"
#include "StockageCommandes.h"
#include "AccesBase.h"


ref class Statistiques
{
private:
	AccesBase^ Acces_Base;

public:
	Statistiques();
	String^ Calcul_Panier_Moyen();
	String^ Calcul_Chiffre_Affaires();
	String^ Produit_A_Commander();
	String^ Calcul_Montant_Client(int^ id);
	String^ Articles_Plus_Vendus();
	String^ Articles_Moins_Vendus();
	String^ Calcul_Valeur_Commerciale_Stock();
	String^ Calcul_Valeur_Achat_Stock();
	String^ Simulation_Variations();
};