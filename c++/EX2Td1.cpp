#include<iostream>
//#include<cmath>
using namespace std; 
class pileentier{  
private:
int max1;
int *adr;
int nelem; 
public: 
pileentier(){
adr=new int [max1=100];
 nelem=0;  }  
 pileentier(int n){
 adr=new int [max1=n];
 nelem=0;  } 
//~pileentier(){
//	delete []adr;}; 
void empiler(int n){
	if(nelem<max1)
	adr[nelem++]=n;} 
	int depiler(int &n){
		if(nelem>0)
		 n=adr[--nelem];}   
	bool plein(){
	  return (nelem==max1);}
void affiche(){
	for(int i=0;i<nelem;i++)
	cout<<"adr["<<i<<"]="<< adr[i]<<endl;} 
	 bool vide(){return (nelem==0);}  
	  void operator<(int n){this->empiler(n);} 
     int operator>(int&n){return this->depiler(n);} 
}; 
 //void operator<(pileentier &a,int n){a.empiler(n);} 
    //int operator>(pileentier &a,int &n){return a.depiler(n);}
main(){ 
pileentier a , b;
a.empiler(4);
b.empiler(0); 
b.affiche();
pileentier *ad=&a;
//c.affiche(); 
ad->empiler(5); 
*ad<6;
*ad<7;
int n;
*ad>n;
ad->affiche();
cout<<n<<endl;
	
}
