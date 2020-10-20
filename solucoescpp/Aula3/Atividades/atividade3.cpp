#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");

int base, expo, cont, poten;

	printf("Exercício 3\n\n\n");
		
	printf("Insira uma base inteira desejada..:");
	scanf("%i", &base);	
	printf("Insira um expoente não negativo desejado..:");
	scanf("%i", &expo);
	
	cont = expo; 
	poten=1; 
		
	while (cont != 0) 
	{
   		poten = (poten * base);
   	 	cont = (cont - 1);
  	}

	printf("\n\n\n\nO valor de %i elevado a %i é igual a: %i", base, expo, poten);
	
getch();

}
