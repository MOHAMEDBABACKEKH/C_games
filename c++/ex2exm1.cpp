#include<iostream>
using namespace std;
class A{
	public:
		A(int v=0){x=v;}
		A(const A&	a){x=a.x+2;
		cout<<"\t copie\n";}
		const A& operator=(const A& a){
			x=a.x-1;cout<<"\t affectation\n";
			return *this;}
			int x;
};
ostream& operator<<(ostream &os,const A& a){
	return os<<a.x;}
A F1(A u){++u.x; return u;}
const A& F2(A& u){++u.x;return u;}
void F3(A *a){++a->x;}
void F4(A *a){A *z=a;++z->x;}
void F5( A *a ){A z=*a;	++z.x;}
void F6( A *a){A& z=*a;++z.x;}
void F7(A*a){A*&z=a;++z->x;}
 A F8( A & a ){++a.x;	return a;}
A& F9( A* p){++p->x;return *p;}
main(){
	A a; A u(a)/*copie*/;A v=a/*copie*/; cout<<"0:"<<u<<v<<endl;
	u.x=0;v=F1(u);cout<<"1:"<<u<<v<<endl;
	u.x=0;v=F2(u);cout<<"2: "<<u<<v<<endl;
	A *p=&a;
	a.x=0;F3(p);cout<<"3:"<<a<<endl;
	a.x=0;F4(p);cout<<"4:"<<a<<endl;
	a.x=0;F5(p);cout<<"5:"<<a<<endl;
	a.x=0;F6(p);cout<<"6:"<<a<<endl;
	a.x=0;F7(p);cout<<"7:"<<a<<endl;
	A& r=a;
    a.x=0;A b=F8(r);cout<<"8a:"<<a<<b<<endl;
	a.x=0;b=F9(p);cout<<"9a:"<<a<<b<<endl;
	a.x=0;A c;c=F8(r);cout<<"8b:"<<a<<c<<endl;
	a.x=0;A &d=F9(p);cout<<"9b:"<<a<<d<<endl;
	 
}














