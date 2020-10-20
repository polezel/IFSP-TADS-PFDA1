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

	if(A%3 == 0 && A%5 == 0)
	{
		printf("O número é multiplo de 3 e de 5 simultaneamente");
	}
	
	else
	{
		printf("O número não é multiplo de 3 e 5 simultaneamente");
	}
	

getch();

}
