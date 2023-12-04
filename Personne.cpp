#include "Personne.h"

int^ Personne::get_ID_Personne()
{
	return this->ID_Personne;
}

void Personne::set_ID_Personne(int^ ID)
{
	this->ID_Personne = ID;
}

String^ Personne::get_Nom()
{
	return this->Nom;
}

void Personne::set_Nom(String^ nom)
{
	this->Nom = nom;
}

String^ Personne::get_Prenom()
{
	return this->Prenom;
}

void Personne::set_Prenom(String^ prenom)
{
	this->Prenom = prenom;
}

Personne::Personne()
{
	this->set_ID_Personne(1);
	this->set_Nom("RIEN");
	this->set_Prenom("Rien");
}

Personne::Personne(int^ ID, String^ nom, String^ prenom)
{
	this->set_ID_Personne(ID);
	this->set_Nom(nom);
	this->set_Prenom(prenom);
}
