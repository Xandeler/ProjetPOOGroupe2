#pragma once
#include <cliext/list>

using namespace System::Collections::Generic;
using namespace System;

ref class Ville
{
private:
	List<Ville^>^ Liste_Ville;
	double^ ID_Ville;
	String^ nom;

public:
	List<Ville^>^ get_Liste_Ville();
	void ajouter();
	void supprimer(double^ ID);
	double^ get_ID_Ville();
	void set_ID_Ville(double^ ID);
	String^ get_nom();
	void set_nom(String^ nom);
	Ville();
	Ville(double^ ID, String^ nom);
};