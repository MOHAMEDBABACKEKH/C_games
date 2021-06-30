#include<stdio.h>
int pgcd(int a,int b){
	int c;
	while((c=a%b)!=0){
		a=b;
		b=c;
	}
	return b;
} 
main()
{  
int a,b;
printf("donner deux nombres ");
scanf("%d  %d",&a,&b);
//if(a>b){pgcd(a,b)=pgcd(a-b,b);}
printf("%d",pgcd(a,b));}  






