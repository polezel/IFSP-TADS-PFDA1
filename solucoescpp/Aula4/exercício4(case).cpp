#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int idd, idd2;

	printf("Campeonato de Nata��o\n");
	printf("Insira a Idade da crian�a:");
	scanf("%d", &idd);
	

	
	switch(idd)
	{		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: printf("Beb� (Num campeonato de nata��o?):");
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
		
		default: printf("Op��o invalida");
		break;		
	}


	

getch();


}
