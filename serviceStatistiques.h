#pragma once
#include "Statistiques.h"
#include "AccesBase.h"

namespace servstat
{
	ref class serviceStatistiques
	{
	private:
		stat::Statistiques^ Statistiques;
		AB::AccesBase^ Acces_Base;

	public:
		serviceStatistiques();
		Data::DataSet^ Calcul_Panier_MoyenSERVICE(int, String^ NomTable);  // en fonction de l'id commande
		Data::DataSet^ Calcul_Chiffre_AffairesSERVICE(String^ NomTable);
		Data::DataSet^ Produit_A_CommanderSERVICE(String^ NomTable);
		Data::DataSet^ Calcul_Montant_ClientSERVICE(int, String^ NomTable);	// en fonction de l'id client
		Data::DataSet^ Articles_Plus_VendusSERVICE(String^ NomTable);
		Data::DataSet^ Articles_Moins_VendusSERVICE(String^ NomTable);
		Data::DataSet^ Calcul_Valeur_Commerciale_StockSERVICE(String^ NomTable);
		Data::DataSet^ Calcul_Valeur_Achat_StockSERVICE(String^ NomTable);
		//String^ Simulation_Variations();

	};
}
