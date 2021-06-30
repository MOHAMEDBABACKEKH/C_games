#include<stdio.h>  
#include<iostream> 
using namespace std;
class  point {  
public: 
int n;
float x;
void Zero(point &a);
}; 
void zero(  point *a){
 a->n=0;
 a->x=0; 
 new double[200];
} 
void point::Zero(point &a){
	a.n=0;
	a.x=0;
} 
main()
{
	point Q;
	//Zero(Q);
	Q.Zero(Q);
	printf(" %d %.2f\n", Q.n,Q.x); 
	cout<<Q.n;
}
