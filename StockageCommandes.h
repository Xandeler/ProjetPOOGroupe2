#pragma once
#include "Commande.h"

using namespace System;

ref class StockageCommandes
{
public:
	StockageCommandes();
	void ajouter();
	void supprimer();
	void modifier();
	void afficher();
	void imprimer();
};