#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int idd, idd2;

	printf("Campeonato de Natação\n");
	printf("Insira a Idade da criança:");
	scanf("%d", &idd);
	

	
	switch(idd)
	{		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: printf("Bebê (Num campeonato de natação?):");
		break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10: printf("Infanto Juvenil");
		break;
			
		case 11:
		case 12:
		case 13:
		case 14: printf("Infanto Juvenil");
		break;
		
		case 15:
		case 16:
		case 17:
		case 18:printf("Adolescente");
		break;
		
		default: printf("Opção invalida");
		break;		
	}


	

getch();


}
