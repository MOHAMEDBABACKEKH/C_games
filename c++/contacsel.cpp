//#include"contacsel.h" 
#include"conatct.cpp"  
#include<iostream>
using namespace std; 

contactsal::contactsal(string n,int a){ 
contact(n,a); 
bonContact=false;
}
bool contactsal::setBonContact(){return bonContact=true;} 

contactsal::contactsal(){} 

double contactsal::calculSalaire(double b){ 
salaire=b;
if(bonContact==true){
	return salaire*1.1;
} 
else return salaire;
} 

void contactsal::afficher(){
	contact::afficher();
    cout<<"Matricule :"<< matricule<<endl;
    cout<<"Salaire :"<<salaire<<endl;
    cout<<"Est un bon contact: "; 
    if(bonContact==true)cout<<"oui"<<endl;
    else cout<<" NON"<<endl;
} 
void contactsal::operator<<(contactsal&c){
 	c.afficher();
}
	   
void contactsal::setmatricule(int b){
	matricule=b;
}
