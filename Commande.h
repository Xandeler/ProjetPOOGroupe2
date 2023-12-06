#pragma once
#include "Client.h"
#include "Article.h"
#include "Adresse.h"
#include "AccesBase.h"

using namespace System;

ref class Commande
{
private:
	AccesBase^ Acces_Base;
	int^ ID_Commande;
	String^ Lettres_Nom;
	String^ Lettres_Prenom;
	int^ Annee;
	String^ Lettres_Ville;
	String^ Reference;
	String^ Date_Livraison;
	String^ Date_Emission;
	String^ Date_Paiement;
	String^ Moyen_Paiement;
	double^ Total_HT;
	double^ Total_TTC;
	String^ Nom_Societe;
	Adresse^ Adresse_Societe;
	int^ Numero_Service_Clients;
	String^ Logo;
	Adresse^ Adresse_Facturation;
	Adresse^ Adresse_Livraison;

public:
	Commande();
	Commande(int^ id, String^ lettres_nom, String^ lettres_prenom, int^ annee, String^ lettres_ville, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, Adresse^ adresse_facturation, Adresse^ adresse_livraison);
	int^ get_ID_Commande();
	void set_ID_Commande(int^ id);
	String^ get_Lettres_Nom();
	void set_Lettres_Nom(String^ lettres_nom);
	String^ get_Lettres_Prenom();
	void set_Lettres_Prenom(String^ lettres_prenom);
	int^ get_Annee();
	void set_Annee(int^ annee);
	String^ get_Lettres_Ville();
	void set_Lettres_Ville(String^ lettres_ville);
	String^ get_Reference();
	void set_Reference(int^ id, String^ lettrres_nom, String^ lettres_prenom, String^ lettres_ville, int^ annee);
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
	Adresse^ get_Adresse_Societe();
	void set_Adresse_Societe(Adresse^ adresse_societe);
	int^ get_Numero_Service_Clients();
	void set_Numero_Service_Clients(int^ numero_service_clients);
	String^ get_Logo();
	void set_Logo(String^ logo);
	Adresse^ get_Adresse_Facturation();
	void set_Adresse_Facturation(Adresse^ adresse_facturation);
	Adresse^ get_Adresse_Livraison();
	void set_Adresse_Livraison(Adresse^ adresse_livraison);
	void ajouter_Article();
	void supprimer_Article();
	void modifier_Article();
	void afficher_Article();
};