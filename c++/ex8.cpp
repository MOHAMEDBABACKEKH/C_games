#include<iostream> 
#include<cmath>
#include"ex4.cpp" 
using namespace std;
// class point{ 
// private :
// 		float x;float y;
// public  :
// 	    float getx(){return x;} 
//	 
//	float getY(){
//	 return y;} 
//	 void setX(float a){ x=a; 
//	 }  
//	 void setY(float b){
//	 	y=b;}  
//	 	void initalise(float a,float b){
//	 		x=a;y=b; } 
//	 void deplacer(float dx,float dy){
//	 	x=x+dx;
//	 	y=y+dy;
//	 }		
//	 void affiche(){
//	 	cout<<"("<<x<<","<<y<<")"<<endl;
//	 }};  
	 class segment:public point{ 
	       private :
	             point P1,P2;
	       public : 
	 void setP1(float e,float r){ P1.setX(e);P1.setY(r);} 
	 void setP2(float e,float r){ P2.setX(e);P2.setY(r);} 
	 float longeur(){return sqrt((P1.getx()-P2.getx())*(P1.getx()-P2.getx()) +(P1.getY()-P2.getY())*(P1.getY()-P2.getY()));}  
	  bool appartient(point P){float d,D;
	  d=sqrt((P1.getx()-P.getx())*(P1.getx()-P.getx()) +(P1.getY()-P.getY())*(P1.getY()-P.getY())); 	
	  D=sqrt((P2.getx()-P.getx())*(P.getx()-P.getx()) +(P2.getY()-P.getY())*(P2.getY()-P.getY())); 
	  if((D+d)==longeur()) return true ;
	  else return false;
	 } 
	  void affiche(){ 
	  cout<<"segment[";P1.affiche();cout<<",";P2.affiche();cout<<"]"<<endl;
//	  P1.affiche();
//	  P2.affiche();
//	  cout<<"]";
	  } 
	segment(point p,point P){ 
//	P1(P1);P2(P2);   
P1=P;P2=p;
} 
	};
//	S; 
main(){
     segment() S;
	 point P_1,P_2;
	 P_1.setX(7);
	 P_1.setY(8);
	 P_2.setX(7);
	 P_2.setY(8);
	 S.setP1(4,5);
	 S.setP2(7,8);
	 //S.affich(); 
	 segment S1(S);
	 S1.affiche(); 
	 //;
//	 cout<<S.appartient(P)<<endl; 
//	 cout<<S.longeur()<<endl;
	 }
	 
