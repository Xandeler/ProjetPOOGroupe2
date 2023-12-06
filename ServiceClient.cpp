#include "ServiceClient.h"

// CLservices constructor
NS_Comp_Svc::CL_SQLservices::CL_SQLservices(void)
{
	this->SQLdataAccessController = gcnew AB::AccesBase();
	this->SQLcmdGenerator = gcnew NS_Comp_Mappage::CLgenerateSQLcmds();
}

// TODO Use stored procedures
System::Data::DataSet^ NS_Comp_Svc::CL_SQLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ SQL_command; // Generate command to select all data in table

	SQL_command = this->SQLcmdGenerator->SQL_SelectCommandGenerator();
	return this->SQLdataAccessController->getRows(SQL_command, dataTableName);
}
void NS_Comp_Svc::CL_SQLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	this->SQLcmdGenerator->get_Nom();
	this->SQLcmdGenerator->get_Prenom();
	System::String^ SQL_command;
	SQL_command = this->SQLcmdGenerator->SQL_InsertCommandGenerator();

	this->SQLdataAccessController->actionRows(SQL_command);
}

void NS_Comp_Svc::CL_SQLservices::effacerUnePersonne(int ID)
{
	System::String^ SQL_command;
	this->SQLcmdGenerator->get_ID_Personne();
	SQL_command = this->SQLcmdGenerator->SQL_DeleteCommandGenerator();
	this->SQLdataAccessController->actionRows(SQL_command);

}

void NS_Comp_Svc::CL_SQLservices::modifierUnePersonne(int^ ID, System::String^ nom, System::String^ prenom)
{
	System::String^ SQL_command;

	this->SQLcmdGenerator->get_Nom();
	this->SQLcmdGenerator->get_Prenom();
	this->SQLcmdGenerator->get_Date_Naissance();
	this->SQLcmdGenerator->get_Date_Premier_Achat();


	SQL_command = this->SQLcmdGenerator->SQL_UpdateCommandGenerator();

	this->SQLdataAccessController->actionRows(SQL_command);
}


