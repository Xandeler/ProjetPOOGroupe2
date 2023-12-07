#include "Adresse.h"
#include <string>



AD::Adresse::Adresse()
{
	this->set_Code_Postal(00000);
	this->set_Nom_Ville("Rien");
	this->set_Rue("Rien");
	this->set_Numero_Maison(1);
	this->set_Nature("Rien");
}

AD::Adresse::Adresse(int code_postal, String^ nom_ville, String^ rue, int numero_maison, String^ nature)
{
	this->set_Code_Postal(code_postal);
	this->set_Nom_Ville(nom_ville);
	this->set_Rue(rue);
	this->set_Numero_Maison(numero_maison);
	this->set_Nature(nature);
}

int AD::Adresse::get_Code_Postal()
{
	return this->Code_Postal;
}

void AD::Adresse::set_Code_Postal(int code_postal)
{
	this->Code_Postal = code_postal;
}

String^ AD::Adresse::get_Nom_Ville()
{
	return this->Nom_Ville;
}

void AD::Adresse::set_Nom_Ville(String^ nom_ville)
{
	this->Nom_Ville = nom_ville;
}

String^ AD::Adresse::get_Rue()
{
	return this->Rue;
}

void AD::Adresse::set_Rue(String^ rue)
{
	this->Rue = rue;
}

void AD::Adresse::set_Numero_Maison(int numero_maison)
{
	this->Numero_Maison = numero_maison;

}
int AD::Adresse::get_Numero_Maison()
{
	return this->Numero_Maison;
}

String^ AD::Adresse::get_Nature()
{
	return this->Nature;
}

void AD::Adresse::set_Nature(String^ nature)
{
	this->Nature = nature;
}

int AD::Adresse::verifier_Ville()
{

	/*int verif_ville = 1;
	int id_ville = 0;

	std::string tab_ville[30] = {
		"Paris", "Marseille", "Lyon", "Toulouse", "Nice", "Nantes",
		"Strasbourg", "Montpellier", "Bordeaux", "Lille", "Rennes",
		"Reims", "Le Havre", "Saint-Étienne", "Toulon", "Le Mans",
		"Aix-en-Provence", "Amiens", "Perpignan", "Boulogne-Billancourt",
		"Metz", "Besançon", "Grenoble", "Dijon", "Nîmes", "Angers",
		"Villeurbanne", "Levallois-Perret", "Clermont-Ferrand", "Antibes"
	};

	// Convertir System::String^ en std::string pour la comparaison


	System::String^ managedString = this->get_Nom_Ville();
	std::string nom_ville = msclr::interop::marshal_as<std::string>(managedString);


	for (int i = 0; i < 30; ++i) {
		if (nom_ville == tab_ville[i]) {
			return id_ville = i;
			break;  // Sortir de la boucle dès que la ville est trouvée
		}
		else {
			return id_ville = 31;
		}
	}	  */


	return 1;
}
