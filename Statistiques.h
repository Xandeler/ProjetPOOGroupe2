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
	void Calcul_Panier_Moyen(StockageCommandes^ commandes);
	void Calcul_Chiffre_Affaires(StockageCommandes^ commandes, Stock^ articles);
	void Produit_A_Commander(Stock^ articles);
	void Calcul_Montant_Client(StockageCommandes commandes);
	void Articles_Plus_Vendus(StockageCommandes commandes);
	void Articles_Moins_Vendus(StockageCommandes commandes);
	void Calcul_Valeur_Commerciale_Stock(Stock^ articles);
	void Calcul_Valeur_Achat_Stock(Stock^ articles);
	void Simulation_Variations();
};