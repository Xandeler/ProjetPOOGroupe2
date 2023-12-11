#include "StockageCommandes.h"

StockageCommandes::StockageCommandes()
{
    this->Acces_Base = gcnew AB::AccesBase();
    this->map = gcnew StoCom::CLgenerateSQLStoCom();
	this->map_fichier = gcnew mapFichier();
	this->dataset = gcnew DataSet();
}

StockageCommandes::StockageCommandes(int^ id_commande)
{
	this->Acces_Base = gcnew AB::AccesBase();
	this->map = gcnew StoCom::CLgenerateSQLStoCom();
	this->map_fichier = gcnew mapFichier(id_commande);
	this->dataset = gcnew DataSet();
}

void StockageCommandes::ajouter(int^ id_commande, int^ id_client, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    String^ requete;

	this->map = gcnew StoCom::CLgenerateSQLStoCom(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Insert();

    this->Acces_Base->actionRows(requete);
}

void StockageCommandes::supprimer(int^ id_commande, int^ id_client, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Delete();

    this->Acces_Base->actionRows(requete);
}

void StockageCommandes::modifier(int^ id_commande, int^ id_client, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Update();

    this->Acces_Base->actionRows(requete);
}

DataSet^ StockageCommandes::afficher(int^ id_commande, int^ id_client, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, double^ total_ht, double^ total_ttc, String^ nom_societe, AD::Adresse^ adresse_societe, int^ numero_service_clients, String^ logo, AD::Adresse^ adresse_facturation, AD::Adresse^ adresse_livraison, String^ NomTable)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom_societe, adresse_societe, numero_service_clients, logo, adresse_facturation, adresse_livraison);

    requete = this->map->SQL_Select();

    return this->Acces_Base->getRows(requete, NomTable);
}

DataSet^ StockageCommandes::afficher_tout(String^ NomTable)
{
    String^ requete;

    this->map = gcnew StoCom::CLgenerateSQLStoCom();

    requete = this->map->SQL_Select_all();

    return this->Acces_Base->getRows(requete, NomTable);
}

void StockageCommandes::reference(StreamWriter^ ecriture)
{
	String^ requete;
	requete = this->map_fichier->SELECT_reference();

	this->dataset = Acces_Base->getRows(requete, "Reference");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write("Référence de la commande : " + ligne[element]->ToString());
			}

			ecriture->WriteLine();
		}
	}
}

void StockageCommandes::societe(StreamWriter^ ecriture)
{
	ecriture->WriteLine("Société :");
	ecriture->WriteLine();
	ecriture->WriteLine("Nom de la société : Electronic");
	ecriture->WriteLine("Adresse de la société : 3 Quai de Paris, 67000 Strasbourg, France");
	ecriture->WriteLine("Numéro de service clients : 15329");
}

void StockageCommandes::client(StreamWriter^ ecriture)
{
	ecriture->WriteLine("Client :");
	ecriture->WriteLine();
	String^ requete;
	requete = this->map_fichier->SELECT_id_client();

	this->dataset = Acces_Base->getRows(requete, "ID");

	ecriture->Write("ID du client : ");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write(ligne[element]->ToString());
			}

			ecriture->WriteLine();
		}
	}

	requete = this->map_fichier->SELECT_nom_client();

	this->dataset = Acces_Base->getRows(requete, "nom");

	ecriture->Write("Nom et prénom du client : ");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write(ligne[element]->ToString() + " ");
			}

			ecriture->WriteLine();
		}
	}

	requete = this->map_fichier->SELECT_adresse_facturation();

	this->dataset = Acces_Base->getRows(requete, "facturation");

	ecriture->Write("Adresse de facturation du client : ");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write(ligne[element]->ToString() + " ");
			}

			ecriture->WriteLine();
		}
	}

	requete = this->map_fichier->SELECT_adresse_livraison();

	this->dataset = Acces_Base->getRows(requete, "livraison");

	ecriture->Write("Adresse de livraison du client : ");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write(ligne[element]->ToString() + " ");
			}

			ecriture->WriteLine();
		}
	}
}

void StockageCommandes::commande(StreamWriter^ ecriture)
{
	ecriture->WriteLine("Informations sur la commande :");
	ecriture->WriteLine();

	String^ texte;

	ecriture->WriteLine(" _____________________________________________________________________");

	texte = "| ID commande";
	ecriture->Write(texte->PadRight(11) + " | ");

	texte = "Nom article";
	ecriture->Write(texte->PadRight(11) + " | ");

	texte = "Quantité";
	ecriture->Write(texte->PadRight(11) + " | ");

	texte = "Montant HT";
	ecriture->Write(texte->PadRight(11) + " | ");

	texte = "Montant TTC";
	ecriture->Write(texte->PadRight(11) + " | ");

	ecriture->WriteLine();

	String^ requete;
	requete = this->map_fichier->SELECT_commande();

	this->dataset = Acces_Base->getRows(requete, "Commande");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			ecriture->Write("| ");

			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write(ligne[element]->ToString()->PadRight(11) + " | ");
			}

			ecriture->WriteLine();
		}
	}

	ecriture->WriteLine(" _____________________________________________________________________");
}

void StockageCommandes::totaux(StreamWriter^ ecriture)
{
	String^ texte = "| Totaux :";
	ecriture->Write(texte->PadRight(44));

	String^ requete;
	requete = this->map_fichier->SELECT_totaux();

	this->dataset = Acces_Base->getRows(requete, "Totaux");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write(ligne[element]->ToString()->PadRight(11) + " | ");
			}

			ecriture->WriteLine();
		}
	}

	ecriture->WriteLine(" _____________________________________________________________________");
}

void StockageCommandes::emission(StreamWriter^ ecriture)
{
	String^ requete;
	requete = this->map_fichier->SELECT_date_emission();

	this->dataset = Acces_Base->getRows(requete, "date_emission");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write("Date d'émission de la commande : " + ligne[element]->ToString());
			}

			ecriture->WriteLine();
		}
	}
}

void StockageCommandes::livraison(StreamWriter^ ecriture)
{
	String^ requete;
	requete = this->map_fichier->SELECT_date_livraison();

	this->dataset = Acces_Base->getRows(requete, "date_livraison");

	for each (DataTable ^ table in this->dataset->Tables)
	{
		for each (DataRow ^ ligne in table->Rows)
		{
			for each (DataColumn ^ element in table->Columns)
			{
				ecriture->Write("Date de livraison de la commande : " + ligne[element]->ToString());
			}

			ecriture->WriteLine();
		}
	}
}

void StockageCommandes::imprimer_commande()
{
	String^ chemin_acces = "C:\\Users\\leosc\\OneDrive - Association Cesi Viacesi mail\\Bureau\\A2\\(2) Conception et programmation objet\\Livrables\\Factures\\test.rtf";

	StreamWriter^ ecriture = gcnew StreamWriter(chemin_acces);

	this->reference(ecriture);

	ecriture->WriteLine();
	ecriture->WriteLine();

	this->societe(ecriture);

	ecriture->WriteLine();
	ecriture->WriteLine();

	this->client(ecriture);

	ecriture->WriteLine();
	ecriture->WriteLine();

	this->commande(ecriture);
	ecriture->WriteLine();
	this->totaux(ecriture);

	ecriture->WriteLine();
	ecriture->WriteLine();

	this->emission(ecriture);
	this->livraison(ecriture);

	ecriture->Close();
}
