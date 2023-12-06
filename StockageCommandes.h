#pragma once
#include "Commande.h"
#include "AccesBase.h"

using namespace System;
using namespace System::IO;

ref class StockageCommandes
{
private:
	AccesBase^ Acces_Base;
	Commande^ comande;

public:
	StockageCommandes();
	void ajouter();
	void supprimer();
	void modifier();
	String^ afficher();
	void imprimer();
};