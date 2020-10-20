#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{

	setlocale(LC_ALL, "Portuguese");
	
float salab, salliq1, salliq2, IR, prev;

	printf("Exercício 5\n\n\n");
	
	printf("Insira o valor do salário bruto..:");
	scanf("%f", &salab);
	
	prev = 8.5*(salab/100);
	salliq1 = salab - prev;
	IR = 27.5*(salliq1/100);
	salliq2 = salliq1 - IR;
	
	printf("\nO salário líquido é igual a R$ %.2f, o IR igual a R$ %.2f, e, a previdência igual a R$ %.2f.", salliq2, IR, prev);
		
getch();
}
