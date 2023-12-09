#include "Commande.h"

Commande::Commande()
{

}

Commande::Commande(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    this->set_ID_Commande(id);
    this->set_Reference(reference);
    this->set_Date_Livraison(date_livraison);
    this->set_Date_Emission(date_emission);
    this->set_Date_Paiement(date_paiement);
    this->set_Moyen_Paiement(moyen_paiement);
    this->set_Total_HT(total_ht);
    this->set_Total_TTC(total_ttc);
    this->set_Nom_Societe(nom_societe);
    this->set_Adresse_Societe(adresse_societe);
    this->set_Numero_Service_Clients(numero_service_clients);
    this->set_Logo(logo);
    this->set_Adresse_Facturation(adresse_facturation);
    this->set_Adresse_Livraison(adresse_livraison);
}

int^ Commande::get_ID_Commande()
{
    return this->ID_Commande;
}

void Commande::set_ID_Commande(int^ id)
{
    this->ID_Commande = id;
}

String^ Commande::get_Reference()
{
    return this->Reference;
}

void Commande::set_Reference(String^ reference)
{
    this->Reference = reference;
}

String^ Commande::get_Date_Livraison()
{
    return this->Date_Livraison;
}

void Commande::set_Date_Livraison(String^ date_livraison)
{
    this->Date_Livraison = date_livraison;
}

String^ Commande::get_Date_Emission()
{
    return this->Date_Emission;
}

void Commande::set_Date_Emission(String^ date_emission)
{
    this->Date_Emission = date_emission;
}

String^ Commande::get_Date_Paiement()
{
    return this->Date_Paiement;
}

void Commande::set_Date_Paiement(String^ date_paiement)
{
    this->Date_Paiement = date_paiement;
}

String^ Commande::get_Moyen_Paiement()
{
    return this->Moyen_Paiement;
}

void Commande::set_Moyen_Paiement(String^ moyen_paiement)
{
    this->Moyen_Paiement = moyen_paiement;
}

double^ Commande::get_Total_HT()
{
    return this->Total_HT;
}

void Commande::set_Total_HT(double^ total_ht)
{
    this->Total_HT = total_ht;
}

double^ Commande::get_Total_TTC()
{
    return this->Total_TTC;
}

void Commande::set_Total_TTC(double^ total_ttc)
{
    this->Total_TTC = total_ttc;
}

String^ Commande::get_Nom_Societe()
{
    return this->Nom_Societe;
}

void Commande::set_Nom_Societe(String^ nom_societe)
{
    this->Nom_Societe = nom_societe;
}

AD::Adresse^ Commande::get_Adresse_Societe()
{
    return this->Adresse_Societe;
}

void Commande::set_Adresse_Societe(AD::Adresse^ adresse_societe)
{
    this->Adresse_Societe = adresse_societe;
}

int^ Commande::get_Numero_Service_Clients()
{
    return this->Numero_Service_Clients;
}

void Commande::set_Numero_Service_Clients(int^ numero_service_clients)
{
    this->Numero_Service_Clients = numero_service_clients;
}

String^ Commande::get_Logo()
{
    return this->Logo;
}

void Commande::set_Logo(String^ logo)
{
    this->Logo = logo;
}

AD::Adresse^ Commande::get_Adresse_Facturation()
{
    return this->Adresse_Facturation;
}

void Commande::set_Adresse_Facturation(AD::Adresse^ adresse_facturation)
{
    this->Adresse_Facturation = adresse_facturation;
}

AD::Adresse^ Commande::get_Adresse_Livraison()
{
    return this->Adresse_Livraison;
}

void Commande::set_Adresse_Livraison(AD::Adresse^ adresse_livraison)
{
    this->Adresse_Livraison = adresse_livraison;
}

void Commande::ajouter_Article(int^ id_commande, int^ id_article, int^ quantite)
{
    String^ requete;

    this->map = gcnew NS_mapArticle::mapArticle();
    this->Acces_Base = gcnew AB::AccesBase();

    requete = this->map->INSERT(id_commande, id_article, quantite);

    this->Acces_Base->actionRows(requete);
}
