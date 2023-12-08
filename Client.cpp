#include "Client.h"
#include "Adresse.h"
CL::Client::Client(void)
{
	this->AccesBase = gcnew AB::AccesBase();
}

CL::Client::Client(String^ date_naissance, String^ date_premier_achat, int^ ID, String^ nom, String^ prenom, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison) : Personne::Personne(ID, nom, prenom)
{
	this->set_Date_Naissance(date_naissance);
	this->set_Date_Premier_Achat(date_premier_achat);
	this->set_Adresse_Facturation(adresse_facturation);
	this->set_Adresse_Livraison(adresse_livraison);
}

int CL::Client::get_ID_Client()
{
	return this->ID_Client;
}

void CL::Client::set_ID_Client(int ID_client)
{
	this->ID_Client = ID_client;
}

String^ CL::Client::get_Date_Naissance()
{
	return this->Date_Naissance;
}

void CL::Client::set_Date_Naissance(String^ date_naissance)
{
	this->Date_Naissance = date_naissance;
}

String^ CL::Client::get_Date_Premier_Achat()
{
	return this->Date_Premier_Achat;
}

void CL::Client::set_Date_Premier_Achat(String^ date_premier_achat)
{
	this->Date_Premier_Achat = date_premier_achat;
}

AD::Adresse^ CL::Client::get_Adresse_Facturation()
{
	return this->Adresse_Facturation;
}

void CL::Client::set_Adresse_Facturation(AD::Adresse^ adresse_facturation)
{
	this->Adresse_Facturation = adresse_facturation;
}

void CL::Client::set_Adresse_FacturationI(int numeroMaison, System::String^ nomRue) {
	AD::Adresse^ adresse_facturation = gcnew AD::Adresse();
	adresse_facturation->set_Numero_Maison(numeroMaison);
	adresse_facturation->set_Rue(nomRue);

	this->set_Adresse_Facturation(adresse_facturation);
}

AD::Adresse^ CL::Client::get_Adresse_Livraison()
{
	return this->Adresse_Livraison;
}


void CL::Client::set_Adresse_LivraisonI(int numeroMaison, System::String^ nomRue) {
	AD::Adresse^ adresse_livraison = gcnew AD::Adresse();
	adresse_livraison->set_Numero_Maison(numeroMaison);
	adresse_livraison->set_Rue(nomRue);

	this->set_Adresse_Livraison(adresse_livraison);
}

void CL::Client::set_Adresse_Livraison(AD::Adresse^ adresse_livraison)
{
	this->Adresse_Livraison = adresse_livraison;
}
// TODO Use stored procedures
System::String^ CL::Client::ajouter_client(String^ nom_villef, String^ nom_villel)
{
	String^ requete =
		"DECLARE @maxID INT;" +
		"SELECT @maxID = MAX(ID_Clients) FROM Clients;" +
		"DBCC CHECKIDENT('Clients', RESEED, @maxID); " +
		"DECLARE @ID_Personne INT; " +
		"INSERT INTO [Electronic].[dbo].[Personne] (Nom_Personne, Prenom_Personne) " +
		"VALUES ('" + this->get_Nom() + "', '" + this->get_Prenom() + "'); " +
		"SET @ID_Personne = SCOPE_IDENTITY(); " +
		"INSERT INTO [Electronic].[dbo].[Adresse] (Rue_Adresse, Numero_Maison_Adresse, Nature_Adresse, ID_Ville) " +
		"VALUES ('" + this->Adresse_Facturation->get_Rue() + "', " + this->Adresse_Facturation->get_Numero_Maison() + ", '" + this->Adresse_Facturation->get_Nature() + "', " + this->Adresse_Facturation->verifier_Ville(nom_villef) + "); " +
		"INSERT INTO [Electronic].[dbo].[Adresse] (Rue_Adresse, Numero_Maison_Adresse, Nature_Adresse, ID_Ville) " +
		"VALUES ('" + this->Adresse_Livraison->get_Rue() + "', " + this->Adresse_Livraison->get_Numero_Maison() + ", '" + this->Adresse_Livraison->get_Nature() + "', " + this->Adresse_Livraison->verifier_Ville(nom_villel) + "); " +
		"INSERT INTO [Electronic].[dbo].[Clients] (Date_Naissance_Clients, Date_Premier_Achat_Clients, ID_Personne) " +
		"VALUES ('" + this->get_Date_Naissance() + "', '" + this->get_Date_Premier_Achat() + "', @ID_Personne); " +
		"INSERT INTO [Electronic].[dbo].[Possede] (ID_Personne, ID_Adresse) " +
		"VALUES (@ID_Personne, (SELECT TOP 1 ID_Adresse FROM [Electronic].[dbo].[Adresse] WHERE Rue_Adresse = '" + this->Adresse_Livraison->get_Rue() + "' AND Numero_Maison_Adresse = " + this->Adresse_Livraison->get_Numero_Maison() + " AND Nature_Adresse = '" + this->Adresse_Livraison->get_Nature() + "')); " +
		"INSERT INTO [Electronic].[dbo].[Possede] (ID_Personne, ID_Adresse) " +
		"VALUES (@ID_Personne, (SELECT TOP 1 ID_Adresse FROM [Electronic].[dbo].[Adresse] WHERE Rue_Adresse = '" + this->Adresse_Facturation->get_Rue() + "' AND Numero_Maison_Adresse = " + this->Adresse_Facturation->get_Numero_Maison() + " AND Nature_Adresse = '" + this->Adresse_Facturation->get_Nature() + "'));";

	return requete;


}

