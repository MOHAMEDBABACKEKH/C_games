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
		virtual	void afficher(){
			 	cout<<"Titre : "<<title<<endl;
			 	cout<<"Auteur : "<<auteur<<endl;
			 	cout<<"Nombre de pages : "<<nombrede_pages<<endl;
			 	if(bestseller)cout<<"Bestseller :oui"<<endl;
			 	else cout<<"Bestseller: non"<<endl; 
			 	cout<<"prix :"<<calculer_prix(nombrede_pages)<<endl;}
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
				cout<<"\n\n\n";} 
				}; 
class Beaulivre:public livre{
	public:
		Beaulivre(string a,string b,int c,bool d):livre(a,b,c,d){
		}
virtual	~Beaulivre(){}
		 virtual double calculer_prix(int nombrede_pages){	 
		 return livre::calculer_prix(nombrede_pages)+30;}
		 };	
class polisier:public Roman{
		 public	:
		  polisier(string a,string b,int c,bool d,bool e):Roman(a,b,c,d,e){}
		virtual 	~polisier(){			 }
 virtual double calculer_prix(int nombrede_pages){ 
		         if(Roman::calculer_prix(nombrede_pages)-10) 
		           return Roman::calculer_prix(nombrede_pages)-10 ; 
		         else return 1;}};			
				
class Librairie {
			 	private: 
					      vector<livre*>Livres; 
			 	public: 
		void ajouter_livres(livre *l){	
	 		Livres.push_back(l);} 
	    void afficher()const{
	    	for(int i=0;i<Livres.size();++i)
	    	Livres[i]->afficher();}
			void vider_stock(){
				for(int i=0;i<Livres.size();++i)
				delete Livres[i];} };  
main(){
           
	
	
	Librairie l;
	l.ajouter_livres(new polisier("Lechien des Basker ville"," A.C.Doyle",221 ,false,false));
	l.ajouter_livres(new polisier(" Le Parrain","A.Cuso ",367 ,true,false));
	l.ajouter_livres(new Roman("Le baron perché "," I. Calvino",283 ,false,false));
	l.ajouter_livres(new Roman(" Mémoires de géronimo ","S.M. barrett",173 ,false,true));
	l.ajouter_livres(new Beaulivre(" Fleuves d'europe ","C. Osborne ",150 ,false));
	l.afficher(); 
	//l.vider_stock();
	l.afficher();
}
