#include<iostream>
#include<string.h>
using namespace std;
class Vehicule{   
protected :     
char *Matricule;      
char *Marque;   
int AnneeModele ;     
float PrixHT;   
public :    
 Vehicule(){} 
Vehicule(char *a,char *b,int d, float c):Matricule(a),Marque(b),AnneeModele(d),PrixHT(c){}
Vehicule(const Vehicule &v){AnneeModele=v.AnneeModele;PrixHT=v.PrixHT;Matricule=v.Matricule;Marque=v.Marque;}    
virtual~Vehicule(){};     
virtual void afficher(){
	cout<<"Matricule: "<<Matricule<<endl;
	cout<<"Marque: "<<Marque<<endl;
	cout<<"AnneeModele: "<<AnneeModele<<endl;
	cout<<"PrixHT: "<<PrixHT<<endl;}      
void setPrixHT(float p){PrixHT=p;}   
float getPrixTTC(){
	return PrixHT*1.2;}        
};  
class Voiture:public Vehicule{ 
private: 
 int static count;
     int nbrePlace; 
public:  
 Voiture(){count++;} 
		int nombredeVoiture(){return count;}
Voiture(char *a,char *b,int d, float c,int e):Vehicule(a,b,d,c),nbrePlace(e){ count++;}
Voiture(const Voiture &v):Vehicule(v){ nbrePlace=v.nbrePlace; count++;} 
 virtual void afficher(){ 
	Vehicule::afficher();
	cout<<"nbrePlace : "<<nbrePlace<<endl;}  
	~Voiture(){}	
}; 
int Voiture::count=0;
main(){ 
char m[]="1234-A-50";
char M[]="RENAULT";
Voiture v1(m,M,2007,4,4); 
Voiture V,V2;
v1.afficher(); 
cout<<"le nombre des voitures: "<<v1.nombredeVoiture();	
}
