#pragma once
#include "StockageCommandes.h"
#include "MapStockageCommande.h"
#include "MapClient.h"
#include "StockageCommandes.h"
#include "AccesBase.h"
#include "Commande.h"

namespace StoCom
{
	ref class CLgenerateSQLStoCom : public Commande
	{
	private:

	public:
		System::String^ SQL_SelectCommandGenerator(void);
		System::String^ SQL_InsertCommandGenerator(void);
		System::String^ SQL_DeleteCommandGenerator(void);
		System::String^ SQL_UpdateCommandGenerator(void);
	};
}