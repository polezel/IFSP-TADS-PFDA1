#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	

int num, resto;


	printf("Digite um n�mero..:");
	scanf("%i", &num);
	
	resto = (num % 2);
	
	printf("O resto do n�mero dividido por 2 �: %i", resto);
	
	
	getch();


}




