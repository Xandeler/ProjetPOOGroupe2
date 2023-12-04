#pragma once
#include "Article.h"
#include <cliext/list>

using namespace System::Collections::Generic;
using namespace System;

ref class Stock
{
private:
	List<Article^>^ Liste_Articles;

public:
	Stock();
	void ajouter();
	void supprimer();
	void modifier();
	void afficher();
};