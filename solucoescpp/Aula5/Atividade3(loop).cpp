#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{

	setlocale(LC_ALL, "Portuguese");


float n1, n2, m;
int qa, cont;

	
	cont = 0;

	printf("Insira a quantidade de alunos desejada..:");
	scanf("%d", &qa);

	printf("\n");


	while (cont <= qa) //loop
	{
	
	cont++;	// equivalente a cont = (cont+1);
	
	printf("\nInsira a primeira nota do %iº aluno..:", cont);
	scanf("%f", &n1);
	printf("Insira a segunda nota do %iº aluno..:", cont);
	scanf("%f", &n2);
	
	
	m = (n1 + 2)/2;		
	printf("A média do %iº aluno é igual a: %.1f", cont, m);
	
  	}	//fim do loop

	
}


/******
 Faça um Código que calcule a média aritmética de 2 notas float para 
 uma sala com X alunos
*****/
