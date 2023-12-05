#pragma once
#include "Article.h"
#include "AccesBase.h"

using namespace System;

ref class Stock
{
private:
	AccesBase^ Acces_Base;
	Article^ article;

public:
	Stock();
	void set_Article(String^ nom, int^ quantite, double^ prix_ht, double^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction);
	Article^ get_Article();
	void ajouter();
	void supprimer(int^ id);
	void modifier(int^ id);
	void afficher();
};