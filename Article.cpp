#include "Article.h"

Article::Article()
{
	this->set_ID_Article(1);
	this->set_Nom("Rien");
	this->set_Quantite(1);
	this->set_Prix_HT(0.0);
	this->set_Taux_TVA(0.0);
	this->set_Prix_TTC();
	this->set_Seuil_Reapprovisionnement(1);
	this->set_Seuil_Reduction(1);
	this->set_Couleur("Rien");
}

Article::Article(int^ ID, String^ nom, int^ quantite, double^ prix_ht, double^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction, String^ couleur)
{
	this->set_ID_Article(ID);
	this->set_Nom(nom);
	this->set_Quantite(quantite);
	this->set_Prix_HT(prix_ht);
	this->set_Taux_TVA(taux_tva);
	this->set_Prix_TTC();
	this->set_Seuil_Reapprovisionnement(seuil_reapprovisionnement);
	this->set_Seuil_Reduction(seuil_reduction);
	this->set_Couleur(couleur);
}

int^ Article::get_ID_Article()
{
	return this->ID_Article;
}

void Article::set_ID_Article(int^ ID)
{
	this->ID_Article = ID;
}

String^ Article::get_Nom()
{
	return this->Nom;
}

void Article::set_Nom(String^ nom)
{
	this->Nom = nom;
}

int^ Article::get_Quantite()
{
	return this->Quantite;
}

void Article::set_Quantite(int^ quantite)
{
	this->Quantite = quantite;
}

double^ Article::get_Prix_HT()
{
	return this->Prix_HT;
}

void Article::set_Prix_HT(double^ prix_ht)
{
	this->Prix_HT = prix_ht;
}

double^ Article::get_Taux_TVA()
{
	return this->Taux_TVA;
}

void Article::set_Taux_TVA(double^ taux_tva)
{
	this->Taux_TVA = taux_tva;
}

double^ Article::get_Prix_TTC()
{
	return this->Prix_TTC;
}

void Article::set_Prix_TTC()
{
	double^ prix_ttc = (*this->get_Prix_HT()) + (((*this->get_Prix_HT()) / 100.0) * (*this->get_Taux_TVA()));

	this->Prix_TTC = prix_ttc;
}

int^ Article::get_Seuil_Reapprovisionnement()
{
	return this->Seuil_Reapprovisionnement;
}

void Article::set_Seuil_Reapprovisionnement(int^ seuil_reapprovisionnement)
{
	this->Seuil_Reapprovisionnement = seuil_reapprovisionnement;
}

int^ Article::get_Seuil_Reduction()
{
	return this->Seuil_Reduction;
}

void Article::set_Seuil_Reduction(int^ seuil_reduction)
{
	this->Seuil_Reduction = seuil_reduction;
}

String^ Article::get_Couleur()
{
	return this->Couleur;
}

void Article::set_Couleur(String^ couleur)
{
	this->Couleur = couleur;
}
