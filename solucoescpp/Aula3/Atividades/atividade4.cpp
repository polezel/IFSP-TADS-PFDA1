#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{

	setlocale(LC_ALL, "Portuguese");
	
float celc, faren;


	printf("Exercício 4\n\n\n");

	printf("Insira a temperatura em celcius desejada..:");
	scanf("%f", &celc);
	
	faren = (celc*1.8)+32;

	printf("A temperatura em Fahrenheit é %.2f", faren);

	
getch();
}
