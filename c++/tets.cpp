#include<string.h>
#include<iostream> 
using namespace std; 
class A{
	public:
		A();
		~A();
};
A::A(){
	cout<<"1";
	
}

A::~A(){
	cout<<"2";
}
 main() 
{ 
int *P=new int (10);
cout<<*P;
}
