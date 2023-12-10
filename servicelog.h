#pragma once
using namespace System;
#include "log.h"
#include "AccesBase.h"

namespace servL {
	ref class servicelog
	{
		private:
		L::log^ Log;
		AB::AccesBase^ Acces_Base;

		public:
			servicelog();
			void accespersonnelSERVICE(L::log^);
			void accesclientSERVICE(L::log^);
			void accescommandeSERVICE(L::log^);
			void accesstockSERVICE(L::log^);
			void accesstatistiquesSERVICE(L::log^);
			void acceslogSERVICE(L::log^);
			Data::DataSet^ afficherlogSERVICE(L::log^, String^ NomTable);
	};
}
