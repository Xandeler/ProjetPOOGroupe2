#pragma once
#include "AccesBase.h"

using namespace System;

ref class Ville
{
private:
	AB::AccesBase^ Acces_Base;
	int^ ID_Ville;
	String^ Nom;

public:
	Ville();
	Ville(int^ id, String^ nom);
	System::String^ ajouter();
	System::String^ supprimer(int^ id);
	int^ get_ID_Ville();
	void set_ID_Ville(int^ id);
	String^ get_Nom();
	void set_Nom(String^ nom);
};