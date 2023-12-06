#pragma once
#include "Personne.h"
#include "Client.h"
#include "Adresse.h"
#include "Ville.h"

namespace NS_Comp_Mappage
{
	ref class CLgenerateSQLcmds : public Client
	{
	private:

	public:
		System::String^ SQL_SelectCommandGenerator(void);
		System::String^ SQL_InsertCommandGenerator(void);
		System::String^ SQL_DeleteCommandGenerator(void);
		System::String^ SQL_UpdateCommandGenerator(void);




	};
}
