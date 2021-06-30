#pragma once
//#include"classcontact.h"

class contactsal:public contact{ 
private: 
		int matricule;
		double salaire;
		bool bonContact;
public:
    contactsal(string n,int a);
    bool setBonContact();
    double calculSalaire( double b); 
    void setmatricule(int b);
    contactsal(); 
    virtual void afficher() ;  
    void operator<<( contactsal&c);
}; 
