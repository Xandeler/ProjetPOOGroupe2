#pragma once
#include "Personne.h"
#include "Adresse.h"

ref class Personnel : public Personne
{
private:
	String^ Date_Embauche;
	bool^ Superieur_Hierarchique;
	Adresse^ Adresse_Habitation;

public:
	Personnel();
	Personnel(String^ date_embauche, bool^ superieur_hierarchique, int^ ID, String^ nom, String^ prenom, Adresse^ adresse_habitation);
	String^ get_Date_Embauche();
	void set_Date_Embauche(String^ date_embauche);
	bool^ get_Superieur_Hierarchique();
	void set_Superieur_Hierarchique(bool^ superieur_hierarchique);
	Adresse^ get_Adresse_Habitation();
	void set_Adresse_Habitation(Adresse^ adresse_habitation);
	void ajouter();
	void supprimer();
	void modifier();
	String^ afficher();
};