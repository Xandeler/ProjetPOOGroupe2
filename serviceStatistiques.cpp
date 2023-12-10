#include "serviceStatistiques.h"

servstat::serviceStatistiques::serviceStatistiques()
{
	this->Statistiques = gcnew stat::Statistiques();
	this->Acces_Base = gcnew AB::AccesBase();
}

Data::DataSet^ servstat::serviceStatistiques::Calcul_Panier_MoyenSERVICE(int id_commande, String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Calcul_Panier_Moyen(id_commande, NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Calcul_Chiffre_AffairesSERVICE(String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Calcul_Chiffre_Affaires(NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Produit_A_CommanderSERVICE(String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Produit_A_Commander(NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Calcul_Montant_ClientSERVICE(int id_client, String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Calcul_Montant_Client(id_client, NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Articles_Plus_VendusSERVICE(String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Articles_Plus_Vendus(NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Articles_Moins_VendusSERVICE(String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Articles_Moins_Vendus(NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Calcul_Valeur_Commerciale_StockSERVICE(String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Calcul_Valeur_Commerciale_Stock(NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

Data::DataSet^ servstat::serviceStatistiques::Calcul_Valeur_Achat_StockSERVICE(String^ NomTable)
{
	String^ requete;
	requete = this->Statistiques->Calcul_Valeur_Achat_Stock(NomTable);
	return this->Acces_Base->getRows(requete, NomTable);
}

//String^ servstat::serviceStatistiques::Simulation_Variations()
