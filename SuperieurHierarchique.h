#pragma once
#include "Personne.h"
#include "Personnel.h"

ref class SuperieurHierarchique : public Personne
{
private:
	PE::Personnel^ personnel;

public:
	SuperieurHierarchique();
	String^ afficher();
};