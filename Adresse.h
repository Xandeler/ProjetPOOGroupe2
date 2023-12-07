#pragma once
#include "Ville.h"
#include "AccesBase.h"

using namespace System;

namespace AD {
	ref class Adresse
	{
	private:
		AB::AccesBase^ Acces_Base;
		int Code_Postal;
		String^ Nom_Ville;
		String^ Rue;
		int Numero_Maison;
		String^ Nature;

	public:
		Adresse();
		Adresse(int, String^, String^, int, String^);
		int get_Code_Postal();
		void set_Code_Postal(int);
		String^ get_Nom_Ville();
		void set_Nom_Ville(String^);
		String^ get_Rue();
		void set_Rue(String^);
		int get_Numero_Maison();
		void set_Numero_Maison(int);
		String^ get_Nature();
		void set_Nature(String^);
		int verifier_Ville(String^);
	};
}