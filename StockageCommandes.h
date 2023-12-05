#pragma once
#include "Commande.h"

using namespace System;
using namespace System::IO;

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