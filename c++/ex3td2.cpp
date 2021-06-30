#include<iostream> 
#include<string.h>
using namespace std;
 class chaine{ 
 	private :  
      int lenght;
      char *ch;
 	public: 
 	chaine(){ ch=new char[lenght=strlen(ch)];}  
 	chaine(char *text ){ ch=text;} 
 	chaine(chaine& CH){ 
	 lenght=CH.lenght;
	 ch=CH.ch;}      
	 void operator=(chaine *che){ 
	 che->lenght=lenght;
	 che->ch=ch; }
	bool operator==(chaine &che1){  
	 return(strcmp(ch,che1.ch));} 
	 void operator+(char c[]){ strcat(ch,c);} 
	 void affiche(){ cout<<ch<<endl;}
}; 
 main()
 { char f[]="mohamed",p[]="hello";
 	chaine c(f); 
	chaine c1(p);
	c1+f;
	chaine c3=c;
	c3.affiche();
	//c1.affiche();   
	cout<<c3.operator==(c1);	  
 }
