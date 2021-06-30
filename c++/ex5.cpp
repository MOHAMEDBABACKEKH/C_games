#include<iostream> 
#include<cmath>
using namespace std; 
class Cercle{
	 private :  
	    float x,y,r;
	 public   : 
	    float getx(){return x; } 
 	    float getY(){return y;}  
	    float getr(){return r;}
	 	void setX(float a){x=a;}  
	    void setY(float b){y=b;}   
	 	void setr(float c){r=c;} 
	 	void initalise(float a,float b,float c){x=a;y=b;r=c;} 
		void affiche(){cout<<x<<endl;cout<<y<<endl; cout<<r<<endl;} 
	 	void setcenter(double a,double b){x+=a;y+=b;} 
	    double surface()const{ return M_PI*r*r;}	  
	    bool estinterieur(double a,double b)const{if(sqrt((a-x)*(a-x)+(b-y)*(b-y))<r) return true ;else false;} 
	    Cercle(){
		} 
		Cercle(double a,double b ,double c){this->x=a;this->y=b;this->r=c;
		}
}; 
main(){ 
Cercle C;
C.setX(2);
C.setr(1);
C.setY(3); 
//C.initalise(1,2,3);
//C.affiche(); 
//C.estinterieur(1,2);
//C.setcenter(3,4);
//C.affiche();
//cout<<C.surface()<<endl; 
//cout<<C.estinterieur(4,6)<<endl; 
//Cercle A(5,6,7);
//A.affiche(); 
Cercle B(C); 
B.affiche();
	
}
