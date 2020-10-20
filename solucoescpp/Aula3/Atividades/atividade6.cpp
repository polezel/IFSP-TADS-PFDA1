#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{

	setlocale(LC_ALL, "Portuguese");
	
float sala1, salaR;


	printf("Exercício 6\n\n\n");

	printf("Insira o valor do salário para receber reajuste..:");
	scanf("%f", &sala1);
	
	salaR = 1.25*sala1;
		
	printf("O novo salário é equivalente a R$ %.2f", salaR);
			
getch();
}
