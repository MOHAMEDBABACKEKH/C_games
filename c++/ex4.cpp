#include<iostream>
using namespace std; 

 class point{ 
 
 private :
        float x;float y; 
		 int static count;
 public  :
     float getx(){return x;}
     float getY(){return y;}
	 void setX(float a){x=a;}
	 void setY(float b){y=b;}
	 void initailise(float a,float b){x=a;y=b;}
	 void deplacedroite(float dx,float dy){x=x+dx;y=y+dy;}
	   point(){  
	     count++; 
	 //cout<<count<<endl;
	 } 
	 int affiche(){ return count;
	 //cout<<count<<endl;
	 }
	  void affichexy(){ 
	   
	 cout<<x<<" "<<y<<endl; 
	 }
     point(float x,float y){this->x=x;this->y=y;}
     point(const point&P){x=P.x;y=P.y;}
	
	// ~point(){}   
}; 
int point::count=0;
 main(){

 	 point p;
 	 p.setX(3); 
 	 p.setY(4); 
	 point P(p); 
 	 p.affichexy();
	 //P.affichexy();
	 //P.setX(1); 
	 //P.setY(1); 
	 p.affiche(); 
	 point p1,p2,p3,p5,p6,p7,p8,p0;
	 cout<<p.affiche();
// 	 p.affiche();
//	 P.affiche();
// 	 p.deplacer(1,10);
//     p.deplacer(p.getx(),p.getY()); 
//     P.deplacer(P.getx(),P.getY());
// 	 p.affiche(); 
//	 P.affiche();
 }
