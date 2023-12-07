#pragma once
#include "MapClient.h"
#include "AccesBase.h"
#include "Adresse.h"

namespace NS_Comp_Svc
{
	ref class CL_SQLservices
	{
	private:
		AD::Adresse^ adresse;
		AB::AccesBase^ SQLdataAccessController;
		NS_Comp_Mappage::CLgenerateSQLcmds^ SQLcmdGenerator;
	public:
		CL_SQLservices(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void effacerUnClient(int);
		void modifierUnclient(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void executerUneCommande(System::String^);

	};
}
