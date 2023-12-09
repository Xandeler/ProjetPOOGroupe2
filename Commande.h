#pragma once
#include "Client.h"
#include "Article.h"
#include "Adresse.h"
#include "AccesBase.h"
#include "mapArticle.h"

using namespace System;

ref class Commande
{
private:
	AB::AccesBase^ Acces_Base;
	NS_mapArticle::mapArticle^ map;
	int^ ID_Commande;
	String^ Reference;
	String^ Date_Livraison;
	String^ Date_Emission;
	String^ Date_Paiement;
	String^ Moyen_Paiement;
	double^ Total_HT;
	double^ Total_TTC;
	String^ Nom_Societe;
	AD::Adresse^ Adresse_Societe;
	int^ Numero_Service_Clients;
	String^ Logo;
	AD::Adresse^ Adresse_Facturation;
	AD::Adresse^ Adresse_Livraison;

public:
	Commande();
	Commande(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison);
	int^ get_ID_Commande();
	void set_ID_Commande(int^ id);
	String^ get_Reference();
	void set_Reference(String^ reference);
	String^ get_Date_Livraison();
	void set_Date_Livraison(String^ date_livraison);
	String^ get_Date_Emission();
	void set_Date_Emission(String^ date_emission);
	String^ get_Date_Paiement();
	void set_Date_Paiement(String^ date_paiement);
	String^ get_Moyen_Paiement();
	void set_Moyen_Paiement(String^ moyen_paiement);
	double^ get_Total_HT();
	void set_Total_HT(double^ total_ht);
	double^ get_Total_TTC();
	void set_Total_TTC(double^ total_ttc);
	String^ get_Nom_Societe();
	void set_Nom_Societe(String^ nom_societe);
	AD::Adresse^ get_Adresse_Societe();
	void set_Adresse_Societe(AD::Adresse^ adresse_societe);
	int^ get_Numero_Service_Clients();
	void set_Numero_Service_Clients(int^ numero_service_clients);
	String^ get_Logo();
	void set_Logo(String^ logo);
	AD::Adresse^ get_Adresse_Facturation();
	void set_Adresse_Facturation(AD::Adresse^ adresse_facturation);
	AD::Adresse^ get_Adresse_Livraison();
	void set_Adresse_Livraison(AD::Adresse^ adresse_livraison);
	void ajouter_Article(int^ id_commande, int^ id_article, int^ quantite);
};