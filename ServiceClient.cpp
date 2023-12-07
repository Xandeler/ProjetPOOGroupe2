#include "ServiceClient.h"

// CLservices constructor
NS_Comp_Svc::CL_SQLservices::CL_SQLservices(void)
{
	this->SQLdataAccessController = gcnew AB::AccesBase();
	this->SQLcmdGenerator = gcnew NS_Comp_Mappage::CLgenerateSQLcmds();
}

// TODO Use stored procedures
System::Data::DataSet^ NS_Comp_Svc::CL_SQLservices::selectionnerTousLesClients(System::String^ dataTableName)
{
	System::String^ SQL_command; // Generate command to select all data in table

	SQL_command = this->SQLcmdGenerator->SQL_SelectCommandGenerator();
	return this->SQLdataAccessController->getRows(SQL_command, dataTableName);
}
void NS_Comp_Svc::CL_SQLservices::ajouterUnClient(System::String^ nom, System::String^ prenom, System::String^ datena, System::String^ datepa, System::String^ facnu, System::String^ facru, System::String^ livnu, System::String^ livru)
{
	this->SQLcmdGenerator->get_Nom();
	this->SQLcmdGenerator->get_Prenom();
	this->SQLcmdGenerator->get_Date_Naissance();
    this->SQLcmdGenerator->get_Date_Premier_Achat();
	this->SQLcmdGenerator->get_Adresse_Facturation();
    this->SQLcmdGenerator->get_Adresse_Livraison();
	System::String^ SQL_command;
	SQL_command = this->SQLcmdGenerator->SQL_InsertCommandGenerator();

	this->SQLdataAccessController->actionRows(SQL_command);
}

void NS_Comp_Svc::CL_SQLservices::effacerUnClient(int ID)
{
	System::String^ SQL_command;
	this->SQLcmdGenerator->get_ID_Personne();
	SQL_command = this->SQLcmdGenerator->SQL_DeleteCommandGenerator();
	this->SQLdataAccessController->actionRows(SQL_command);

}

void NS_Comp_Svc::CL_SQLservices::modifierUnclient(int^ ID, System::String^ nom, System::String^ prenom)
{
	System::String^ SQL_command;

	this->SQLcmdGenerator->get_Nom();
	this->SQLcmdGenerator->get_Prenom();
	this->SQLcmdGenerator->get_Date_Naissance();
	this->SQLcmdGenerator->get_Date_Premier_Achat();


	SQL_command = this->SQLcmdGenerator->SQL_UpdateCommandGenerator();

	this->SQLdataAccessController->actionRows(SQL_command);
}


