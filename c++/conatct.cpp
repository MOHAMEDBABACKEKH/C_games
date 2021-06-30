#include"classcontact.h" 
#include"contacsel.h"
#include<iostream> 
#include<string.h>
using namespace std;

contact::contact(string n,int a){  
	this->Num_contact=a;
	this->Nom_contact=n; 
	this->Message_contact="Pas de message ..."; 
}  

 void contact::setAge(int a){
	if(a>=18&&a<=60)Age_contact=a;
	else cout<<"age not accepted"<<endl;
}
  
 void contact::setMessage(string m){ Message_contact=m;} 
 
 void contact::afficher(){
 	cout<<"Numéro  :"<<Num_contact<<endl;
 	cout<<"Nom     :"<<Nom_contact <<endl; 
 	cout<<"Age     :"<< Age_contact<<endl;
 	cout<<"Message :"<< Message_contact<<endl;	
 }  
  


  
 
