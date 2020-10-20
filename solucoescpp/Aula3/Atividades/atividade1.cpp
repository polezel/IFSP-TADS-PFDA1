#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
float altura, vol, raio;


	printf("Exercício 1\n\n\n");


	printf("Informe a altura da lata em metros..:");
	scanf("%f", &altura);
	
	printf("Informe o raio da lata em metros..:");
	scanf("%f", &raio);
	

	vol = 3.14159 * (raio*raio) * altura;
	
	
	printf("O volume da lata é igual a, aproximadamente..: %.2f m³",vol);


getch();

}
