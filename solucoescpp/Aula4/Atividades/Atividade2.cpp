#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 

int main (){
 	
	setlocale(LC_ALL, "Portuguese");
	
char sexo;
float altura, imc;




	printf ("--Calculadora de IMC--");
	printf ("\nInsira seu Sexo (F ou M)..:");	
	scanf("%c", &sexo);
	printf ("Insira sua Altura em Metros..:");
	scanf("%f", &altura);

	
	switch(sexo)
	{		
		case 'M':
		case 'm': 
		imc = (72.7*altura)-58;			
		printf("Seu peso ideal é de aproximadamente %.1f quilos", imc);
		break;	
	
		case 'F':			
		case 'f': 
		imc = (62,1*altura)-44.7;					
		printf("Seu peso ideal é de aproximadamente %.1f quilos", imc);
		break;			
		
		default: 
		imc = 0;
		printf("Opção inválida!!");
		
		break;		
			
	}	




}
