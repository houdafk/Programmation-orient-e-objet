#include "CLServicePersonnel.h"

NS_service_personnel::CLServicePersonnel::CLServicePersonnel(void)
{
	this->oCad = gcnew NS_CLmain_bdd::CLmainbdd();
	
	
}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::selectionpersonnel(System::String^ dataTableName, System::String^ nom, System::String^ prenom)
{
	System::String^ chaine = "";
	System::String^ sql;
	if (nom!="") {
		chaine = chaine + "and nom_p='" + nom + "'";

	}
	if (prenom != "") {
		chaine = chaine + "and prenom_p='" + prenom + "'";

	}


	sql = "Select * from Personnel cross join adresse where adresse.id_adresse=Personnel.id_adresse " + chaine;
	return this->oCad->getRows(sql, dataTableName);
}

void NS_service_personnel::CLServicePersonnel::ajoutpersonneladd( System::String^ nomr, System::String^ numr, System::String^ numh, System::String^ etage, System::String^ ville)
{
	System::String^ sql;

	
	sql = "INSERT INTO [projetexiabdd].[dbo].[adresse] (num_rue,nom_rue,num_habitat,etage,Ville) VALUES('" + numr + "','" + nomr + "','" + numh + "','" + etage + "','" + ville + "')";


	this->oCad->actionRows(sql);


}
void NS_service_personnel::CLServicePersonnel::ajoutpersonnel(System::String^ nom, System::String^ prenom, System::String^ date,  System::String^ noms, System::String^ prenoms, System::String^ nomr, System::String^ ville, System::String^ numr)
{
	System::String^ sql;

	if (noms != "" && prenoms != "") {

		sql = "INSERT INTO [projetexiabdd].[dbo].[Personnel] (nom_p,prenom_p,date_embauche,id_adresse,id_superieur) VALUES('" + nom + "','" + prenom + "','" + date + "',(select id_adresse from adresse where nom_rue='" + nomr + "' and num_rue='" + numr + "'and Ville='" + ville + "'),(select id_P from personnel where nom_p = '" + noms + "' and prenom_p = '" + prenoms + "'));";
	}
	else {
		sql = "INSERT INTO [projetexiabdd].[dbo].[Personnel] (nom_p,prenom_p,date_embauche,id_adresse) VALUES('" + nom + "','" + prenom + "','" + date + "',(select id_adresse from adresse where nom_rue='" + nomr + "' and num_rue='" + numr + "'and Ville='" + ville + "'))"
			;
	}

	this->oCad->actionRows(sql);


}
void NS_service_personnel::CLServicePersonnel::updatepersonnel(System::String^ nom, System::String^ prenom,System::String^ dateembauch, System::String^ nom2, System::String^ prenom2, System::String^ dateembauch2) {
	System::String^ sql;




	sql = "UPDATE[projetexiabdd].[dbo].[Personnel] set nom_p = '" + nom + "', prenom_p = '" + prenom + "', date_embauche = '" + dateembauch +  "'where nom_p='"+nom2+"' and prenom_p='"+prenom2+"'and date_embauche='"+dateembauch2+"'";

	this->oCad->actionRows(sql);

}
void NS_service_personnel::CLServicePersonnel::updatepersonnelsup(System::String^ nom, System::String^ prenom , System::String^ nom2, System::String^ prenom2) {
	System::String^ sql;




	sql = "UPDATE[projetexiabdd].[dbo].[Personnel] set id_superieur =( select id_P from Personnel where nom_p='" + nom + "' and prenom_p = '" + prenom + "')"+ " where nom_p='" + nom2 + "' and prenom_p='" + prenom2 + "'";

	this->oCad->actionRows(sql);

}
void NS_service_personnel::CLServicePersonnel::deleteadressekey(System::String^ nom, System::String^ prenom){

	System::String^ sql;


	sql = "UPDATE[projetexiabdd].[dbo].[Personnel] set id_superieur = NULL where id_superieur = (select id_P from Personnel where nom_p='" + nom + "' and prenom_p='" + prenom + "')";

	this->oCad->actionRows(sql);

}

