#include<iostream>
using namespace std;
class liste{
	private: 
	int *T;
	int max1;
	public:  
	liste(){T=new int[max1=0];}
	liste(int n){ T=new int[max1=n];} 
	~liste(){ delete []T;}
	void saisie(){ 
	for(int i=0;i<max1;i++){cout <<"donner le nombre "<<i <<": "; cin>>T[i];} }  
	void affiche(){ for(int i=0;i<max1;i++){ cout<< *(T+i)<<endl;}} 
			liste(liste&a){max1=a.max1;T=a.T;}
			liste operator=(liste &a){max1=a.max1;T=a.T;}
};
main()
{
	liste a(3);
	liste b=a; 
	b.saisie();
	b.affiche();  
	cout<<"============="<<endl;
	liste c(b);
	c.affiche(); 
    cout<<"============="<<endl;
	liste q; 
	q=c;
	q.affiche();
}
