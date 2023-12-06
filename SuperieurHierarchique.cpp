#include "SuperieurHierarchique.h"

SuperieurHierarchique::SuperieurHierarchique()
{
	this->personnel->set_Date_Embauche("00/00/0000");
	this->personnel->set_Superieur_Hierarchique(1);
}

String^ SuperieurHierarchique::afficher()
{
	return "SELECT" + "FROM;"; //compléter
}
