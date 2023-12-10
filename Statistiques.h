#pragma once
#include "Client.h"
#include "Commande.h"
using namespace System;


namespace stat {
	ref class Statistiques
	{
	private:
		CL::Client^ Client;
		CO::Commande^ Commande;

	public:
		Statistiques();


		void set_commande(CO::Commande^ commande);
		void set_client(CL::Client^ client);
		CO::Commande^ get_commande();
		CL::Client^ get_client();

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