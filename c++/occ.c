#include<stdio.h>
int main(){
    int i, n, k=0, t[10], x;
    printf("saisir la taille du tableau: ");
    scanf("%d",&n);
    printf("saisir les elements du tableau: \n");
    for(i=0;i<n;i++){
        printf("t[%d] = ",i);
        scanf("%d" ,&t[i]);
    }
    k=0;
    for(i=0;i<n;i++){
    	int j=0; k=0;
        while(j<n){
            if(t[i]==t[j]){
                k++;
               
        } j++; }  
    printf("l'element t[%d] apparait %d fois!\n",i,k);
    }
    return 0;
}
