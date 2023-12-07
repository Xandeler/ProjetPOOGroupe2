#include "Personnel.h"


PE::Personnel::Personnel()
{
	this->set_Date_Embauche("00/00/0000");
	this->set_Superieur_Hierarchique(1);
	this->set_Adresse_Habitation(gcnew AD::Adresse());
}

PE::Personnel::Personnel(String^ date_embauche, int superieur_hierarchique, int ID, String^ nom, String^ prenom, AD::Adresse^ adresse_habitation) : Personne::Personne(ID, nom, prenom)
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

void PE::Personnel::set_ID_personnel(int ID)
{
	this->ID = ID;
}

int PE::Personnel::get_Superieur_Hierarchique()
{
	return this->Superieur_Hierarchique;
}

void PE::Personnel::set_Superieur_Hierarchique(int superieur_hierarchique)
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
	String^ sqlQuery = "DECLARE @maxID INT;";
	sqlQuery += "SELECT @maxID = MAX(ID_Personnel) FROM Personnel;";


	sqlQuery += "DBCC CHECKIDENT('Personnel', RESEED, @maxID); ";
	sqlQuery += "DECLARE @idCREER INT; DECLARE @idADRESSE INT;";

	sqlQuery += "INSERT INTO Personne (Nom_Personne, Prenom_Personne) ";
	sqlQuery += "VALUES ('" + get_Nom() + "', '" + get_Prenom() + "');";
	sqlQuery += "SET @idCREER = SCOPE_IDENTITY();";
	sqlQuery += "INSERT INTO Personnel (DateEmbauche_Personnel, ID_SuperieurHierarchique, ID_Personne) ";
	sqlQuery += "VALUES ('" + get_Date_Embauche() + "', '" + get_Superieur_Hierarchique() + "', @idCREER);";
	sqlQuery += "INSERT INTO Adresse (Numero_Maison_Adresse, Rue_Adresse, Nature_Adresse, ID_Ville) ";
	sqlQuery += "VALUES ('" + get_Adresse_Habitation()->get_Numero_Maison() + "', '" + get_Adresse_Habitation()->get_Rue() + "', '";
	sqlQuery += get_Adresse_Habitation()->get_Nature() + "', '" + get_Adresse_Habitation()->verifier_Ville("Strasbourg") + "');";
	sqlQuery += "SET @idADRESSE = SCOPE_IDENTITY();";
	sqlQuery += "INSERT INTO Possede (ID_Personne, ID_Adresse) VALUES (@idCREER, @idADRESSE);";

	return sqlQuery;
}

System::String^ PE::Personnel::supprimer()
{
	String^ sqlQuery = "DECLARE @ID_Personnel INT;";
	sqlQuery += "DECLARE @ID_Personne INT;";
	sqlQuery += "DECLARE @ID_Adresses TABLE(ID_Adresse INT);";

	sqlQuery += "SET @ID_Personnel =" + this->ID + "; ";

	sqlQuery += "SELECT @ID_Personne = ID_Personne FROM Personnel WHERE ID_Personnel = @ID_Personnel;";

	sqlQuery += "INSERT INTO @ID_Adresses(ID_Adresse)";
	sqlQuery += "SELECT ID_Adresse FROM Possede WHERE ID_Personne = @ID_Personne;";

	sqlQuery += "DELETE FROM Possede WHERE ID_Personne = @ID_Personne;";
	sqlQuery += "DELETE FROM Personnel WHERE ID_Personnel = @ID_Personnel;";
	sqlQuery += "DELETE FROM Personne WHERE ID_Personne = @ID_Personne;";
	sqlQuery += "DELETE FROM Adresse WHERE ID_Adresse IN(SELECT ID_Adresse FROM @ID_Adresses);";

	return sqlQuery;

}

System::String^ PE::Personnel::modifier()
{
	return "UPDATE Personne SET Nom_Personne = '" + this->get_Nom() + "', Prenom_Personne = '" + this->get_Prenom() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "UPDATE Personnel SET DateEmbauche_Personnel = '" + this->get_Date_Embauche() + "', ID_SuperieurHierarchique = '" + this->get_Superieur_Hierarchique() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";"
		+ "UPDATE Adresse SET Numero_Maison_Adresse = '" + this->get_Adresse_Habitation()->get_Numero_Maison() + "', Rue_Adresse = '" + this->get_Adresse_Habitation()->get_Rue() + "', Nature_Adresse = '" + this->get_Adresse_Habitation()->get_Nature() + "', ID_Ville = '" + this->get_Adresse_Habitation()->verifier_Ville("Strasbourg") + "' WHERE Numero_Adresse = " + this->get_Adresse_Habitation()->get_Numero_Maison() + ";";
}

System::String^ PE::Personnel::afficher()
{
	return " SELECT [ID_Personnel], [Nom_Personne],[Prenom_Personne],[DateEmbauche_Personnel],[ID_SuperieurHierarchique], CONCAT(Numero_Maison_Adresse, '  ', Rue_Adresse) AS Adresse FROM Personnel INNER JOIN Personne ON Personnel.ID_Personne = Personne.ID_Personne INNER JOIN Possede ON Personne.ID_Personne = Possede.ID_Personne INNER JOIN Adresse ON Possede.ID_Adresse = Adresse.ID_Adresse;";
}
