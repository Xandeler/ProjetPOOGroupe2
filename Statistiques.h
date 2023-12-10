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

		String^ Calcul_Panier_Moyen(int, String^ NomTable);  // en fonction de l'id commande
		String^ Calcul_Chiffre_Affaires(String^ NomTable);
		String^ Produit_A_Commander(String^ NomTable);
		String^ Calcul_Montant_Client(int, String^ NomTable);	// en fonction de l'id client
		String^ Articles_Plus_Vendus(String^ NomTable);
		String^ Articles_Moins_Vendus(String^ NomTable);
		String^ Calcul_Valeur_Commerciale_Stock(String^ NomTable);
		String^ Calcul_Valeur_Achat_Stock(String^ NomTable);
		//String^ Simulation_Variations();
	};
}