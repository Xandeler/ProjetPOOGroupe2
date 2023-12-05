#pragma once
#include "Commande.h"
#include "AccesBase.h"

using namespace System;
using namespace System::IO;

ref class StockageCommandes
{
private:
	AccesBase^ Acces_Base;

public:
	StockageCommandes();
	void ajouter();
	void supprimer();
	void modifier();
	void afficher();
	void imprimer();
};