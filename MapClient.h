#pragma once
#include "Client.h"
#include "Adresse.h"

namespace NS_Comp_Mappage
{
	ref class CLgenerateSQLcmds : public CL::Client
	{
	private:

	public:
		System::String^ SQL_SelectCommandGenerator(void);
		System::String^ SQL_InsertCommandGenerator(void);
		System::String^ SQL_DeleteCommandGenerator(void);
		System::String^ SQL_UpdateCommandGenerator(void);




	};
}
