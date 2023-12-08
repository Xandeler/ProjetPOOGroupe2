#include "StockageCommandes.h"

StockageCommandes::StockageCommandes()
{
    this->Acces_Base = gcnew AB::AccesBase();
    this->map = gcnew StoCom::CLgenerateSQLStoCom();
}

void StockageCommandes::ajouter(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id, reference, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Insert();

    this->Acces_Base->actionRows(requete);
}

void StockageCommandes::supprimer(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id, reference, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Delete();

    this->Acces_Base->actionRows(requete);
}

void StockageCommandes::modifier(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id, reference, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Update();

    this->Acces_Base->actionRows(requete);
}

DataSet^ StockageCommandes::afficher(int^ id, String^ reference, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison, String^ NomTable)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id, reference, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Select();

    return this->Acces_Base->getRows(requete, NomTable);
}

DataSet^ StockageCommandes::afficher_tout(String^ NomTable)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom();

    requete = this->map->SQL_Select_all();

    return this->Acces_Base->getRows(requete, NomTable);
}

void StockageCommandes::imprimer()
{
    String^ chemin_acces = "";

    StreamWriter^ ecriture = gcnew StreamWriter(chemin_acces);

    ecriture->WriteLine("Ce que l'on souhaite ecrire.");
}
