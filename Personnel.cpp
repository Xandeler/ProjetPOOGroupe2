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

System::String^ PE::Personnel::ajouter(String^ Nom_ville)
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
	sqlQuery += get_Adresse_Habitation()->get_Nature() + "', '" + get_Adresse_Habitation()->verifier_Ville(Nom_ville) + "');";
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

System::String^ PE::Personnel::modifier(int id, String^ Nom_Ville, int idsup)
{
	String^ sqlQuery = "";
	sqlQuery += "UPDATE Personne ";
	sqlQuery += "SET Nom_Personne = '" + get_Nom() + "', Prenom_Personne = '" + get_Prenom() + "' ";
	sqlQuery += "WHERE ID_Personne = (SELECT ID_Personne FROM Personnel WHERE ID_Personnel = " + id + " ); ";

	sqlQuery += "UPDATE Personnel ";
	sqlQuery += "SET DateEmbauche_personnel = '" + get_Date_Embauche() + "' ";
	sqlQuery += "WHERE ID_Personnel = " + id + " ; ";

	sqlQuery += "UPDATE Personnel ";
	sqlQuery += "SET ID_SuperieurHierarchique = " + idsup + " ";
	sqlQuery += "WHERE ID_Personnel = " + id + " ; ";

	sqlQuery += "UPDATE Adresse ";
	sqlQuery += "SET Numero_Maison_Adresse = " + get_Adresse_Habitation()->get_Numero_Maison() + ", Rue_Adresse = '" + get_Adresse_Habitation()->get_Rue() + "', ID_Ville = " + get_Adresse_Habitation()->verifier_Ville(Nom_Ville);
	sqlQuery += "WHERE ID_Adresse = ( ";
	sqlQuery += "SELECT PO.ID_Adresse ";
	sqlQuery += "FROM Personne P ";
	sqlQuery += "JOIN Possede PO ON P.ID_Personne = PO.ID_Personne ";
	sqlQuery += "WHERE P.ID_Personne = (SELECT ID_Personne FROM Personnel WHERE ID_Personnel = " + id + " ) ";
	sqlQuery += "); ";


	return sqlQuery;
}

System::String^ PE::Personnel::afficher()
{
	String^ sqlQuery = "SELECT [ID_Personnel], [Nom_Personne], [Prenom_Personne], [DateEmbauche_Personnel], [ID_SuperieurHierarchique], ";
	sqlQuery += "CONCAT(Numero_Maison_Adresse, '  ', Rue_Adresse) AS Adresse, ";
	sqlQuery += "[nom_ville] ";
	sqlQuery += "FROM ";
	sqlQuery += "Personnel ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Personne ON Personnel.ID_Personne = Personne.ID_Personne ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Possede ON Personne.ID_Personne = Possede.ID_Personne ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Adresse ON Possede.ID_Adresse = Adresse.ID_Adresse ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Ville ON Adresse.ID_Ville = Ville.ID_Ville;";

	return sqlQuery;
}
