#include "servicePersonnel.h"

servPers::CLservices::CLservices(void)
{
	this->acc = gcnew AB::AccesBase();
	this->pe = gcnew PE::Personnel();
}
System::Data::DataSet^ servPers::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->pe->afficher();
	return this->acc->getRows(sql, dataTableName);
}
void servPers::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->pe->set_Nom(nom);
	this->pe->set_Prenom(prenom);
	sql = this->pe->ajouter();

	this->acc->actionRows(sql);
}

void servPers::CLservices::supprimerUnePersonne(int id)
{
	System::String^ sql;

	this->pe->set_ID_Personne(id);
	sql = this->pe->supprimer();

	this->acc->actionRows(sql);
}

void servPers::CLservices::modifierUnePersonne(int id, System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->pe->set_ID_Personne(id);
	this->pe->set_Nom(nom);
	this->pe->set_Prenom(prenom);
	sql = this->pe->modifier();

	this->acc->actionRows(sql);
}