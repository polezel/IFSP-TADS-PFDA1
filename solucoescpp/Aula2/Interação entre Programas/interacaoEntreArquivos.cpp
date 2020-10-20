#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
int num1, num2, result;
FILE *arq;

	arq = fopen("nums.txt", "r");
	
	fscanf(arq, "%i", &num1);
	fscanf(arq, "%i", &num2);
	
	result = num1 + num2;
	
	printf("A soma dos numeros é: %i\n\n", result);
	
	
	fclose(arq);
	system("pause");
	
	
}
