#include "Client.h"

CL::Client::Client()
{
    this->set_Date_Naissance("00/00/0000");
    this->set_Date_Premier_Achat("00/00/0000");
}

CL::Client::Client(String^ date_naissance, String^ date_premier_achat, int^ ID, String^ nom, String^ prenom, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison) : Personne::Personne(ID, nom, prenom)
{
    this->set_Date_Naissance(date_naissance);
    this->set_Date_Premier_Achat(date_premier_achat);
    this->set_Adresse_Facturation(adresse_facturation);
    this->set_Adresse_Livraison(adresse_livraison);
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

AD::Adresse^ CL::Client::get_Adresse_Livraison()
{
    return this->Adresse_Livraison;
}

void CL::Client::set_Adresse_Livraison(AD::Adresse^ adresse_livraison)
{
    this->Adresse_Livraison = adresse_livraison;
}

void CL::Client::ajouter()
{
    String^ requete = "INSERT INTO Personne (Nom_Personne, Prenom_Personne)" + "VALUES ('" + this->get_Nom() + "', '" + this->get_Prenom() + "');" + "INSERT INTO Adresse (Rue_Adresse, Numero_Maison_Adresse, Nature_Adresse, ID_Ville) VALUES ('" + this->Adresse_Facturation->get_Rue() + "', " + this->Adresse_Facturation->get_Numero_Maison() + ", '" + this->Adresse_Facturation->get_Nature() + "', " + this->Adresse_Facturation->verifier_Ville() + ");" + "INSERT INTO Adresse (Rue_Adresse, Numero_Maison_Adresse, Nature_Adresse, ID_Ville) VALUES ('" + this->Adresse_Livraison->get_Rue() + "', " + this->Adresse_Livraison->get_Numero_Maison() + ", '" + this->Adresse_Livraison->get_Nature() + "', " + this->Adresse_Livraison->verifier_Ville() + ");" + "INSERT INTO Clients (Date_Naissance_Clients, Date_Premier_Achat_Clients, ID_Personne) Values ('" + this->get_Date_Naissance() + "', '" + this->get_Date_Premier_Achat() + "', " + this->get_ID_Personne() + ");" + "INSERT INTO Possede (ID_Personne, ID_Adresse) VALUES (" + this->get_ID_Personne() + ", (SELECT ID_Adresse FROM Adresse WHERE Rue_Adresse = '" + this->Adresse_Livraison->get_Rue() + "', AND Numero_Maison_Adresse = " + this->Adresse_Livraison->get_Numero_Maison() + ", AND Nature_Adresse = '" + this->Adresse_Livraison->get_Nature() + "'));" + "INSERT INTO Possede (ID_Personne, ID_Adresse) VALUES (" + this->get_ID_Personne() + ", (SELECT ID_Adresse FROM Adresse WHERE Rue_Adresse = '" + this->Adresse_Facturation->get_Rue() + "', AND Numero_Maison_Adresse = " + this->Adresse_Facturation->get_Numero_Maison() + ", AND Nature_Adresse = '" + this->Adresse_Facturation->get_Nature() + "'));";
    this->Acces_Base->actionRows(requete);
}

void CL::Client::supprimer()
{
    String^ requete = "DELETE FROM Possede WHERE ID_Personne = " + this->get_ID_Personne() + "; DELETE FROM Possede WHERE ID_Commande = (SELECT ID_Commande FROM Effectue WHERE ID_Clients = (SELECT ID_Clients FROM Clients WHERE ID_Personne = " + this->get_ID_Personne() + "));" + "DELETE FROM Effectue WHERE ID_Clients = (SELECT ID_Clients FROM Clients WHERE ID_Personne = " + this->get_ID_Personne() + ");" + "DELETE FROM Clients WHERE ID_Personne = " + this->get_ID_Personne() + ";" + "DELETE FROM Personne WHERE ID_Personne = " + this->get_ID_Personne() + ";";
    this->Acces_Base->actionRows(requete);
}

void CL::Client::modifier()
{
    String^ requete = "UPDATE Personne SET Nom_Personne = '" + this->get_Nom() + "', Prenom_Personne = '" + this->get_Prenom() + "' WHERE ID_Personne = " + this->get_ID_Personne() + "; UPDATE Clients SET Date_Naissance_Clients = '" + this->get_Date_Naissance() + "', Date_Premier_Achat_Clients = '" + this->get_Date_Premier_Achat() + "' WHERE ID_Personne = " + this->get_ID_Personne() + ";";
    this->Acces_Base->actionRows(requete);
}

String^ CL::Client::afficher()
{
    return "SELECT Clients.ID_Clients, Clients.ID_Personne, Personne.Nom_Personne, Personne.Prenom_Personne, Clients.Date_Naissance_Clients, Clients.Date_Premier_Achat_Clients FROM Clients INNER JOIN Personne ON Clients.ID_Personne = Personne.ID_Personne;";
}
