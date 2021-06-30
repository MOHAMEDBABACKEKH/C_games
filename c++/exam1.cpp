#include<iostream>
using namespace std;
class patient{
	private :
		double poids;
		double taille;
	public:
	void set_poid(double p){poids=p;}	
	void set_taille(double t){taille=t;}
   double get_poid()const{return poids;}
   double get_taille()const{return taille;}
   patient(double a,double b){
   if(a>=0 &&b>=0){
   poids=a;taille=b;}
   else {
   	poids=0;
   	taille=0;}}
   	void affiche(){
   		cout<<"Patient: "<<poids<<" KG pour "<<taille<<" (m)."<<endl;
	   }
	double Imc(double piods,double taille){
		if(taille)
		return poids/(taille*taille);
		else return 0.0;}
   patient operator=(const patient& c) const{ 
          patient(*this)=c;
		 return *this;}
//  patient operator++(const patient& c) const{ 
//          patient(*this)=c;
//		 return patient(*this);}
};

ostream& operator<<(ostream &out , patient &p){
 	//out<<'('<< p.get_poid()<<';'<<p.get_taille()<<')';
 	return out<<p.Imc(p.get_poid(),p.get_taille()); }

main(){

	double p,m;
		cout<<"enter un poids (kg) et un taille (m) : ";
		cin>>p;
		cin>>m;
		patient P(p,m);
		P.affiche();
		cout<<P;
	    cout<<"IMC "<<P.Imc(p,m)<<endl;
	    	
		
}
