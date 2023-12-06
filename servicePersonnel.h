#pragma once
#include "AccesBase.h"
#include "personnel.h"

namespace servPers
{
	ref class CLservices
	{
	private:
		AB::AccesBase^ acc;
		PE::Personnel^ pe;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		void supprimerUnePersonne(int);
		void modifierUnePersonne(int, System::String^, System::String^);

	};
}
