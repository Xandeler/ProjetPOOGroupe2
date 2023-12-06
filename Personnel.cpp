#include "Personnel.h"


Personnel::Personnel()
{
	this->set_Date_Embauche("00/00/0000");
	this->set_Superieur_Hierarchique(false);
}

Personnel::Personnel(String^ date_embauche, bool^ superieur_hierarchique, int^ ID, String^ nom, String^ prenom, Adresse^ adresse_habitation) : Personne::Personne(ID, nom, prenom)
{
	this->set_Date_Embauche(date_embauche);
	this->set_Superieur_Hierarchique(superieur_hierarchique);
	this->set_Adresse_Habitation(adresse_habitation);
}

String^ Personnel::get_Date_Embauche()
{
	return this->Date_Embauche;
}

void Personnel::set_Date_Embauche(String^ date_embauche)
{
	this->Date_Embauche = date_embauche;
}

bool^ Personnel::get_Superieur_Hierarchique()
{
	return this->Superieur_Hierarchique;
}

void Personnel::set_Superieur_Hierarchique(bool^ superieur_hierarchique)
{
	this->Superieur_Hierarchique = superieur_hierarchique;
}

Adresse^ Personnel::get_Adresse_Habitation()
{
	return this->Adresse_Habitation;
}

void Personnel::set_Adresse_Habitation(Adresse^ adresse_habitation)
{
	this->Adresse_Habitation = adresse_habitation;
}

String^ Personnel::ajouter()
{
	return "INSERT INTO Personnel" + " (Nom, Prenom, DateEmbauche, Superieur, Adresse_Habitation) VALUES('" + this->get_Nom() + "','" + this->get_Prenom() + "','" + this->get_Date_Embauche() + "','" + this->get_Superieur_Hierarchique() + "','" + this->get_Adresse_Habitation() + "');";
}

String^ Personnel::supprimer()
{
	return "DELETE FROM Personnel WHERE ID = " + get_ID_Personne();
}

String^ Personnel::modifier()
{
	return "UPDATE Personnel SET [Prenom] = '" + this->get_Prenom() + "', [Nom] = '" + this->get_Nom() + "', [Prenom] = '" + this->get_Prenom() + "', [DateEmbauche] = '" + this->get_Date_Embauche() + "', [Superieur] = '" + this->get_Superieur_Hierarchique() + "', [Adresse_Habitation] = '" + this->get_Adresse_Habitation() + "' WHERE [ID] = " + this->get_ID_Personne() + ";";
}

String^ Personnel::afficher()
{
	return " SELECT	Nom_Personne,Prenom_Personne,DateEmbauche_Personnel,ID_SuperieurHierarchique, CONCAT(Numero_Maison_Adresse, '  ', Rue_Adresse) AS Adresse FROM Personnel INNER JOIN Personne ON Personnel.ID_Personne = Personne.ID_Personne INNER JOIN Possede ON Personne.ID_Personne = Possede.ID_Personne INNER JOIN Adresse ON Possede.ID_Adresse = Adresse.ID_Adresse WHERE Personnel.ID_Personne =" + this->get_ID_Personne() + ";";
}
