#pragma once
#include "Personne.h"
#include "Adresse.h"

ref class Client : public Personne
{
protected:
	String^ Date_Naissance;
	String^ Date_Premier_Achat;
	Adresse^ Adresse_Facturation;
	Adresse^ Adresse_Livraison;

public:
	Client();
	Client(String^ date_naissance, String^ date_premier_achat, int^ ID, String^ nom, String^ prenom, Adresse^ adresse_facturation, Adresse^ adresse_livraison);
	String^ get_Date_Naissance();
	void set_Date_Naissance(String^ date_naissance);
	String^ get_Date_Premier_Achat();
	void set_Date_Premier_Achat(String^ date_premier_achat);
	Adresse^ get_Adresse_Facturation();
	void set_Adresse_Facturation(Adresse^ adresse_facturation);
	Adresse^ get_Adresse_Livraison();
	void set_Adresse_Livraison(Adresse^ adresse_livraison);
	void ajouter();
	void supprimer();
	void modifier();
	String^ afficher();
};