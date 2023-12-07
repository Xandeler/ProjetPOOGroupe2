#include "MapStockageCommande.h"
#include "MapClient.h"
#include "StockageCommandes.h"
#include "AccesBase.h"
#include "Commande.h"

System::String^ StoCom::CLgenerateSQLStoCom::SQL_InsertCommandGenerator(void)
{
    String^ requete = "INSERT INTO Commande (Reference_Commande, Livraison_Prevue_Commande, Emission_Commande) + VALUES ('" + this->get_Reference() + "', '" + this->get_Date_Livraison() + "','" + this->get_Date_Emission();
    this->Acces_Base->actionRows(requete);
    return requete;
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_DeleteCommandGenerator(void)
{
    String^ requete = "DELETE FROM VotreTable WHERE Condition = 'VotreCondition'";
    this->Acces_Base->actionRows(requete);
    return requete;
}

System::String^ StoCom::CLgenerateSQLStoCom::SQL_UpdateCommandGenerator(void)
{
    String^ requete = "UPDATE VotreTable SET Colonne1 = 'NouvelleValeur1', Colonne2 = 'NouvelleValeur2' WHERE Condition = 'VotreCondition'";
    this->Acces_Base->actionRows(requete);
    return requete;
}



