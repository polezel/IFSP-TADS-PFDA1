#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int A;


	printf("Digite um número..:");
	scanf("%d", &A);

	if(A%2 == 0)
	{
		printf("O número é PAR");
	}
	
	else
	{
		printf("O número é IMPAR");
	}
	


getch();

}
