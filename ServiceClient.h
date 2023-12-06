#pragma once
#include "MapClient.h"
#include "AccesBase.h"

namespace NS_Comp_Svc
{
	ref class CL_SQLservices
	{
	private:
		AB::AccesBase^ SQLdataAccessController;
		NS_Comp_Mappage::CLgenerateSQLcmds^ SQLcmdGenerator;
	public:
		CL_SQLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		void effacerUnePersonne(int);
		void modifierUnePersonne(int^, System::String^, System::String^);

	};
}
