#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{

	setlocale(LC_ALL, "Portuguese");
	
float sala1, salaR;


	printf("Exerc�cio 6\n\n\n");

	printf("Insira o valor do sal�rio para receber reajuste..:");
	scanf("%f", &sala1);
	
	salaR = 1.25*sala1;
		
	printf("O novo sal�rio � equivalente a R$ %.2f", salaR);
			
getch();
}
