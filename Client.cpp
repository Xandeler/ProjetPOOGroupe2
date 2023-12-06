#include "Client.h"

Client::Client()
{
    this->set_Date_Naissance("00/00/0000");
    this->set_Date_Premier_Achat("00/00/0000");
}

Client::Client(String^ date_naissance, String^ date_premier_achat, int^ ID, String^ nom, String^ prenom, Adresse^ adresse_facturation, Adresse^ adresse_livraison) : Personne::Personne(ID, nom, prenom)
{
    this->set_Date_Naissance(date_naissance);
    this->set_Date_Premier_Achat(date_premier_achat);
    this->set_Adresse_Facturation(adresse_facturation);
    this->set_Adresse_Livraison(adresse_livraison);
}

String^ Client::get_Date_Naissance()
{
    return this->Date_Naissance;
}

void Client::set_Date_Naissance(String^ date_naissance)
{
    this->Date_Naissance = date_naissance;
}

String^ Client::get_Date_Premier_Achat()
{
    return this->Date_Premier_Achat;
}

void Client::set_Date_Premier_Achat(String^ date_premier_achat)
{
    this->Date_Premier_Achat = date_premier_achat;
}

Adresse^ Client::get_Adresse_Facturation()
{
    return this->Adresse_Facturation;
}

void Client::set_Adresse_Facturation(Adresse^ adresse_facturation)
{
    this->Adresse_Facturation = adresse_facturation;
}

Adresse^ Client::get_Adresse_Livraison()
{
    return this->Adresse_Livraison;
}

void Client::set_Adresse_Livraison(Adresse^ adresse_livraison)
{
    this->Adresse_Livraison = adresse_livraison;
}

String^ Client::ajouter()
{
    return "INSERT INTO" + "VALUES ;SELECT @@IDENTITY;"; //compléter
}

String^ Client::supprimer()
{
    return "DELETE FROM" + "WHERE;"; //compléter
}

String^ Client::modifier()
{
    return "UPDATE" + "SET" + "WHERE;"; //compléter
}

String^ Client::afficher()
{
    return "SELECT" + "FROM;"; //compléter
}
