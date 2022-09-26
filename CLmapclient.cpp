#include "CLmapclient.h"


System::String^ NS_map_client::CLmapclient::Select(void)
{
	return "SELECT [id__c], [nom_c], [prenom_c],[date_anniv],[date_1_commande] FROM [projetexiabdd].[dbo].[client]";
}

System::String^ NS_map_client::CLmapclient::Selecttest(void)
{
	return "SELECT [id__c], [nom_c], [prenom_c],[date_anniv],[date_1_commande] FROM [projetexiabdd].[dbo].[client] where "+this->rqt+"";
}
System::String^ NS_map_client::CLmapclient::Insert(void)
{

		return "INSERT INTO [projetexiabdd].[dbo].[client] (nom_c, prenom_c,date_anniv,date_1_commande) VALUES('" + this->nom_c + "','" + this->prenom_c + "','" + this->date_anniv + "','" + this->date_1_commande + "');";
	
}
System::String^ NS_map_client::CLmapclient::Inserttest(void)
{
	if (idfac == "NULL") {
		return "INSERT INTO [projetexiabdd].[dbo].[adresse] (num_rue,nom_rue,num_habitat,etage,Ville,id_livraison) VALUES('" + this->numr + "','" + this->nomr + "','" + this->numh + "','" + this->etage + "','" + this->ville + "',(select id__c from client where nom_c='" + this->nom_c + "'and prenom_c='" + this->prenom_c + "')"+");";
	}
	else if (idliv == "NULL") {
		return " INSERT INTO [projetexiabdd].[dbo].[adresse] (num_rue,nom_rue,num_habitat,etage,Ville,id_facturation) VALUES('" + this->numr + "','" + this->nomr + "','" + this->numh + "','" + this->etage + "','" + this->ville + "',(select id__c from client where nom_c='" + this->nom_c + "'and prenom_c='" + this->prenom_c + "')" + ");";
	}
	else {
		return "INSERT INTO [projetexiabdd].[dbo].[adresse] (num_rue,nom_rue,num_habitat,etage,id_livraison,Ville,id_facturation) VALUES('" + this->numr + "','" + this->nomr + "','" + this->numh + "','" + this->etage + "',(select id__c from client where nom_c='"+this->nom_c  + "'and prenom_c='"+this->prenom_c+"'),'" + this->ville + "',(select id__c from client where nom_c='" + this->nom_c + "'and prenom_c='" + this->prenom_c + "')" + ");";
	}
}
System::String^ NS_map_client::CLmapclient::Delete(void)
{
	return "";
}
System::String^ NS_map_client::CLmapclient::Update(void)
{
	return"";
}
System::String^ NS_map_client::CLmapclient::Updateadr(void)
{
	return "UPDATE";
}
void NS_map_client::CLmapclient::setId(int id__c)
{
	this->id__c = id__c;
}
void NS_map_client::CLmapclient::setrqt(System::String^ rqt)
{
	this->rqt = rqt;
}
void NS_map_client::CLmapclient::setNom(System::String^ nom_c)
{
	this->nom_c = nom_c;
}
void NS_map_client::CLmapclient::setPrenom(System::String^ prenom_c)
{
	this->prenom_c = prenom_c;
}
void NS_map_client::CLmapclient::setDateAnniv(System::String^ date_anniv)
{
	this->date_anniv = date_anniv;
}
void NS_map_client::CLmapclient::setDateFirstCommande(System::String^ date_1_commande)
{
	this->date_1_commande = date_1_commande;
}
void NS_map_client::CLmapclient::setnomr(System::String^ nomr)
{
	this->nomr = nomr;
}
void NS_map_client::CLmapclient::setnumr(System::String^ numr)
{
	this->numr = numr;
}
void NS_map_client::CLmapclient::setnumh(System::String^ numh)
{
	this->numh = numh;
}
void NS_map_client::CLmapclient::setetage(System::String^ etage)
{
	this->etage = etage;
}
void NS_map_client::CLmapclient::setville(System::String^ ville)
{
	this->ville = ville;
}
void NS_map_client::CLmapclient::setidfac(System::String^ idfac)
{
	this->idfac = idfac;
}
void NS_map_client::CLmapclient::setidliv(System::String^ idliv)
{
	this->idliv = idliv;
}

int NS_map_client::CLmapclient::getId(void) { return this->id__c; }
System::String^ NS_map_client::CLmapclient::getNom(void) { return this->nom_c; }
System::String^ NS_map_client::CLmapclient::getPrenom(void) { return this->prenom_c; }
System::String^ NS_map_client::CLmapclient::getDateAnniv(void) { return this->date_anniv; }
System::String^ NS_map_client::CLmapclient::getDateFirstCommande(void) { return this->date_1_commande; }
