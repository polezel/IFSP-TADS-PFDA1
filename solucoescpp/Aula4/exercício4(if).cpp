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
	
	if(idd >= 0 && idd <= 5)
	{
		idd2 = 1;
	}	
	if(idd >= 6 && idd <= 10)
	{
		idd2 = 2;
	}
	if(idd >= 11 && idd <= 15)
	{
		idd2 = 3;
	}	
	if(idd >= 16 && idd <= 18)
	{
		idd2 = 4;
	}
	
	
	switch(idd2)
	{		
		case 1: printf("Beb� (Num campeonato de nata��o?):");
			break;
		case 2: printf("Infantil");
			break;	
		case 3: printf("Infanto Juvenil");
			break;
		case 4: printf("Adolescente");
			break;
		default: printf("Op��o invalida");
			break;		
	}


	

getch();


}
