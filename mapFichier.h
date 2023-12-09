#pragma once

using namespace System;

ref class mapFichier
{
private:
	int^ id_commande;

public:
	mapFichier();
	mapFichier(int^ id);
	int^ get_id_commande();
	void set_id_commande(int^ id);
	String^ SELECT_commande();
	String^ SELECT_totaux();
	String^ SELECT_reference();
	String^ SELECT_id_client();
	String^ SELECT_nom_client();
	String^ SELECT_adresse_facturation();
	String^ SELECT_adresse_livraison();
	String^ SELECT_date_emission();
	String^ SELECT_date_livraison();
};