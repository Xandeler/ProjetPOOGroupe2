#pragma once

using namespace System;

namespace NS_Article
{
	ref class Article
	{
	private:
		int^ ID_Article;
		String^ Nom;
		int^ Quantite;
		float^ Prix_HT;
		float^ Taux_TVA;
		float^ Prix_TTC;
		int^ Seuil_Reapprovisionnement;
		int^ Seuil_Reduction;

	public:
		Article();
		Article(int^ ID, String^ nom, int^ quantite, float^ prix_ht, float^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction);
		int^ get_ID_Article();
		void set_ID_Article(int^ ID);
		String^ get_Nom();
		void set_Nom(String^ nom);
		int^ get_Quantite();
		void set_Quantite(int^ quantite);
		float^ get_Prix_HT();
		void set_Prix_HT(float^ prix_ht);
		float^ get_Taux_TVA();
		void set_Taux_TVA(float^ taux_tva);
		float^ get_Prix_TTC();
		void set_Prix_TTC();
		int^ get_Seuil_Reapprovisionnement();
		void set_Seuil_Reapprovisionnement(int^ seuil_reapprovisionnement);
		int^ get_Seuil_Reduction();
		void set_Seuil_Reduction(int^ seuil_reduction);
	};
}