#pragma once
#include "CLmainbdd.h"
namespace NS_service_personnel
{
	ref class CLServicePersonnel
	{
	private:
		NS_CLmain_bdd::CLmainbdd^ oCad;

	public:
		CLServicePersonnel(void);
		System::Data::DataSet^ selectionpersonnel( System::String^, System::String^, System::String^);
		void ajoutpersonneladd(  System::String^, System::String^, System::String^, System::String^, System::String^);
		void ajoutpersonnel( System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updatepersonnel( System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updatepersonnelsup(System::String^,System::String^, System::String^, System::String^);
		void deleteadressekey(System::String^, System::String^);
		void deletepersonne(System::String^, System::String^);
		void deletecommande1(System::String^);
		void deletecommande2(System::String^);
		void deletecommande3(System::String^);
		System::Data::DataSet^ selectionarticle(System::String^);
		System::Data::DataSet^ articlemoinsvendu(System::String^);
		System::Data::DataSet^ articleplusvendu(System::String^);
		System::Data::DataSet^ selectionpayement(System::String^);
		System::Data::DataSet^ selectionnercommande(System::String^);
		System::Data::DataSet^ totalachat(System::String^);
		void ajoutstock(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void ajoutcommande( System::String^, System::String^, System::String^, System::String^, System::String^);
		void ajoutarticlecommande(System::String^, System::String^, System::String^);
		void ajoutmoney(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supstock(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifstock(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		/*void ajoutpersonneltest(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updatepersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateadressepersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void deletepersonnel(System::String^, System::String^);
		void deleteadressepersonnel(System::String^, System::String^);*/
	};

}