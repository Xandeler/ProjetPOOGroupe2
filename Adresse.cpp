#include "Adresse.h"

Adresse::Adresse()
{
	this->set_Code_Postal(00000);
	this->set_Nom_Ville("Rien");
	this->set_Rue("Rien");
	this->set_Numero_Maison("0");
	this->set_Nature("Rien");
}

Adresse::Adresse(int^ code_postal, String^ nom_ville, String^ rue, String^ numero_maison, String^ nature)
{
	this->set_Code_Postal(code_postal);
	this->set_Nom_Ville(nom_ville);
	this->set_Rue(rue);
	this->set_Numero_Maison(numero_maison);
	this->set_Nature(nature);
}

int^ Adresse::get_Code_Postal()
{
	return this->Code_Postal;
}

void Adresse::set_Code_Postal(int^ code_postal)
{
	this->Code_Postal = code_postal;
}

String^ Adresse::get_Nom_Ville()
{
	return this->Nom_Ville;
}

void Adresse::set_Nom_Ville(String^ nom_ville)
{
	this->Nom_Ville = nom_ville;
}

String^ Adresse::get_Rue()
{
	return this->Rue;
}

void Adresse::set_Rue(String^ rue)
{
	this->Rue = rue;
}

String^ Adresse::get_Numero_Maison()
{
	return this->Numero_Maison;
}

void Adresse::set_Numero_Maison(String^ numero_maison)
{
	this->Numero_Maison = numero_maison;
}

String^ Adresse::get_Nature()
{
	return this->Nature;
}

void Adresse::set_Nature(String^ nature)
{
	this->Nature = nature;
}

bool^ Adresse::verifier_Ville()
{
	bool^ nom_ville=true;

	return nom_ville;
}
