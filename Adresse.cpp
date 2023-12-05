#include "Adresse.h"

Adresse::Adresse()
{
	this->set_Code_Postal(00000);
	this->set_Nom_Ville("Rien");
	this->set_Rue("Rien");
	this->set_Numero_Maison("0");
	this->set_Nature("Rien");
}

Adresse::Adresse(int^ code_postal, String^ nom_ville, String^ rue, String^ numero_maison, String^ nature)
{
	this->set_Code_Postal(code_postal);
	this->set_Nom_Ville(nom_ville);
	this->set_Rue(rue);
	this->set_Numero_Maison(numero_maison);
	this->set_Nature(nature);
}

int^ Adresse::get_Code_Postal()
{
	return this->Code_Postal;
}

void Adresse::set_Code_Postal(int^ code_postal)
{
	this->Code_Postal = code_postal;
}

String^ Adresse::get_Nom_Ville()
{
	return this->Nom_Ville;
}

void Adresse::set_Nom_Ville(String^ nom_ville)
{
	this->Nom_Ville = nom_ville;
}

String^ Adresse::get_Rue()
{
	return this->Rue;
}

void Adresse::set_Rue(String^ rue)
{
	this->Rue = rue;
}

String^ Adresse::get_Numero_Maison()
{
	return this->Numero_Maison;
}

void Adresse::set_Numero_Maison(String^ numero_maison)
{
	this->Numero_Maison = numero_maison;
}

String^ Adresse::get_Nature()
{
	return this->Nature;
}

void Adresse::set_Nature(String^ nature)
{
	this->Nature = nature;
}

bool^ Adresse::verifier_Ville()
{
	bool verif_ville = false;  // Initialisez à false par défaut

	// On fait une boucle pour recuperer les villes de la BDD 1 par 1 qu'on insert dans un tableau 
	// On fait une boucle qui verifie la ville entree par l'utilisateur et chacune des villes du tableau 
	/*String tab_ville[30] = {
		"Paris", "Marseille", "Lyon", "Toulouse", "Nice", "Nantes",
		"Strasbourg", "Montpellier", "Bordeaux", "Lille", "Rennes",
		"Reims", "Le Havre", "Saint-Étienne", "Toulon", "Le Mans",
		"Aix-en-Provence", "Amiens", "Perpignan", "Boulogne-Billancourt",
		"Metz", "Besançon", "Grenoble", "Dijon", "Nîmes", "Angers",
		"Villeurbanne", "Levallois-Perret", "Clermont-Ferrand", "Antibes"
	};

	for (int i = 0; i < 10; ++i) {
		if (this->get_Nom_Ville() == tab_ville[i]) {
			verif_ville = true;
			break;  // Sortez de la boucle dès que la ville est trouvée
		}
	}
	*/

	return verif_ville;
}