void NS_service_personnel::CLServicePersonnel::deletepersonne(System::String^ nom, System::String^ prenom) {

	System::String^ sql;


	sql = "Delete [projetexiabdd].[dbo].[Personnel] where nom_p='" + nom + "' and prenom_p='" + prenom + "'";

	this->oCad->actionRows(sql);

}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::selectionarticle(System::String^ dataTableName)
{
	
	System::String^ sql;
	


	sql = "Select * from Article";
	return this->oCad->getRows(sql, dataTableName);
}
void NS_service_personnel::CLServicePersonnel::ajoutstock(System::String^ ref, System::String^ designation, System::String^ couleur, System::String^ nature, System::String^ prix_achat, System::String^ prixht, System::String^ tva, System::String^ qtt, System::String^ seuil)
{
	System::String^ sql;


	sql = "INSERT INTO [projetexiabdd].[dbo].[article] (ref_a,designation,couleur,prix_achat,nature_a,prixHT,TVA,qtt_stock,seuil_reap) VALUES('" + ref + "','" + designation + "','" + couleur + "','" + prix_achat + "','" + nature + "','" + prixht+ "','" +tva + "','"  + qtt+ "','"  +seuil +"')";


	this->oCad->actionRows(sql);


}
void NS_service_personnel::CLServicePersonnel::modifstock(System::String^ ref, System::String^ designation, System::String^ couleur, System::String^ nature, System::String^ prix_achat, System::String^ prixht, System::String^ tva, System::String^ qtt, System::String^ seuil, System::String^ a, System::String^ b, System::String^ c, System::String^ d, System::String^ ee, System::String^ f, System::String^ g, System::String^ h, System::String^ i) {
	System::String^ sql;




	sql = "UPDATE[projetexiabdd].[dbo].[article] set ref_a='"+ref+" ',designation='"+designation+"',couleur='"+couleur+"',nature_a='"+nature+"',prix_achat='"+prix_achat+"',prixHT='"+prixht+"',TVA='"+tva+"',qtt_stock='"+qtt+"',seuil_reap='"+seuil+"' where ref_a='" + a + "' and designation='" + b + "' and couleur='" + c + "' and nature_a='" + d + "' and prix_achat='" + ee + "' and prixHT='" + f + "' and TVA='" + g + "' and qtt_stock='" + h + "' and seuil_reap='" + i + "' ";

	this->oCad->actionRows(sql);

}
void NS_service_personnel::CLServicePersonnel::supstock(System::String^ a, System::String^ b, System::String^ c, System::String^ d, System::String^ ee, System::String^ f, System::String^ g, System::String^ h, System::String^ i) {
	System::String^ sql;




	sql = "DELETE [projetexiabdd].[dbo].[article] where ref_a='" + a + "' and designation='" + b + "' and couleur='" + c + "' and nature_a='" + d + "' and prix_achat='" + ee + "' and prixHT='" + f + "' and TVA='" + g + "' and qtt_stock='" + h + "' and seuil_reap='" + i + "' ";

	this->oCad->actionRows(sql);

}
void NS_service_personnel::CLServicePersonnel::ajoutcommande(System::String^ nom, System::String^ prenom, System::String^ dateliv, System::String^ dateemi, System::String^ reference)
{
	System::String^ sql;


	sql = "INSERT INTO [projetexiabdd].[dbo].[commande] ([reference], [date_emission], [date_livraison_prevue], [id__c]) VALUES('" + reference + "','" + dateemi + "','" + dateliv +"',(select id__c from client where nom_c='"+nom+"' and prenom_c='"+prenom+ "'))";


	this->oCad->actionRows(sql);


}
void NS_service_personnel::CLServicePersonnel::ajoutarticlecommande(System::String^ refa, System::String^ reference, System::String^ qtt )
{
	System::String^ sql;


	sql = "INSERT INTO [projetexiabdd].[dbo].[comarticle] ([id_article], [id_commande], [qtt_article]) VALUES((select id_article from article where ref_a='" + refa+ "'),(select id_commande from commande where reference='" +reference+ "'),'" + qtt+ "')";


	this->oCad->actionRows(sql);


}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::selectionpayement(System::String^ dataTableName)
{

	System::String^ sql;



	sql = "Select * from Tranche";
	return this->oCad->getRows(sql, dataTableName);
}
void NS_service_personnel::CLServicePersonnel::ajoutmoney(System::String^ nom, System::String^ prenom, System::String^ datemoney, System::String^ numtranche, System::String^ refcom, System::String^ moyenmoney, System::String^ somme)
{
	System::String^ sql;


	sql = "INSERT INTO [projetexiabdd].[dbo].[Tranche] ([date_paiement],[moyen_paiement],[montant],[num_tranche],[id__c],[id_commande]) VALUES('"+datemoney+"','"+moyenmoney+"','"+somme+"','"+numtranche+"',(select id__c from client where nom_c='"+nom+"' and prenom_c='"+prenom+"'),(select id_commande from commande where reference='"+refcom+"'))";


	this->oCad->actionRows(sql);


}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::selectionnercommande(System::String^ dataTableName)
{

	System::String^ sql;



	sql = "select nom_c, prenom_c, idf as Num_Commande, SUM(montant)/2 as Prix_total from(select * from(select ida as idf, qtt_article as Quantite, date_emission, date_livraison_prevue, id__c as idc from(select id_commande as ida, id_commande, qtt_article from comarticle) natural join commande on commande.id_commande = ida) natural join client on client.id__c = idc) natural join Tranche on Tranche.id_commande = idf group by nom_c, prenom_c, idf having SUM(montant) > 0";
	return this->oCad->getRows(sql, dataTableName);
}
void NS_service_personnel::CLServicePersonnel::deletecommande1(System::String^ refcom) {
	System::String^ sql;




	sql = "delete from comarticle where id_commande = (select id_commande from commande where reference = '"+refcom+"')";

	this->oCad->actionRows(sql);

}
void NS_service_personnel::CLServicePersonnel::deletecommande2(System::String^ refcom) {
	System::String^ sql;




	sql = "delete from Tranche where id_commande=(select id_commande from commande where reference = '"+refcom+"');";

	this->oCad->actionRows(sql);

}
void NS_service_personnel::CLServicePersonnel::deletecommande3(System::String^ refcom) {
	System::String^ sql;




	sql = "delete from commande where id_commande = (select id_commande from commande where reference = '"+refcom+"');";

	this->oCad->actionRows(sql);

}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::articlemoinsvendu(System::String^ dataTableName)
{

	System::String^ sql;



	sql = "select SUM(qtt_article) as Quantite,designation from (select id_article as ida,qtt_article from comarticle) natural join article on ida = article.id_article group by designation order by Quantite asc";
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::articleplusvendu(System::String^ dataTableName)
{

	System::String^ sql;



	sql = " select SUM(qtt_article) as Quantite,designation from (select id_article as ida,qtt_article from comarticle) natural join article on ida = article.id_article group by designation order by Quantite desc";
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_service_personnel::CLServicePersonnel::totalachat(System::String^ dataTableName)
{

	System::String^ sql;



	sql = " (select nom_c as Nom,prenom_c as Prenom,SUM(montant) as Prix_total from (select * from (select ida as idf,qtt_article as Quantite,date_emission,date_livraison_prevue,id__c as idc from (select id_commande as ida,id_commande,qtt_article from comarticle) natural join commande on commande.id_commande = ida ) natural join client on client.id__c=id__c) natural join Tranche on Tranche.id_commande=idf group by nom_c,prenom_c having SUM(montant)>0)";
	return this->oCad->getRows(sql, dataTableName);
}
