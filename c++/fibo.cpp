#include<stdio.h> 
#include<time.h>
 unsigned long long  int fibo(unsigned long long int  n){
	if(n==0) return 0;
	else if(n==1)return 1;
	else return fibo(n-1)+fibo(n-2); 
} 
main()
{int i=2;
//	printf("%lu\n",fibo(12));
	//	printf("%lu \n",fibo(30));	
//		printf("%lu\n",fibo(20));
//				printf("%lu\n",fibo(50)); 
//					printf("%lu\n",fibo(47)); 
//					while(i<50) {
//						printf("%llu\n" ,fibo(i)); printf("%d\n",i); 
//						i++;
//					} 
double temps_initial,temps_final,temps_cpu;
temps_initial= clock();
printf("%lu\n",fibo(50));
temps_final = clock();
temps_cpu = (temps_final - temps_initial) / CLOCKS_PER_SEC; 
printf("temps d'execution est %2.8lf\n ",temps_cpu );

}
