#include "Commande.h"

Commande::Commande()
{

}

Commande::Commande(int^ id, String^ lettres_nom, String^ lettres_prenom, int^ annee, String^ lettres_ville, String^ date_livraison, String^ date_emission, String^ date_fin_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, Adresse^ adresse_facturation, Adresse^ adresse_livraison)
{
    this->set_ID_Commande(id);
    this->set_Lettres_Nom(lettres_nom);
    this->set_Lettres_Prenom(lettres_prenom);
    this->set_Annee(annee);
    this->set_Lettres_Ville(lettres_ville);
    this->set_Reference(id, lettres_nom, lettres_prenom, lettres_ville, annee);
    this->set_Date_Livraison(date_livraison);
    this->set_Date_Emission(date_emission);
    this->set_Date_Fin_Paiement(date_fin_paiement);
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

String^ Commande::get_Lettres_Nom()
{
    return this->Lettres_Nom;
}

void Commande::set_Lettres_Nom(String^ lettres_nom)
{
    this->Lettres_Nom = lettres_nom;
}

String^ Commande::get_Lettres_Prenom()
{
    return this->Lettres_Prenom;
}

void Commande::set_Lettres_Prenom(String^ lettres_prenom)
{
    this->Lettres_Prenom = lettres_prenom;
}

int^ Commande::get_Annee()
{
    return this->Annee;
}

void Commande::set_Annee(int^ annee)
{
    this->Annee = annee;
}

String^ Commande::get_Lettres_Ville()
{
    return this->Lettres_Ville;
}

void Commande::set_Lettres_Ville(String^ lettres_ville)
{
    this->Lettres_Ville = lettres_ville;
}

String^ Commande::get_Reference()
{
    return this->Reference;
}

void Commande::set_Reference(int^ id, String^ lettres_nom, String^ lettres_prenom, String^ lettres_ville, int^ annee)
{
    this->Reference = lettres_prenom + lettres_nom + Convert::ToString(annee) + lettres_ville + Convert::ToString(id);
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

List<Paiement^>^ Commande::get_Liste_Paiements()
{
    return this->Liste_Paiements;
}

void Commande::ajouter_Paiement()
{
    
}

void Commande::supprimer_Paiement()
{
    
}

void Commande::modifier_Paiement()
{
    
}

void Commande::afficher_Paiement()
{
    
}

String^ Commande::get_Date_Fin_Paiement()
{
    return this->Date_Fin_Paiement;
}

void Commande::set_Date_Fin_Paiement(String^ date_fin_paiement)
{
    this->Date_Fin_Paiement = date_fin_paiement;
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

Adresse^ Commande::get_Adresse_Societe()
{
    return this->Adresse_Societe;
}

void Commande::set_Adresse_Societe(Adresse^ adresse_societe)
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

Adresse^ Commande::get_Adresse_Facturation()
{
    return this->Adresse_Facturation;
}

void Commande::set_Adresse_Facturation(Adresse^ adresse_facturation)
{
    this->Adresse_Facturation = adresse_facturation;
}

Adresse^ Commande::get_Adresse_Livraison()
{
    return this->Adresse_Livraison;
}

void Commande::set_Adresse_Livraison(Adresse^ adresse_livraison)
{
    this->Adresse_Livraison = adresse_livraison;
}

void Commande::ajouter_Article()
{
    
}

void Commande::supprimer_Article()
{
    
}

void Commande::modifier_Article()
{
    
}

void Commande::afficher_Article()
{
    
}
