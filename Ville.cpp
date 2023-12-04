#include "Ville.h"

List<Ville^>^ Ville::get_Liste_Ville()
{
	return this->Liste_Ville;
}

void Ville::ajouter()
{
	Ville^ ville = gcnew Ville();

	Console::Write("Veuillez saisir le nom de la ville a ajouter : ");
	ville->nom = Console::ReadLine();

	this->Liste_Ville->Add(ville);
}

void Ville::supprimer(double^ ID)
{

}
