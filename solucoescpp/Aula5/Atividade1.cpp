#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 

int main (){
 	
	setlocale(LC_ALL, "Portuguese");
	
	
int mes;



	printf ("Insira um mês (em números)...:");
	scanf("%d", &mes);

	
	switch(mes)
	{		
	
		case 1: 
		printf("O mês digitado é Janeiro");
		break;		
		case 2: 
		printf("O mês digitado é Fevereiro");
		break;		
		case 3: 
		printf("O mês digitado é Março");
		break;	
		case 4: 
		printf("O mês digitado é Abril");
		break;				
		case 5: 
		printf("O mês digitado é Maio");
		break;				
		case 6:
		printf("O mês digitado é Junho");
		break;		
		case 7: 
		printf("O mês digitado é Julho");
		break;		
		case 8: 
		printf("O mês digitado é Agosto");
		break;		
		case 9: 
		printf("O mês digitado é Setembro");
		break;		
		case 10: 
		printf("O mês digitado é Outubro");
		break;				
		case 11: 
		printf("O mês digitado é Novembro");
		break;				
		case 12: 
		printf("O mês digitado é Dezembro");
		break;
				
		default: 
		printf("Mês inválido!!");
		break;		
			
	}	




}
