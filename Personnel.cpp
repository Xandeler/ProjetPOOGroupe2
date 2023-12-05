#include "Personnel.h"


Personnel::Personnel()
{
	this->set_Date_Embauche("00/00/0000");
	this->set_Superieur_Hierarchique(false);
}

Personnel::Personnel(String^ date_embauche, bool^ superieur_hierarchique, int^ ID, String^ nom, String^ prenom) : Personne::Personne(ID, nom, prenom)
{
	this->set_Date_Embauche(date_embauche);
	this->set_Superieur_Hierarchique(superieur_hierarchique);
}

String^ Personnel::get_Date_Embauche()
{
	return this->Date_Embauche;
}

void Personnel::set_Date_Embauche(String^ date_embauche)
{
	this->Date_Embauche = date_embauche;
}

bool^ Personnel::get_Superieur_Hierarchique()
{
	return this->Superieur_Hierarchique;
}

void Personnel::set_Superieur_Hierarchique(bool^ superieur_hierarchique)
{
	this->Superieur_Hierarchique = superieur_hierarchique;
}

String^ Personnel::ajouter()
{
}

String^ Personnel::supprimer()
{
}

String^ Personnel::modifier()
{
}

String^ Personnel::afficher()
{
}
