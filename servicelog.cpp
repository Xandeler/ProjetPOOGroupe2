#include "servicelog.h"

servL::servicelog::servicelog()
{
	this->Log = gcnew L::log();
	this->Acces_Base = gcnew AB::AccesBase();
}

void servL::servicelog::accespersonnelSERVICE(L::log^ LOG)
{
	String^ requete;
	this->Log = LOG;

	requete = this->Log->accespersonnel();
	this->Acces_Base->actionRows(requete);

}

void servL::servicelog::accesclientSERVICE(L::log^ LOG)
{
	String^ requete;
	this->Log = LOG;

	requete = this->Log->accesclient();
	this->Acces_Base->actionRows(requete);
}

void servL::servicelog::accescommandeSERVICE(L::log^ LOG)
{
	String^ requete;
	this->Log = LOG;

	requete = this->Log->accescommande();
	this->Acces_Base->actionRows(requete);
}

void servL::servicelog::accesstockSERVICE(L::log^ LOG)
{
	String^ requete;
	this->Log = LOG;

	requete = this->Log->accesstock();
	this->Acces_Base->actionRows(requete);
}

void servL::servicelog::accesstatistiquesSERVICE(L::log^ LOG)
{
	String^ requete;
	this->Log = LOG;

	requete = this->Log->accesstatistiques();
	this->Acces_Base->actionRows(requete);
}

void servL::servicelog::acceslogSERVICE(L::log^ LOG)
{
	String^ requete;
	this->Log = LOG;

	requete = this->Log->acceslog();
	this->Acces_Base->actionRows(requete);
}

Data::DataSet^ servL::servicelog::afficherlogSERVICE(L::log^ LOG, String^ NomTable)
{
	String^ requete;

	requete = this->Log->afficherlog();
	return this->Acces_Base->getRows(requete, NomTable);
}








