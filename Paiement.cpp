#include "Paiement.h"

String^ Paiement::get_Date_Paiement()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici

	return this->Date_Paiement;
}

void Paiement::set_Date_Paiement(String^ date_paiement)
{
	throw gcnew System::NotImplementedException();

	this->Date_Paiement = date_paiement;
}

String^ Paiement::get_Moyen_Paiement()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici

	return this->Moyen_Paiement;
}

void Paiement::set_Moyen_Paiement(String^ moyen_paiement)
{
	throw gcnew System::NotImplementedException();

	this->Moyen_Paiement = moyen_paiement;
}

Paiement::Paiement()
{
	throw gcnew System::NotImplementedException();

	this->set_Date_Paiement("00/00/0000");
	this->set_Moyen_Paiement("Aucun");
}

Paiement::Paiement(String^ date_paiement, String^ moyen_paiement)
{
	throw gcnew System::NotImplementedException();

	this->set_Date_Paiement(date_paiement);
	this->set_Moyen_Paiement(moyen_paiement);
}
