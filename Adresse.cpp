#include "Adresse.h"
#include <string>



AD::Adresse::Adresse()
{
	this->set_Code_Postal(00000);
	this->set_Nom_Ville("Rien");
	this->set_Rue("Rien");
	this->set_Numero_Maison(1);
	this->set_Nature("Rien");
}

AD::Adresse::Adresse(int code_postal, String^ nom_ville, String^ rue, int numero_maison, String^ nature)
{
	this->set_Code_Postal(code_postal);
	this->set_Nom_Ville(nom_ville);
	this->set_Rue(rue);
	this->set_Numero_Maison(numero_maison);
	this->set_Nature(nature);
}

int AD::Adresse::get_Code_Postal()
{
	return this->Code_Postal;
}

void AD::Adresse::set_Code_Postal(int code_postal)
{
	this->Code_Postal = code_postal;
}

String^ AD::Adresse::get_Nom_Ville()
{
	return this->Nom_Ville;
}

void AD::Adresse::set_Nom_Ville(String^ nom_ville)
{
	this->Nom_Ville = nom_ville;
}

String^ AD::Adresse::get_Rue()
{
	return this->Rue;
}

void AD::Adresse::set_Rue(String^ rue)
{
	this->Rue = rue;
}

void AD::Adresse::set_Numero_Maison(int numero_maison)
{
	this->Numero_Maison = numero_maison;

}
int AD::Adresse::get_Numero_Maison()
{
	return this->Numero_Maison;
}

String^ AD::Adresse::get_Nature()
{
	return this->Nature;
}

void AD::Adresse::set_Nature(String^ nature)
{
	this->Nature = nature;
}

int AD::Adresse::verifier_Ville(String^ add)
{

	int id_ville = 31;
	if (add == "Paris")
		return 1;
	else if (add == "Marseille")
		return 2;
	else if (add == "Lyon")
		return 3;
	else if (add == "Toulouse")
		return 4;
	else if (add == "Nice")
		return 5;
	else if (add == "Nantes")
		return 6;
	else if (add == "Strasbourg")
		return 7;
	else if (add == "Montpellier")
		return 8;
	else if (add == "Bordeaux")
		return 9;
	else if (add == "Lille")
		return 10;
	else if (add == "Rennes")
		return 11;
	else if (add == "Reims")
		return 12;
	else if (add == "Le Havre")
		return 13;
	else if (add == "Saint-Étienne")
		return 14;
	else if (add == "Toulon")
		return 15;
	else if (add == "Le Mans")
		return 16;
	else if (add == "Aix-en-Provence")
		return 17;
	else if (add == "Amiens")
		return 18;
	else if (add == "Perpignan")
		return 19;
	else if (add == "Boulogne-Billancourt")
		return 20;
	else if (add == "Metz")
		return 21;
	else if (add == "Besançon")
		return 22;
	else if (add == "Grenoble")
		return 23;
	else if (add == "Dijon")
		return 24;
	else if (add == "Nîmes")
		return 25;
	else if (add == "Angers")
		return 26;
	else if (add == "Villeurbanne")
		return 27;
	else if (add == "Levallois-Perret")
		return 28;
	else if (add == "Clermont-Ferrand")
		return 29;
	else if (add == "Antibes")
		return 30;
	else
		return id_ville;
}
