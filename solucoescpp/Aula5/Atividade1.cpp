#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 

int main (){
 	
	setlocale(LC_ALL, "Portuguese");
	
	
int mes;



	printf ("Insira um m�s (em n�meros)...:");
	scanf("%d", &mes);

	
	switch(mes)
	{		
	
		case 1: 
		printf("O m�s digitado � Janeiro");
		break;		
		case 2: 
		printf("O m�s digitado � Fevereiro");
		break;		
		case 3: 
		printf("O m�s digitado � Mar�o");
		break;	
		case 4: 
		printf("O m�s digitado � Abril");
		break;				
		case 5: 
		printf("O m�s digitado � Maio");
		break;				
		case 6:
		printf("O m�s digitado � Junho");
		break;		
		case 7: 
		printf("O m�s digitado � Julho");
		break;		
		case 8: 
		printf("O m�s digitado � Agosto");
		break;		
		case 9: 
		printf("O m�s digitado � Setembro");
		break;		
		case 10: 
		printf("O m�s digitado � Outubro");
		break;				
		case 11: 
		printf("O m�s digitado � Novembro");
		break;				
		case 12: 
		printf("O m�s digitado � Dezembro");
		break;
				
		default: 
		printf("M�s inv�lido!!");
		break;		
			
	}	




}
