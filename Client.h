#pragma once
#include "Personne.h"
#include "Adresse.h"

namespace CL {
ref class Client : public Personne
{
protected:
	String^ Date_Naissance;
	String^ Date_Premier_Achat;
	AD::Adresse^ Adresse_Facturation;
	AD::Adresse^ Adresse_Livraison;

public:
	Client();
	Client(String^ date_naissance, String^ date_premier_achat, int^ ID, String^ nom, String^ prenom, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison);
	String^ get_Date_Naissance();
	void set_Date_Naissance(String^ date_naissance);
	String^ get_Date_Premier_Achat();
	void set_Date_Premier_Achat(String^ date_premier_achat);
	AD::Adresse^ get_Adresse_Facturation();
	void set_Adresse_FacturationI(int numeroMaison, System::String^ nomRue);
	void set_Adresse_Facturation(AD::Adresse^ adresse_facturation);
	AD::Adresse^ get_Adresse_Livraison();
	void set_Adresse_LivraisonI(int numeroMaison, System::String^ nomRue);
	void set_Adresse_Livraison(AD::Adresse^ adresse_livraison);
	void ajouter();
	void supprimer();
	void modifier();
	String^ afficher();
};
}