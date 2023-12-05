#pragma once
#include "Article.h"
#include "AccesBase.h"

using namespace System;

ref class Stock
{
private:
	AccesBase^ Acces_Base;

public:
	Stock();
	void ajouter();
	void supprimer();
	void modifier();
	void afficher();
};