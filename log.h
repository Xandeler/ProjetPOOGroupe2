#pragma once
using namespace System;

namespace L {
	ref class log
	{
		public:
		log();
		String^ accespersonnel();
		String^ accesclient();
		String^ accescommande();
		String^ accesstock();
		String^ accesstatistiques();
		String^ acceslog();
		String^ afficherlog();
	};
}
