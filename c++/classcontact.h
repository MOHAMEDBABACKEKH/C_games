#pragma once
#include<iostream>
#include<string.h> 
using namespace std; 

class contact{
		protected :    	
			int Num_contact ;    
			string Nom_contact ;    
			int Age_contact ;    
			string Message_contact ; 
		public : 
			static int compteur ; 
		   contact(string n,int a);    
	     void setAge(int a);
	     void setMessage(string m);   
	     virtual void afficher() ;
		  contact(){} 
		  virtual ~contact(){
		  } 
		  };  

 
