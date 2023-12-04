#include "Paiement.h"

String^ Paiement::get_Date_Paiement()
{
	return this->Date_Paiement;
}

void Paiement::set_Date_Paiement(String^ date_paiement)
{
	this->Date_Paiement = date_paiement;
}

String^ Paiement::get_Moyen_Paiement()
{
	return this->Moyen_Paiement;
}

void Paiement::set_Moyen_Paiement(String^ moyen_paiement)
{
	this->Moyen_Paiement = moyen_paiement;
}

Paiement::Paiement()
{
	this->set_Date_Paiement("00/00/0000");
	this->set_Moyen_Paiement("Aucun");
}

Paiement::Paiement(String^ date_paiement, String^ moyen_paiement)
{
	this->set_Date_Paiement(date_paiement);
	this->set_Moyen_Paiement(moyen_paiement);
}
