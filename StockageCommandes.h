#pragma once
#include "Commande.h"
#include <cliext/list>

using namespace System::Collections::Generic;
using namespace System;

ref class StockageCommandes
{
private:
	List<Commande^>^ Liste_Commandes;

public:
	StockageCommandes();
	void ajouter();
	void supprimer();
	void modifier();
	void afficher();
};