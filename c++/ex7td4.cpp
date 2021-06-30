#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
//{struct date{int j;char mois[10];int annee;
//	};
//	struct employe{char nom[15],prenom[15];
//	struct date date_anniversaire ,date_embauche;} emp[1];
//	int i;
FILE*Fb=NULL;
char nom[7], *a;
printf("donner le nom de fichier ");
scanf("%s",nom);
strcat(nom,".dat");
Fb=fopen(nom,"wb");
	FILE*fichier=NULL;fichier=fopen("fichier.txt","w");char c,s;
	if(fichier ==NULL)printf("le fichier n'exixte pas ");
	else
	 	fputs("nom\t\tprenom\t\tage\n",fichier);
	 	fputs("alaoui\t\tali\t\t23\n",fichier);
	 	fputs("fahmi\t\tnaima\t\t20\n",fichier);
		fputs("hasni\t\thassan\t\t35\n",fichier);
		fclose(fichier);
		fichier=fopen("fichier.txt","r");
		FILE*copie=NULL;
		copie=fopen("copie.txt","w");
		if(copie==NULL)printf("le fichier n'exite pas ");
		else while(!feof(fichier)){
         c=fgetc(fichier);
			fprintf(copie,"%s",fgetc(fichier));
			fwrite(&c,sizeof(char),1,Fb);

		}

}
