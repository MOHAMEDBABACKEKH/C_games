#include<stdio.h> 
 
/* calcul de la somme des diviseurs du parametre nombre */
int somme_div ( int nombre );
 
/* calcul de l'ami du parametre nombre */
int amis ( int nombre );
 
int main ( )
{
	int nombre, limite, nombre_ami;
 
	printf("Limite : "); scanf("%d", &limite);
 
	for (nombre=1; nombre<=limite; nombre++)
	{
		nombre_ami = amis(nombre);
		if (nombre_ami != nombre)
		{
			printf("%d et %d sont amis\n", nombre, nombre_ami);
		}
	}
 
	return 0;
}
 
int somme_div ( int nombre )
{
	int i, somme = 0;
	for (i=1; i<=nombre/2; i++)
	{
		if (nombre % i == 0)
		{
			somme = somme + i;
		}
	}
	return somme;
}
 
int amis ( int nombre )
{
	int unAmis;
	unAmis = somme_div(nombre);
	if (somme_div(unAmis) == nombre)
	{
		return unAmis;
	}
	else
	{
		return nombre;
	}
}
