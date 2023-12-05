#pragma once
#include "Personne.h"
#include "Adresse.h"

ref class Client : public Personne
{
private:
	String^ Date_Naissance;
	String^ Date_Premier_Achat;

public:
	Client();
	Client(String^ date_naissance, String^ date_premier_achat, int^ ID, String^ nom, String^ prenom);
	List<Adresse^>^ get_Adresse_Facturation();
	List<Adresse^>^ get_Adresse_Livraison();
	String^ get_Date_Naissance();
	void set_Date_Naissance(String^ date_naissance);
	String^ get_Date_Premier_Achat();
	void set_Date_Premier_Achat(String^ date_premier_achat);
	String^ ajouter();
	String^ supprimer();
	String^ modifier();
	String^ afficher();
};