System::String^ CL::Client::supprimer_client()
{
	String^ requete = "";
	requete += "DECLARE @ID_CLIENT INT; ";
		requete += "DECLARE @ID_Personne INT; ";
		requete += "DECLARE @ID_Adresses TABLE(ID_Adresse INT); ";

		requete += "SET @ID_CLIENT = " + this->ID_Client + " ; ";

		requete += "SELECT @ID_Personne = ID_Personne FROM Clients WHERE ID_Clients = @ID_CLIENT; ";

		requete += "INSERT INTO @ID_Adresses(ID_Adresse) ";
		requete += "SELECT ID_Adresse FROM Possede WHERE ID_Personne = @ID_Personne; ";

		requete += "DELETE FROM Possede WHERE ID_Personne = @ID_Personne; ";
		requete += "DELETE FROM Clients WHERE ID_Clients = @ID_CLIENT; ";
		requete += "DELETE FROM Personne WHERE ID_Personne = @ID_Personne; ";
		requete += "DELETE FROM Adresse WHERE ID_Adresse IN(SELECT ID_Adresse FROM @ID_Adresses); ";

	return requete;
	// Alors, ca supprime mais ca crahs direct après
	// Quand on relance on voit qu'il a été supprimé mais ca crash quand même


}

System::String^ CL::Client::modifier_client(int id_client, String^ nom_villef, String^ nom_villel)
{
	return
		"UPDATE [Electronic].[dbo].[Personne] SET Nom_Personne = '" + this->get_Nom() + "', Prenom_Personne = '" + this->get_Prenom() + "' WHERE ID_Personne = (SELECT ID_Personne FROM [Electronic].[dbo].[Clients] WHERE ID_Clients = " + id_client + "); " +
		"UPDATE [Electronic].[dbo].[Adresse] SET " +
		"Rue_Adresse = '" + this->Adresse_Facturation->get_Rue() + "', " +
		"Numero_Maison_Adresse = " + this->Adresse_Facturation->get_Numero_Maison() + ", " +
		"Nature_Adresse = '" + this->Adresse_Facturation->get_Nature() + "', " +
		"ID_Ville = " + this->Adresse_Facturation->verifier_Ville(nom_villef) + " " +
		"WHERE ID_Adresse IN (SELECT ID_Adresse FROM [Electronic].[dbo].[Possede] WHERE ID_Personne = (SELECT ID_Personne FROM [Electronic].[dbo].[Clients] WHERE ID_Clients = " + id_client + ") AND Nature_Adresse = 'Facturation'); " +
		"UPDATE [Electronic].[dbo].[Adresse] SET " +
		"Rue_Adresse = '" + this->Adresse_Livraison->get_Rue() + "', " +
		"Numero_Maison_Adresse = " + this->Adresse_Livraison->get_Numero_Maison() + ", " +
		"Nature_Adresse = '" + this->Adresse_Livraison->get_Nature() + "', " +
		"ID_Ville = " + this->Adresse_Livraison->verifier_Ville(nom_villel) + " " +
		"WHERE ID_Adresse IN (SELECT ID_Adresse FROM [Electronic].[dbo].[Possede] WHERE ID_Personne = (SELECT ID_Personne FROM [Electronic].[dbo].[Clients] WHERE ID_Clients = " + id_client + ") AND Nature_Adresse = 'Livraison'); " +
		"UPDATE [Electronic].[dbo].[Clients] SET " +
		"Date_Naissance_Clients = '" + this->get_Date_Naissance() + "', " +
		"Date_Premier_Achat_Clients = '" + this->get_Date_Premier_Achat() + "' " +
		"WHERE ID_Clients = " + id_client + ";";


}


System::String^ CL::Client::afficher_client()
{
	String^ sqlQuery = "SELECT ";
	sqlQuery += "Clients.ID_Clients, ";
	sqlQuery += "Personne.Nom_Personne, ";
	sqlQuery += "Personne.Prenom_Personne, ";
	sqlQuery += "Clients.Date_Naissance_Clients, ";
	sqlQuery += "Clients.Date_Premier_Achat_Clients, ";
	sqlQuery += "MAX(CASE WHEN Adresse.Nature_Adresse = 'Livraison' THEN CONCAT(Adresse.Numero_Maison_Adresse, '  ', Adresse.Rue_Adresse) END) AS Adresse_Livraison, ";
	sqlQuery += "MAX(CASE WHEN Adresse.Nature_Adresse = 'Livraison' THEN Ville.Nom_ville END) AS Ville_Livraison, ";
	sqlQuery += "MAX(CASE WHEN Adresse.Nature_Adresse = 'Facturation' THEN CONCAT(Adresse.Numero_Maison_Adresse, '  ', Adresse.Rue_Adresse) END) AS Adresse_Facturation, ";
	sqlQuery += "MAX(CASE WHEN Adresse.Nature_Adresse = 'Facturation' THEN Ville.Nom_ville END) AS Ville_Facturation ";
	sqlQuery += "FROM ";
	sqlQuery += "Clients ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Personne ON Clients.ID_Personne = Personne.ID_Personne ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Possede ON Personne.ID_Personne = Possede.ID_Personne ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Adresse ON Possede.ID_Adresse = Adresse.ID_Adresse ";
	sqlQuery += "INNER JOIN ";
	sqlQuery += "Ville ON Adresse.ID_Ville = Ville.ID_Ville ";
	sqlQuery += "GROUP BY ";
	sqlQuery += "Clients.ID_Clients, ";
	sqlQuery += "Personne.Nom_Personne, ";
	sqlQuery += "Personne.Prenom_Personne, ";
	sqlQuery += "Clients.Date_Naissance_Clients, ";
	sqlQuery += "Clients.Date_Premier_Achat_Clients; ";
	return sqlQuery;
}
