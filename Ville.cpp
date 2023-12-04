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

double^ Ville::get_ID_Ville()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

void Ville::set_ID_Ville(double^ ID)
{
	throw gcnew System::NotImplementedException();
}

String^ Ville::get_nom()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

void Ville::set_nom(String^ nom)
{
	throw gcnew System::NotImplementedException();
}

Ville::Ville()
{
	throw gcnew System::NotImplementedException();
}

Ville::Ville(double^ ID, String^ nom)
{
	throw gcnew System::NotImplementedException();
}
