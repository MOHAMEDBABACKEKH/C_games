#include<iostream>
using namespace std;
class C{ 
public:
	  void affiche(void){
		cout<<"claas C";
	}
}; 
class D:public C{
	public: 
	void affiche(){
	cout<<" claas D";}
		//C::affiche();
//void affiche(int i){ 
//cout <<"this is d "<<i<<endl;}
//void affiche(const char *a){cout<< a<<endl;


};
main(){
//D d; d.affiche();  
C c;
D d;
C *p=&c;
p->affiche();
p=&d;
p->affiche();

} 

