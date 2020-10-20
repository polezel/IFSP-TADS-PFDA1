#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	

float nota1;
float nota2;
float media;



	printf("Insira a primeira nota do aluno..:");
	scanf("%f", &nota1);    //  & PARA ATRIBUIR VALOR
	
	printf("Insira a segunda nota do aluno..:");
	scanf("%f", &nota2);

	media = (nota1 + nota2)/2;


	printf("A média entre elas é igual a %.1f.", media);
	
}






