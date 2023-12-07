#include "Article.h"

NS_Article::Article::Article()
{
	this->set_ID_Article(1);
	this->set_Nom("Rien");
	this->set_Quantite(1);
	this->set_Prix_HT(0.0f);
	this->set_Taux_TVA(0.0f);
	this->set_Prix_TTC();
	this->set_Seuil_Reapprovisionnement(1);
	this->set_Seuil_Reduction(1);
}

NS_Article::Article::Article(int^ ID, String^ nom, int^ quantite, float^ prix_ht, float^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction)
{
	this->set_ID_Article(ID);
	this->set_Nom(nom);
	this->set_Quantite(quantite);
	this->set_Prix_HT(prix_ht);
	this->set_Taux_TVA(taux_tva);
	this->set_Prix_TTC();
	this->set_Seuil_Reapprovisionnement(seuil_reapprovisionnement);
	this->set_Seuil_Reduction(seuil_reduction);
}

int^ NS_Article::Article::get_ID_Article()
{
	return this->ID_Article;
}

void NS_Article::Article::set_ID_Article(int^ ID)
{
	this->ID_Article = ID;
}

String^ NS_Article::Article::get_Nom()
{
	return this->Nom;
}

void NS_Article::Article::set_Nom(String^ nom)
{
	this->Nom = nom;
}

int^ NS_Article::Article::get_Quantite()
{
	return this->Quantite;
}

void NS_Article::Article::set_Quantite(int^ quantite)
{
	this->Quantite = quantite;
}

float^ NS_Article::Article::get_Prix_HT()
{
	return this->Prix_HT;
}

void NS_Article::Article::set_Prix_HT(float^ prix_ht)
{
	this->Prix_HT = prix_ht;
}

float^ NS_Article::Article::get_Taux_TVA()
{
	return this->Taux_TVA;
}

void NS_Article::Article::set_Taux_TVA(float^ taux_tva)
{
	this->Taux_TVA = taux_tva;
}

float^ NS_Article::Article::get_Prix_TTC()
{
	return this->Prix_TTC;
}

void NS_Article::Article::set_Prix_TTC()
{
	float^ prix_ttc = Convert::ToSingle((*this->get_Prix_HT()) + (((*this->get_Prix_HT()) / 100.0) * (*this->get_Taux_TVA())));

	this->Prix_TTC = prix_ttc;
}

int^ NS_Article::Article::get_Seuil_Reapprovisionnement()
{
	return this->Seuil_Reapprovisionnement;
}

void NS_Article::Article::set_Seuil_Reapprovisionnement(int^ seuil_reapprovisionnement)
{
	this->Seuil_Reapprovisionnement = seuil_reapprovisionnement;
}

int^ NS_Article::Article::get_Seuil_Reduction()
{
	return this->Seuil_Reduction;
}

void NS_Article::Article::set_Seuil_Reduction(int^ seuil_reduction)
{
	this->Seuil_Reduction = seuil_reduction;
}
