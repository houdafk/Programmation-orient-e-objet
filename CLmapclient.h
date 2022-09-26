#pragma once
namespace NS_map_client
{
	ref class CLmapclient
	{
	private:
		System::String^ sSql;
		System::String^ rqt;
		int id__c;
		System::String^ nom_c;
		System::String^ prenom_c;
		System::String^ date_anniv;
		System::String^ date_1_commande;
		//CONDITION 
		System::String^ nom_c_con;
		System::String^ prenom_c_con;
		System::String^ date_anniv_con;
		System::String^ date_1_commande_con;
		//CONDITION
		System::String^ nomr; 
		System::String^ numr;
		System::String^ numh;
		System::String^ etage;
		System::String^ ville;
		System::String^ idfac;
		System::String^ idliv;
	public:
		System::String^ Select(void);
		System::String^ Selecttest(void);
		System::String^ Insert(void);
		System::String^ Inserttest(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ Updateadr(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateAnniv(System::String^);
		void setnomr(System::String^);
		void setnumr(System::String^);
		void setnumh(System::String^);
		void setetage(System::String^);
		void setville(System::String^);
		void setidfac(System::String^);
		void setidliv(System::String^);
		void setDateFirstCommande(System::String^);
		void setrqt(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getDateAnniv(void);
		System::String^ getDateFirstCommande(void);
	};
}