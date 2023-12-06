#include "Ville.h"

Ville::Ville()
{
	this->set_ID_Ville(1);
	this->set_Nom("Rien");
}

Ville::Ville(int^ id, System::String^ nom)
{
	this->set_ID_Ville(id);
	this->set_Nom(nom);
}

System::String^ Ville::ajouter()
{
	return "INSERT INTO Ville (Nom) VALUES ('" + this->get_Nom() + "');";
}

System::String^ Ville::supprimer(int^ id)
{
	return "DELETE FROM Ville WHERE ID_Ville = " + id + ";";
}

int^ Ville::get_ID_Ville()
{
	return this->ID_Ville;
}

void Ville::set_ID_Ville(int^ id)
{
	this->ID_Ville = id;
}

System::String^ Ville::get_Nom()
{
	return this->Nom;
}

void Ville::set_Nom(System::String^ nom)
{
	this->Nom = nom;
}

