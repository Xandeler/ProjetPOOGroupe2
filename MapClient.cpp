#include "MapClient.h"


NS_Comp_Mappage::CLgenerateSQLcmds::CLgenerateSQLcmds(void)
{
	this->adressef = gcnew AD::Adresse();
	this->adressel = gcnew AD::Adresse();
	this->client = gcnew CL::Client();
	this->accesB = gcnew AB::AccesBase();
}

void NS_Comp_Mappage::CLgenerateSQLcmds::set_Adresse_FacturationI(String^ numero_maison, String^ rue)
{
	this->adressef->set_Numero_Maison(Convert::ToInt32(numero_maison));
	this->adressef->set_Rue(rue);
}

void NS_Comp_Mappage::CLgenerateSQLcmds::set_Adresse_LivraisonI(String^ numero_maison, String^ rue)
{
	this->adressel->set_Numero_Maison(Convert::ToInt32(numero_maison));
	this->adressel->set_Rue(rue);
}

System::Data::DataSet^ NS_Comp_Mappage::CLgenerateSQLcmds::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->client->afficher_client();
	return this->accesB->getRows(sql, dataTableName);
}
void NS_Comp_Mappage::CLgenerateSQLcmds::ajouterUnePersonne(CL::Client^ client)
{
	System::String^ sql;

	this->client = client;
	sql = this->client->ajouter_client();

	this->accesB->actionRows(sql);
}

void NS_Comp_Mappage::CLgenerateSQLcmds::supprimerUnePersonne(int id)
{
	System::String^ sql;

	this->client->set_ID_Personne(id);
	sql = this->client->supprimer_client();

	this->accesB->actionRows(sql);
}

void NS_Comp_Mappage::CLgenerateSQLcmds::modifierUnePersonne(int id, CL::Client^ personnel)
{
	System::String^ sql;

	this->client->set_ID_Personne(id);

	sql = this->client->modifier_client();

	this->accesB->actionRows(sql);
}

