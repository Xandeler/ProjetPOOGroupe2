#pragma once
using namespace System;


namespace stat {
	ref class Statistiques
	{
	public:
		Statistiques();

		String^ Calcul_Panier_Moyen(int);  // en fonction de l'id commande
		String^ Calcul_Chiffre_Affaires();
		String^ Produit_A_Commander();
		String^ Calcul_Montant_Client(int);	// en fonction de l'id client
		String^ Articles_Plus_Vendus();
		String^ Articles_Moins_Vendus();
		String^ Calcul_Valeur_Commerciale_Stock();
		String^ Calcul_Valeur_Achat_Stock();
		//String^ Simulation_Variations();
	};
}