#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	

int num1, result;


	printf("Exerc�cio 2\n\n\n");

	printf("Insira o n�mero desejado..:");
	scanf("%i", &num1);
	
	result = 2*(num1*num1); 


	printf("O dobro do quadrado do n�mero digitado � %i", result);

	
getch();

}
