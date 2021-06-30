#include<iostream>
using namespace std;
 class complexe{
 	private:
 		double img,reel; 
    public : 
    double getreel()const{return reel;}
    void set_reel(double a){ reel=a;}
    void set_img(double b){ img=b;}
    double getimg()const{return img;}
    complexe(){img=0;reel=0;}
    complexe(double a,double b):img(a),reel(b){}  
    void affiche(){
    	cout<<"img= "<<img<<endl;
    	cout<<"reel= "<<reel<<endl;}
    	bool operator==(const complexe&){
    return((this->img==img)&&(this->reel==reel));}
        complexe& operator+=(const complexe&){
     	set_img(img+this->getimg());set_reel(reel+this->getreel());
     	return *this;} 
     	 complexe& operator-=(const complexe&){ 
     	 set_img(img-this->getimg());set_reel(reel-this->getreel());
     	return *this;} 
     	 complexe& operator*=(const complexe&){  
     	 set_img(img*this->getimg());set_reel(reel*this->getreel());
     	   return *this;} 
         complexe& operator/=(const complexe&){  
     	 set_img(img/this->getimg());set_reel(reel/this->getreel());
     	   return *this;}  
     	complexe operator+(const complexe& c) const{ 
		 return complexe(*this)+=c;}  
		 complexe operator-(const complexe& c) const{ 
		 return complexe(*this)-=c;}  
		 complexe operator*(const complexe& c) const{ 
		 return complexe(*this)*=c;}  
		 complexe operator/(const complexe& c) const{ 
		 return complexe(*this)/=c;} 
		 
         ~complexe(){}
 }; 
 ostream& operator<<(ostream& out ,const complexe& c){
 	out<<'('<< c.getreel()<<';'<<c.getimg()<<')';
 	return out; }
// 	complexe operator+(complexe c,float a){ c.set_reel(c.getreel()+a);} 
// 	complexe operator+(float a,complexe c){ c.set_reel(c.getreel()+a);}
//	complexe operator+(complexe a,complexe c){ c.set_reel(c.getreel()+a.getreel()); 
//	                                            c.set_img(c.getimg()+ a.getimg()); 
//												return c;}   	
 main(){ 
 complexe  defaut ,zero(0.0,0.0),un(1.0,0.0),i(0.0,1.0),j;
 un.affiche(); 
complexe troid(i+defaut);
cout<<troid<<endl;
 cout<<zero <<" ==? "<<defaut<<endl;
 if(zero==defaut) cout<<"oui"<<endl;else cout<<"non"<<endl;}
