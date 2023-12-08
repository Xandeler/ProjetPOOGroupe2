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
	void Calcul_Panier_Moyen();
	void Calcul_Chiffre_Affaires();
	void Produit_A_Commander();
	void Calcul_Montant_Client(int^ id);
	void Articles_Plus_Vendus();
	void Articles_Moins_Vendus();
	void Calcul_Valeur_Commerciale_Stock();
	void Calcul_Valeur_Achat_Stock();
	//String^ Simulation_Variations();
};