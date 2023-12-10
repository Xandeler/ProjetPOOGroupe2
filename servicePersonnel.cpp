#include "servicePersonnel.h"
#include "Personnel.h"
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
void servPers::CLservices::ajouterUnePersonne(PE::Personnel^ personnel, String^ Nom_ville)
{
	System::String^ sql;

	this->pe = personnel;
	sql = this->pe->ajouter(Nom_ville);

	this->acc->actionRows(sql);
}

void servPers::CLservices::supprimerUnePersonne(int id)
{
	System::String^ sql;

	this->pe->set_ID_personnel(id);

	sql = this->pe->supprimer();

	this->acc->actionRows(sql);
}

void servPers::CLservices::modifierUnePersonne(int id, PE::Personnel^ personnel, String^ Nom_ville, int idsup)
{
	System::String^ sql;

	this->pe = personnel;
	this->pe->set_ID_personnel(id);
	sql = this->pe->modifier(id, Nom_ville, idsup);

	this->acc->actionRows(sql);
}