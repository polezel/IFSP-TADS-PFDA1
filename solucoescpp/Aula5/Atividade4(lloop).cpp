#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");

int c, n, r;

	
	c = 0;
	r = 0;
	printf("Insira um número inteiro e positivo para executar a soma..:");
	scanf("%d", &n);


	while (c <= n){	
		r = r + c;
		c++;
	}
	 
	printf("O resultado final é igual a %d", r);
	
}

/*Faça um algoritmo que leia um número positivo e inteiro N, some todos os números 
inteiros de 1 a N, e mostre o resultado na tela.
*/
