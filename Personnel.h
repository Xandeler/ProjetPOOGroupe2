#pragma once
#include "Personne.h"

ref class Personnel : public Personne
{
private:
	String^ Date_Embauche;
	bool^ Superieur_Hierarchique;

public:
	Personnel();
	Personnel(String^ date_embauche, bool^ superieur_hierarchique, int^ ID, String^ nom, String^ prenom);
	String^ get_Date_Embauche();
	void set_Date_Embauche(String^ date_embauche);
	bool^ get_Superieur_Hierarchique();
	void set_Superieur_Hierarchique(bool^ superieur_hierarchique);
	String^ ajouter();
	String^ supprimer();
	String^ modifier();
	String^ afficher();
};