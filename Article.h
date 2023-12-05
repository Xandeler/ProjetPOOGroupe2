#pragma once

using namespace System;

ref class Article
{
private:
	int^ ID_Article;
	String^ Nom;
	int^ Quantite;
	double^ Prix_HT;
	double^ Taux_TVA;
	double^ Prix_TTC;
	int^ Seuil_Reapprovisionnement;
	int^ Seuil_Reduction;

public:
	Article();
	Article(int^ ID, String^ nom, int^ quantite, double^ prix_ht, double^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction);
	int^ get_ID_Article();
	void set_ID_Article(int^ ID);
	String^ get_Nom();
	void set_Nom(String^ nom);
	int^ get_Quantite();
	void set_Quantite(int^ quantite);
	double^ get_Prix_HT();
	void set_Prix_HT(double^ prix_ht);
	double^ get_Taux_TVA();
	void set_Taux_TVA(double^ taux_tva);
	double^ get_Prix_TTC();
	void set_Prix_TTC();
	int^ get_Seuil_Reapprovisionnement();
	void set_Seuil_Reapprovisionnement(int^ seuil_reapprovisionnement);
	int^ get_Seuil_Reduction();
	void set_Seuil_Reduction(int^ seuil_reduction);
};