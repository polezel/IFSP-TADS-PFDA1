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

	if(A%3 == 0 && A%5 == 0)
	{
		printf("O n�mero � multiplo de 3 e de 5 simultaneamente");
	}
	
	else
	{
		printf("O n�mero n�o � multiplo de 3 e 5 simultaneamente");
	}
	

getch();

}
