#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int A;


	printf("Digite um n�mero..:");
	scanf("%d", &A);

	if(A%2 == 0)
	{
		printf("O n�mero � PAR");
	}
	
	else
	{
		printf("O n�mero � IMPAR");
	}
	


getch();

}
