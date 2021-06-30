#include<iostream> 
#include<cmath>
using namespace std; 
class point3D{
	 private :  
	 float x,y,z;
	 public: 
	  float getx(){return x; } 
	  float getY(){return y;}  
	  float getz(){return z;}
	  void setX(float a){ x=a;}  
	  void setY(float b){y=b;}   
	  void setz(float c){z=c;} 
	  void affiche(){cout<<x<<endl;cout<<y<<endl; cout<<z<<endl;} 
	  bool compare(point3D p){if(p.x==x&&p.y==y&&p.z==z)return true ;else return false;}   
	  bool compare(point3D p ,point3D c){if(p.getx()==c.getx()&&p.getY()==c.getY()&&p.getz()==c.getz()) return true ;else return false;} 
	  point3D(double a,double b ,double c){this->x=a;this->y=b;this->z=c;}
	  point3D(){
	  }
	  }; 
		 
main()
		{  
		 point3D A,B,p;
		 p.setX(1);
		 p.setY(2);
		 p.setz(3); 
		 p.affiche(); 
		 A.setX(4);
		 A.setY(5);
		 A.setz(6); 
		 A.affiche(); 
//		 B.setX(1);
//		 B.setY(2);
//		 B.setz(3); 
//		 B.affiche(); 
//		 cout<<A.compare(A)<<endl; 
//	     cout<<p.compare(p,p)<<endl;
		 point3D P(p);
		 P.affiche();
		 }
