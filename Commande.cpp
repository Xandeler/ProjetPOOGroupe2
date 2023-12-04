#include "Commande.h"

Commande::Commande()
{
    throw gcnew System::NotImplementedException();
}

Commande::Commande(int^ id, String^ lettres_nom, String^ lettres_prenom, int^ annee, String^ lettres_ville, String^ date_livraison, String^ date_emission, String^ date_fin_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, Adresse^ adresse_facturation, Adresse^ adresse_livraison)
{
    throw gcnew System::NotImplementedException();

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
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->ID_Commande;
}

void Commande::set_ID_Commande(int^ id)
{
    throw gcnew System::NotImplementedException();

    this->ID_Commande = id;
}

String^ Commande::get_Lettres_Nom()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Lettres_Nom;
}

void Commande::set_Lettres_Nom(String^ lettres_nom)
{
    throw gcnew System::NotImplementedException();
}

String^ Commande::get_Lettres_Prenom()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Lettres_Prenom;
}

void Commande::set_Lettres_Prenom(String^ lettres_prenom)
{
    throw gcnew System::NotImplementedException();
}

int^ Commande::get_Annee()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Annee;
}

void Commande::set_Annee(int^ annee)
{
    throw gcnew System::NotImplementedException();

    this->Annee = annee;
}

String^ Commande::get_Lettres_Ville()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Lettres_Ville;
}

void Commande::set_Lettres_Ville(String^ lettres_ville)
{
    throw gcnew System::NotImplementedException();
}

String^ Commande::get_Reference()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Reference;
}

void Commande::set_Reference(int^ id, String^ lettres_nom, String^ lettres_prenom, String^ lettres_ville, int^ annee)
{
    throw gcnew System::NotImplementedException();

    this->Reference = lettres_prenom + lettres_nom + Convert::ToString(annee) + lettres_ville + Convert::ToString(id);
}

String^ Commande::get_Date_Livraison()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Date_Livraison;
}

void Commande::set_Date_Livraison(String^ date_livraison)
{
    throw gcnew System::NotImplementedException();

    this->Date_Livraison = date_livraison;
}

String^ Commande::get_Date_Emission()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Date_Emission;
}

void Commande::set_Date_Emission(String^ date_emission)
{
    throw gcnew System::NotImplementedException();

    this->Date_Emission = date_emission;
}

List<Paiement^>^ Commande::get_Liste_Paiements()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Liste_Paiements;
}

void Commande::ajouter_Paiement()
{
    throw gcnew System::NotImplementedException();
}

void Commande::supprimer_Paiement()
{
    throw gcnew System::NotImplementedException();
}

void Commande::modifier_Paiement()
{
    throw gcnew System::NotImplementedException();
}

void Commande::afficher_Paiement()
{
    throw gcnew System::NotImplementedException();
}

String^ Commande::get_Date_Fin_Paiement()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Date_Fin_Paiement;
}

void Commande::set_Date_Fin_Paiement(String^ date_fin_paiement)
{
    throw gcnew System::NotImplementedException();

    this->Date_Fin_Paiement = date_fin_paiement;
}

double^ Commande::get_Total_HT()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Total_HT;
}

void Commande::set_Total_HT(double^ total_ht)
{
    throw gcnew System::NotImplementedException();

    this->Total_HT = total_ht;
}

double^ Commande::get_Total_TTC()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Total_TTC;
}

void Commande::set_Total_TTC(double^ total_ttc)
{
    throw gcnew System::NotImplementedException();

    this->Total_TTC = total_ttc;
}

String^ Commande::get_Nom_Societe()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Nom_Societe;
}

void Commande::set_Nom_Societe(String^ nom_societe)
{
    throw gcnew System::NotImplementedException();

    this->Nom_Societe = nom_societe;
}

Adresse^ Commande::get_Adresse_Societe()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Adresse_Societe;
}

void Commande::set_Adresse_Societe(Adresse^ adresse_societe)
{
    throw gcnew System::NotImplementedException();

    this->Adresse_Societe = adresse_societe;
}

int^ Commande::get_Numero_Service_Clients()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Numero_Service_Clients;
}

void Commande::set_Numero_Service_Clients(int^ numero_service_clients)
{
    throw gcnew System::NotImplementedException();

    this->Numero_Service_Clients = numero_service_clients;
}

String^ Commande::get_Logo()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Logo;
}

void Commande::set_Logo(String^ logo)
{
    throw gcnew System::NotImplementedException();

    this->Logo = logo;
}

Adresse^ Commande::get_Adresse_Facturation()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Adresse_Facturation;
}

void Commande::set_Adresse_Facturation(Adresse^ adresse_facturation)
{
    throw gcnew System::NotImplementedException();

    this->Adresse_Facturation = adresse_facturation;
}

Adresse^ Commande::get_Adresse_Livraison()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici

    return this->Adresse_Livraison;
}

void Commande::set_Adresse_Livraison(Adresse^ adresse_livraison)
{
    throw gcnew System::NotImplementedException();

    this->Adresse_Livraison = adresse_livraison;
}

void Commande::ajouter_Article()
{
    throw gcnew System::NotImplementedException();
}

void Commande::supprimer_Article()
{
    throw gcnew System::NotImplementedException();
}

void Commande::modifier_Article()
{
    throw gcnew System::NotImplementedException();
}

void Commande::afficher_Article()
{
    throw gcnew System::NotImplementedException();
}
