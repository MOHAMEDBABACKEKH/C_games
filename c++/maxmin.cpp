#include <stdio.h>  
#include<stdlib.h> 
#define N 100
void maxmin( int t[],int n,int *admax,int*admin){
	int i;
	*admax=t[0];
	*admin=t[0];
	for(i=0;i<n;i++)
if (t[i]>*admax)
*admax=t[i];
if(t[i]<*admin)
*admin=t[i];
}
int main(){
	int n,max,min,t[N];
	int i;
	printf("donner la taille de tableau:\n");
	scanf("%d",&n); 
	printf("donner les elements de tableau:");
	for(i=0;i<n;i++){
	scanf("%d",&t[i]);}
maxmin(t,n,&max,&min);
printf("la valeur maximal est :%d et l valeur minimal est :%d",max,min)	;
  return 0;
}
 
