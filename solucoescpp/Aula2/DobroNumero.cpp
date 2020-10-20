#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()	{
	
setlocale(LC_ALL, "Portuguese");


int num;


	printf("Digite um número:  ");
	scanf("%i", &num);
	
	printf("\nO dobro de %i é %i", num, num*2);
	
	
	
	
}
