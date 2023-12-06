#pragma once
#include "Ville.h"
#include "AccesBase.h"

using namespace System;

namespace AD {
	ref class Adresse
	{
	private:
		AB::AccesBase^ Acces_Base;
		int^ Code_Postal;
		String^ Nom_Ville;
		String^ Rue;
		int^ Numero_Maison;
		String^ Nature;

	public:
		Adresse();
		Adresse(int^ code_postal, String^ nom_ville, String^ rue, int^ numero_maison, String^ nature);
		int^ get_Code_Postal();
		void set_Code_Postal(int^ code_postal);
		String^ get_Nom_Ville();
		void set_Nom_Ville(String^ nom_ville);
		String^ get_Rue();
		void set_Rue(String^ rue);
		int^ get_Numero_Maison();
		void set_Numero_Maison(int^ numero_maison);
		String^ get_Nature();
		void set_Nature(String^ nature);
		bool^ verifier_Ville();
	};
}