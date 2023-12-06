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

void Personnel::ajouter()
{
	      "INSERT INTO Personne (Nom_Personne, Prenom_Personne) VALUES ('" + this->get_Nom() + "', '" + this->get_Prenom() + "');"
		+ "INSERT INTO Personnel (DateEmbauche_Personnel, ID_SuperieurHierarchique) VALUES ('" + this->get_Date_Embauche() + "', '" + this->get_Superieur_Hierarchique() + "');"
		+ "INSERT INTO Adresse (Numero_Maison_Adresse, Rue_Adresse, Nature_Adresse, ID_Ville) VALUES ('" + this->get_Adresse_Habitation()->get_Numero_Maison() + "', '" + this->get_Adresse_Habitation()->get_Rue() + "', '" + this->get_Adresse_Habitation()->get_Nature() + "', '" + this->get_Adresse_Habitation()->verifier_Ville() + "');";
}

void Personnel::supprimer()
{
	      "DELETE FROM Personne WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "DELETE FROM Personnel WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "DELETE FROM Possede WHERE ID_Personne = " + this->get_ID_Personne() + ";";
}

void Personnel::modifier()
{
          "UPDATE Personne SET Nom_Personne = '" + this->get_Nom() + "', Prenom_Personne = '" + this->get_Prenom() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "UPDATE Personnel SET DateEmbauche_Personnel = '" + this->get_Date_Embauche() + "', ID_SuperieurHierarchique = '" + this->get_Superieur_Hierarchique() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "UPDATE Adresse SET Numero_Maison_Adresse = '" + this->get_Adresse_Habitation()->get_Numero_Maison() + "', Rue_Adresse = '" + this->get_Adresse_Habitation()->get_Rue() + "', Nature_Adresse = '" + this->get_Adresse_Habitation()->get_Nature() + "', ID_Ville = '" + this->get_Adresse_Habitation()->verifier_Ville() + "' WHERE Numero_Adresse = " + this->get_Adresse_Habitation()->get_Numero_Maison() + ";";
}

void Personnel::afficher()
{
	 " SELECT Nom_Personne,Prenom_Personne,DateEmbauche_Personnel,ID_SuperieurHierarchique, CONCAT(Numero_Maison_Adresse, '  ', Rue_Adresse) AS Adresse FROM Personnel INNER JOIN Personne ON Personnel.ID_Personne = Personne.ID_Personne INNER JOIN Possede ON Personne.ID_Personne = Possede.ID_Personne INNER JOIN Adresse ON Possede.ID_Adresse = Adresse.ID_Adresse WHERE Personnel.ID_Personne =" + this->get_ID_Personne() + ";";
}
