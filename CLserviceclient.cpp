#include "CLserviceclient.h"

NS_service_client::CLserviceclient::CLserviceclient(void)
{
	this->oCad = gcnew NS_CLmain_bdd::CLmainbdd();
	this->oMappTB = gcnew NS_map_client::CLmapclient();
}
System::Data::DataSet^ NS_service_client::CLserviceclient::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

 	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_service_client::CLserviceclient::selectionnerToutesLesPersonnesTest(System::String^ dataTableName, System::String^ nom, System::String^ prenom, System::String^ datea, System::String^ datec, System::String^ nomr, System::String^ numr, System::String^ numh, System::String^ etage, System::String^ ville, System::String^ idfac, System::String^ idliv)
{
	System::String^ chaine = "";
	System::String^ sql;
	if (nom != "" || prenom != "" || datea != "" || datec != "") {
		chaine = "";
	}
	if (nom != "") {
		chaine = chaine + "and nom_c='" + nom + "'";
	}
	if (prenom != "") {
		
		chaine = chaine + "  and prenom_c='" + prenom + "'";
		
	
	
	}
	if (datea != "") {
			chaine = chaine + " and date_anniv='" + datea + "'"
				;
		
	}
	if (datec != "") {
	
			chaine = chaine + " and date_1_commande='" + datec + "'"
				;
		
	}
	if (nomr!=""){
		chaine = chaine + "and nom_rue='" + nomr + "'";
	}
	if (numr!= "") {
		chaine = chaine + "and num_rue='" + numr + "'";
	}
	if (numh!= "") {
		chaine = chaine + "and num_habitat='" + numh + "'";
	}
	if (etage!= "") {
		chaine = chaine + "and etage='" + etage + "'";
	}
	if (ville!= "") {
		chaine = chaine + "and Ville='" + ville + "'";
	}
	if (idfac!= "") {
		chaine = chaine + idfac ;
	}

	if (idliv!= "") {
		chaine = chaine + idliv;
	}



	sql = "select nom_c as Nom,prenom_c as Prenom,num_rue as Num_Rue,nom_rue as Nom_Rue,num_habitat as Num_Habitat,etage as Etage,Ville,date_1_commande as Première_Date_de_commande,date_anniv as Date_de_naissance, id_facturation,id_livraison from adresse cross join client  where (id__c = id_facturation or id__c=id_livraison ) " + chaine;
	return this->oCad->getRows(sql, dataTableName);
}

void NS_service_client::CLserviceclient::ajouterUnePersonne(System::String^ nom_c, System::String^ prenom_c ,System::String^ datea, System::String^ datec, System::String^ nomr, System::String^ numr, System::String^ numh, System::String^ etage, System::String^ ville, System::String^ idfac, System::String^ idliv)
{
	System::String^ sql;

	this->oMappTB->setNom(nom_c);
	this->oMappTB->setPrenom(prenom_c);
	this->oMappTB->setDateAnniv(datea);
	this->oMappTB->setnomr(nomr);
	this->oMappTB->setnumr(numr);
	this->oMappTB->setnumh(numh);
	this->oMappTB->setetage(etage);
	this->oMappTB->setville(ville);
	this->oMappTB->setidfac(idfac);
	this->oMappTB->setidliv(idliv);
	this->oMappTB->setDateFirstCommande(datec);
	sql = this->oMappTB->Insert();


	this->oCad->actionRows(sql);
	

}
void NS_service_client::CLserviceclient::ajouterUnePersonnetest(System::String^ nom_c, System::String^ prenom_c, System::String^ datea, System::String^ datec, System::String^ nomr, System::String^ numr, System::String^ numh, System::String^ etage, System::String^ ville, System::String^ idfac, System::String^ idliv)
{
	System::String^ sql;

	this->oMappTB->setNom(nom_c);
	this->oMappTB->setPrenom(prenom_c);
	this->oMappTB->setDateAnniv(datea);
	this->oMappTB->setnomr(nomr);
	this->oMappTB->setnumr(numr);
	this->oMappTB->setnumh(numh);
	this->oMappTB->setetage(etage);
	this->oMappTB->setville(ville);
	this->oMappTB->setidfac(idfac);
	this->oMappTB->setidliv(idliv);
	this->oMappTB->setDateFirstCommande(datec);
	sql = this->oMappTB->Inserttest();


	this->oCad->actionRows(sql);


}

void NS_service_client::CLserviceclient::updatepersonne(System::String^ nom, System::String^ prenom , System::String^datea, System::String^ datec, System::String^ nom2, System::String^ prenom2, System::String^ datea2, System::String^ datec2){
	System::String^ sql;
	


	
	sql = "UPDATE[projetexiabdd].[dbo].[client] set nom_c = '" + nom + "', prenom_c = '" + prenom + "', date_1_commande = '" + datec + "', date_anniv = '" + datea + "' where nom_c='"+nom2+"'and prenom_c='"+prenom2+"'and date_1_commande='"+datec2+"'and date_anniv='"+datea2+"'";

	this->oCad->actionRows(sql);

}
void NS_service_client::CLserviceclient::updateadresse(System::String^ numr, System::String^ nomr , System::String^ numh, System::String^ etage, System::String^ ville, System::String^ idf, System::String^ idl) {
	System::String^ sql;
	


	sql = "UPDATE[projetexiabdd].[dbo].[adresse] set num_rue = '" + numr+ "', nom_rue= '" + nomr+ "', num_habitat= '" + numh+ "', etage = '" + etage + "', Ville='"+ville+"' where id_facturation="+idf+" or id_livraison="+idl;

	this->oCad->actionRows(sql);

}
void NS_service_client::CLserviceclient::deletepersonne(System::String^ nom, System::String^ prenom) {
	System::String^ sql;



	sql = "DELETE [projetexiabdd].[dbo].[client] where nom_c='"+nom+"' and prenom_c='"+prenom+"'";

	this->oCad->actionRows(sql);

}
void NS_service_client::CLserviceclient::deleteadresse(System::String^ idf, System::String^ idl) {
	System::String^ sql;



	sql = "DELETE [projetexiabdd].[dbo].[adresse] where id_facturation=" + idf + " or id_livraison=" + idl ;

	this->oCad->actionRows(sql);

}