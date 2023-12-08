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
	return
		"BEGIN TRANSACTION; " +
		"   IF EXISTS (SELECT 1 FROM [Electronic].[dbo].[Effectue] WHERE ID_Clients = (SELECT ID_Clients FROM [Electronic].[dbo].[Clients] WHERE ID_Personne = " + this->get_ID_Personne() + ")) " +
		"       DELETE FROM [Electronic].[dbo].[Effectue] WHERE ID_Clients = (SELECT ID_Clients FROM [Electronic].[dbo].[Clients] WHERE ID_Personne = " + this->get_ID_Personne() + "); " +
		"   IF EXISTS (SELECT 1 FROM [Electronic].[dbo].[Clients] WHERE ID_Personne = " + this->get_ID_Personne() + ") " +
		"       DELETE FROM [Electronic].[dbo].[Clients] WHERE ID_Personne = " + this->get_ID_Personne() + "; " +
		"   IF EXISTS (SELECT 1 FROM [Electronic].[dbo].[Possede] WHERE ID_Personne = " + this->get_ID_Personne() + ") " +
		"       DELETE FROM [Electronic].[dbo].[Possede] WHERE ID_Personne = " + this->get_ID_Personne() + "; " +
		"   IF EXISTS (SELECT 1 FROM [Electronic].[dbo].[Personne] WHERE ID_Personne = " + this->get_ID_Personne() + ") " +
		"   BEGIN " +
		"       DELETE FROM [Electronic].[dbo].[Personnel] WHERE ID_Personne = " + this->get_ID_Personne() + "; " +
		"       DELETE FROM [Electronic].[dbo].[Personne] WHERE ID_Personne = " + this->get_ID_Personne() + "; " +
		"   END; " +
		"COMMIT;";

}

System::String^ CL::Client::modifier_client()
{
    return "DELETE FROM Possede WHERE ID_Personne = " + this->get_ID_Personne() + "; DELETE FROM Possede WHERE ID_Commande = (SELECT ID_Commande FROM Effectue WHERE ID_Clients = (SELECT ID_Clients FROM Clients WHERE ID_Personne = " + this->get_ID_Personne() + "));" + "DELETE FROM Effectue WHERE ID_Clients = (SELECT ID_Clients FROM Clients WHERE ID_Personne = " + this->get_ID_Personne() + ");" + "DELETE FROM Clients WHERE ID_Personne = " + this->get_ID_Personne() + ";" + "DELETE FROM Personne WHERE ID_Personne = " + this->get_ID_Personne() + ";";

}

System::String^ CL::Client::afficher_client()
{
	return "SELECT Clients.ID_Clients, Personne.Nom_Personne, Personne.Prenom_Personne, Clients.Date_Naissance_Clients, Clients.Date_Premier_Achat_Clients, Adresse.Numero_Maison_Adresse, Adresse.Rue_Adresse, Adresse.Nature_Adresse, Ville.Nom_ville FROM(((Ville INNER JOIN Adresse ON Ville.ID_Ville = Adresse.ID_Adresse) INNER JOIN Possede ON Adresse.ID_Adresse = Possede.ID_Adresse) INNER JOIN Personne ON Possede.ID_Personne = Personne.ID_Personne) INNER JOIN Clients ON Personne.ID_Personne = Clients.ID_Personne;";

}
