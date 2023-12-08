#pragma once
#include "Personne.h"
#include "Adresse.h"

namespace PE {
	ref class Personnel : public Personne
	{
	private:
		String^ Date_Embauche;
		int Superieur_Hierarchique;
		AD::Adresse^ Adresse_Habitation;
		int ID;

	public:
		Personnel();
		Personnel(String^ date_embauche, int superieur_hierarchique, int ID, String^ nom, String^ prenom, AD::Adresse^ adresse_habitation);
		String^ get_Date_Embauche();
		void set_Date_Embauche(String^ date_embauche);
		int get_Superieur_Hierarchique();
		void set_Superieur_Hierarchique(int superieur_hierarchique);
		AD::Adresse^ get_Adresse_Habitation();
		void set_Adresse_Habitation(AD::Adresse^ adresse_habitation);
		void set_ID_personnel(int);
		System::String^ ajouter(String^);
		System::String^ supprimer();
		System::String^ modifier(int, String^);
		System::String^ afficher();
	};
}
