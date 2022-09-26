
#pragma once
#include "CLmainbdd.h"
#include "CLmapclient.h"

namespace NS_service_client
{
	ref class CLserviceclient
	{
	private:
		NS_CLmain_bdd::CLmainbdd^ oCad;
		NS_map_client::CLmapclient^ oMappTB;
	public:
		CLserviceclient(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		System::Data::DataSet^ selectionnerToutesLesPersonnesTest(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void ajouterUnePersonne(System::String^  , System::String^  , System::String^ , System::String^ , System::String^ , System::String^ , System::String^ , System::String^ , System::String^ , System::String^ , System::String^ );
		void ajouterUnePersonnetest(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updatepersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateadresse(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deletepersonne(System::String^, System::String^);
		void deleteadresse(System::String^, System::String^);
	};
}