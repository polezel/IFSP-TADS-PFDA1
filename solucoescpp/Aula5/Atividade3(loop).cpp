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
	
	printf("\nInsira a primeira nota do %i� aluno..:", cont);
	scanf("%f", &n1);
	printf("Insira a segunda nota do %i� aluno..:", cont);
	scanf("%f", &n2);
	
	
	m = (n1 + 2)/2;		
	printf("A m�dia do %i� aluno � igual a: %.1f", cont, m);
	
  	}	//fim do loop

	
}


/******
 Fa�a um C�digo que calcule a m�dia aritm�tica de 2 notas float para 
 uma sala com X alunos
*****/
