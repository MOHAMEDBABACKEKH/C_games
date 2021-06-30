#include<iostream>
#include<string.h> 
#include<vector>
using namespace std;
  class livre{
	protected: 
	    string title;
	    string auteur;
		int nombrede_pages;
		bool bestseller;
		public:
	 virtual double calculer_prix(int nombrede_pages){
				if(bestseller==true)return (nombrede_pages*0.3+50);
				else return (nombrede_pages*0.3);} 
			 livre(string a,string b,int c,bool d){ title=a;auteur=b;nombrede_pages=c;bestseller=d;}
		virtual	 ~livre(){} 
			void afficher(){
			 	cout<<"Titre : "<<title<<endl;
			 	cout<<"Auteur : "<<auteur<<endl;
			 	cout<<"Nombre de pages : "<<nombrede_pages<<endl;
			 	if(bestseller)cout<<"Bestseller :oui"<<endl;
			 	else cout<<"Bestseller: non"<<endl; }
				 };   
class Roman:public livre{
		protected:bool biographie;
		public:
			Roman(string a,string b,int c,bool d,bool e):livre(a,b,c,d){biographie=e;}
			virtual~Roman(){			}
		virtual void afficher(){
		livre::afficher();
				if(biographie)cout<<"Ce roman est une biographie "<<endl;
				else cout<<"Ce roman n'est pas une biographie "<<endl;  
				} }; 
class Beaulivre:public livre{
	public:
		Beaulivre(string a,string b,int c,bool d):livre(a,b,c,d){
		}
virtual	~Beaulivre(){}
		 virtual double calculer_prix(int nombrede_pages){ 
		 return livre::calculer_prix(nombrede_pages)+30;}};	
class polisier:public Roman{
		 public	:
		  polisier(string a,string b,int c,bool d,bool e):Roman(a,b,c,d,e){}
		virtual 	~polisier(){			 }
 virtual double calculer_prix(int nombrede_pages){ 
		         if(Roman::calculer_prix(nombrede_pages)-10) 
		           return Roman::calculer_prix(nombrede_pages)-10 ; 
		         else return 1;}};			
				

main(){ 
polisier l("Lechien des Basker ville"," A.C.Doyle",221 ,false,false),
         l1(" Le Parrain","A.Cuso ",367 ,true,false);
Roman    l2("Le baron perché "," I. Calvino",283 ,false,false),
         l3(" Mémoires de géronimo ","S.M. barrett",173 ,false,true);
Beaulivre l4(" Fleuves d'europe ","C. Osborne ",150 ,false);

l.afficher(); cout<<"prix :"<<l.calculer_prix(221)<<endl;cout<<"\n\n\n"; 
l1.afficher();cout<<"prix :"<<l1.calculer_prix(367)<<endl; cout<<"\n\n\n"; 
l2.afficher();cout<<"prix :"<<l2.calculer_prix(283)<<endl;cout<<"\n\n\n";
l3.afficher();cout<<"prix :"<<l3.calculer_prix(173)<<endl;cout<<"\n\n\n";
l4.afficher();cout<<"prix :"<<l4.calculer_prix(150)<<endl;
}


