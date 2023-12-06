#include "Personnel.h"


PE::Personnel::Personnel()
{
	this->set_Date_Embauche("00/00/0000");
	this->set_Superieur_Hierarchique(1);
}

PE::Personnel::Personnel(String^ date_embauche, int^ superieur_hierarchique, int^ ID, String^ nom, String^ prenom, AD::Adresse^ adresse_habitation) : Personne::Personne(ID, nom, prenom)
{
	this->set_Date_Embauche(date_embauche);
	this->set_Superieur_Hierarchique(superieur_hierarchique);
	this->set_Adresse_Habitation(adresse_habitation);
}

String^ PE::Personnel::get_Date_Embauche()
{
	return this->Date_Embauche;
}

void PE::Personnel::set_Date_Embauche(String^ date_embauche)
{
	this->Date_Embauche = date_embauche;
}

int^ PE::Personnel::get_Superieur_Hierarchique()
{
	return this->Superieur_Hierarchique;
}

void PE::Personnel::set_Superieur_Hierarchique(int^ superieur_hierarchique)
{
	this->Superieur_Hierarchique = superieur_hierarchique;
}

AD::Adresse^ PE::Personnel::get_Adresse_Habitation()
{
	return this->Adresse_Habitation;
}

void PE::Personnel::set_Adresse_Habitation(AD::Adresse^ adresse_habitation)
{
	this->Adresse_Habitation = adresse_habitation;
}

System::String^ PE::Personnel::ajouter()
{
	return "INSERT INTO Personne (Nom_Personne, Prenom_Personne) VALUES ('" + this->get_Nom() + "', '" + this->get_Prenom() + "');"
		+ "INSERT INTO Personnel (DateEmbauche_Personnel, ID_SuperieurHierarchique) VALUES ('" + this->get_Date_Embauche() + "', '" + this->get_Superieur_Hierarchique() + "');"
		+ "INSERT INTO Adresse (Numero_Maison_Adresse, Rue_Adresse, Nature_Adresse, ID_Ville) VALUES ('" + this->get_Adresse_Habitation()->get_Numero_Maison() + "', '" + this->get_Adresse_Habitation()->get_Rue() + "', '" + this->get_Adresse_Habitation()->get_Nature() + "', '" + this->get_Adresse_Habitation()->verifier_Ville() + "');";
}

System::String^ PE::Personnel::supprimer()
{
	return "DELETE FROM Personne WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "DELETE FROM Personnel WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "DELETE FROM Possede WHERE ID_Personne = " + this->get_ID_Personne() + ";";
}

System::String^ PE::Personnel::modifier()
{
	return "UPDATE Personne SET Nom_Personne = '" + this->get_Nom() + "', Prenom_Personne = '" + this->get_Prenom() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "UPDATE Personnel SET DateEmbauche_Personnel = '" + this->get_Date_Embauche() + "', ID_SuperieurHierarchique = '" + this->get_Superieur_Hierarchique() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "UPDATE Adresse SET Numero_Maison_Adresse = '" + this->get_Adresse_Habitation()->get_Numero_Maison() + "', Rue_Adresse = '" + this->get_Adresse_Habitation()->get_Rue() + "', Nature_Adresse = '" + this->get_Adresse_Habitation()->get_Nature() + "', ID_Ville = '" + this->get_Adresse_Habitation()->verifier_Ville() + "' WHERE Numero_Adresse = " + this->get_Adresse_Habitation()->get_Numero_Maison() + ";";
}

System::String^ PE::Personnel::afficher()
{
	return " SELECT [Nom_Personne],[Prenom_Personne],[DateEmbauche_Personnel],[ID_SuperieurHierarchique], CONCAT(Numero_Maison_Adresse, '  ', Rue_Adresse) AS Adresse FROM Personnel INNER JOIN Personne ON Personnel.ID_Personne = Personne.ID_Personne INNER JOIN Possede ON Personne.ID_Personne = Possede.ID_Personne INNER JOIN Adresse ON Possede.ID_Adresse = Adresse.ID_Adresse;";
}
