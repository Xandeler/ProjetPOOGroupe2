#pragma once

using namespace System;

ref class Paiement
{
private:
	String^ Date_Paiement;
	String^ Moyen_Paiement;

public:
	String^ get_Date_Paiement();
	void set_Date_Paiement(String^ date_paiement);
	String^ get_Moyen_Paiement();
	void set_Moyen_Paiement(String^ moyen_paiement);
	Paiement();
	Paiement(String^ date_paiement, String^ moyen_paiement);
};