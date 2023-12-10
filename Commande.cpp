#include "Commande.h"

CO::Commande::Commande()
{

}

CO::Commande::Commande(int^ id_commande, int^ id_client, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    this->set_ID_Commande(id_commande);
    this->set_ID_Client(id_client);
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

int^ CO::Commande::get_ID_Commande()
{
    return this->ID_Commande;
}

void CO::Commande::set_ID_Commande(int^ id)
{
    this->ID_Commande = id;
}

int^ CO::Commande::get_ID_Client()
{
    return this->ID_Client;
}

void CO::Commande::set_ID_Client(int^ id)
{
    this->ID_Client = id;
}

String^ CO::Commande::get_Date_Livraison()
{
    return this->Date_Livraison;
}

void CO::Commande::set_Date_Livraison(String^ date_livraison)
{
    this->Date_Livraison = date_livraison;
}

String^ CO::Commande::get_Date_Emission()
{
    return this->Date_Emission;
}

void CO::Commande::set_Date_Emission(String^ date_emission)
{
    this->Date_Emission = date_emission;
}

String^ CO::Commande::get_Date_Paiement()
{
    return this->Date_Paiement;
}

void CO::Commande::set_Date_Paiement(String^ date_paiement)
{
    this->Date_Paiement = date_paiement;
}

String^ CO::Commande::get_Moyen_Paiement()
{
    return this->Moyen_Paiement;
}

void CO::Commande::set_Moyen_Paiement(String^ moyen_paiement)
{
    this->Moyen_Paiement = moyen_paiement;
}

double^ CO::Commande::get_Total_HT()
{
    return this->Total_HT;
}

void CO::Commande::set_Total_HT(double^ total_ht)
{
    this->Total_HT = total_ht;
}

double^ CO::Commande::get_Total_TTC()
{
    return this->Total_TTC;
}

void CO::Commande::set_Total_TTC(double^ total_ttc)
{
    this->Total_TTC = total_ttc;
}

String^ CO::Commande::get_Nom_Societe()
{
    return this->Nom_Societe;
}

void CO::Commande::set_Nom_Societe(String^ nom_societe)
{
    this->Nom_Societe = nom_societe;
}

AD::Adresse^ CO::Commande::get_Adresse_Societe()
{
    return this->Adresse_Societe;
}

void CO::Commande::set_Adresse_Societe(AD::Adresse^ adresse_societe)
{
    this->Adresse_Societe = adresse_societe;
}

int^ CO::Commande::get_Numero_Service_Clients()
{
    return this->Numero_Service_Clients;
}

void CO::Commande::set_Numero_Service_Clients(int^ numero_service_clients)
{
    this->Numero_Service_Clients = numero_service_clients;
}

String^ CO::Commande::get_Logo()
{
    return this->Logo;
}

void CO::Commande::set_Logo(String^ logo)
{
    this->Logo = logo;
}

AD::Adresse^ CO::Commande::get_Adresse_Facturation()
{
    return this->Adresse_Facturation;
}

void CO::Commande::set_Adresse_Facturation(AD::Adresse^ adresse_facturation)
{
    this->Adresse_Facturation = adresse_facturation;
}

AD::Adresse^ CO::Commande::get_Adresse_Livraison()
{
    return this->Adresse_Livraison;
}

void CO::Commande::set_Adresse_Livraison(AD::Adresse^ adresse_livraison)
{
    this->Adresse_Livraison = adresse_livraison;
}

void CO::Commande::ajouter_Article(int^ id_commande, int^ id_article, int^ quantite)
{
    String^ requete;

    this->map = gcnew NS_mapArticle::mapArticle();
    this->Acces_Base = gcnew AB::AccesBase();

    requete = this->map->INSERT(id_commande, id_article, quantite);

    this->Acces_Base->actionRows(requete);
}