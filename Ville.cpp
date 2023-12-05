#include "Ville.h"

Ville::Ville()
{
	this->set_ID_Ville(1);
	this->set_Nom("Rien");
}

Ville::Ville(int^ id, String^ nom)
{
	this->set_ID_Ville(id);
	this->set_Nom(nom);
}

void Ville::ajouter()
{
	
}

void Ville::supprimer(int^ id)
{

}

int^ Ville::get_ID_Ville()
{
	return this->ID_Ville;
}

void Ville::set_ID_Ville(int^ id)
{
	this->ID_Ville = id;
}

String^ Ville::get_Nom()
{
	return this->Nom;
}

void Ville::set_Nom(String^ nom)
{
	this->Nom = nom;
}

