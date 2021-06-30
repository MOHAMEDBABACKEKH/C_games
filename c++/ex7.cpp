#include<iostream> 
#include<cmath>
#include"ex4.cpp"
using namespace std; 
// class point { 
//      private:
//           float x,y; 
//      public:  
//           float getx(){return x; } 
//	       float getY(){return y;}  
//	        void setX(float a){ x=a;}  
//	        void setY(float b){y=b;} 
// }; 
class rectangle{ 
	 private : 
	 point p; 
	 float L,l ;
	 public:
	  void setp(float e,float r){ p.setX(e);p.setY(r);} 
	  void setL(float a){ L=a;}  
	  void setl(float b){l=b;}
	  float getL(){return L; }
	  //float getP(){return p.getx(); }  
	  float getl(){return l;}   
	  float surface(){return l*L;}  
	  void affiche(){cout<<L<<endl;cout<<l<<endl;p.affiche();}   
	  float diagonal(){return sqrt(l*l+L*L);} 
	  float perimetre(){ return 2*(l+L);} 
	  void deubledim(){l*=2;L*=2;} 
	  void deplacer( float a ,float b){p.setX(p.getx()+a);p.setY(p.getY()+b);} 
	  rectangle(){};
	  rectangle(point p1){ p.setX(p1.getx());p.setY(p1.getY());}
	  rectangle(float L1,float L2 ){L=L1;l=L2;} 
	  rectangle(float L1,float L2,point P1){ L=L1;l=L2; p.setX(P1.getx());p.setY(P1.getY());} };
				
main(){ 
rectangle A; 
point P4;
P4.setX(2);
P4.setY(2);
A.setl(2);
A.setL(4);
A.setp(3,5);
//A.affiche(); 
rectangle T(A);
//T.affiche(); 
rectangle P1(A.getL(),A.getl(),P4); 
A.affiche();  
P1.affiche();


	 }
