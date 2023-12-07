#pragma once
#include "Client.h"
#include "Adresse.h"
#include "AccesBase.h"

namespace NS_Comp_Mappage
{
	ref class CLgenerateSQLcmds : public CL::Client
	{
	private:
		AD::Adresse^ adressef;
        AD::Adresse^ adressel;
		CL::Client^ client;
		AB::AccesBase^ accesB;

	public:
        CLgenerateSQLcmds();
		void set_Adresse_FacturationI(System::String^ numero_maison, System::String^ rue);
		void set_Adresse_LivraisonI(System::String^ numero_maison, System::String^ rue);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(CL::Client^);
		void supprimerUnePersonne(int);
		void modifierUnePersonne(int, CL::Client^);



	};
}
