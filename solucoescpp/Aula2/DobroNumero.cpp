#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()	{
	
setlocale(LC_ALL, "Portuguese");


int num;


	printf("Digite um n�mero:  ");
	scanf("%i", &num);
	
	printf("\nO dobro de %i � %i", num, num*2);
	
	
	
	
}
