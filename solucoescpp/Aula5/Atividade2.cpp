#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 

int main (){
 	
	setlocale(LC_ALL, "Portuguese");
	
	
int num;

	printf ("Insira um número para verificar se o mesmo é positivo ou negativo e múltiplo e 3..:");
	scanf("%d", &num);

	
	if(num%3 == 0 && num >= 0)
	{
		printf("O número é positivo e múltiplo de 3 simultaneamente.");	
	}
	
	if(num%3 == 0 && num <= 0)
	{
		printf("O número é negativo e múltiplo de 3 simultaneamente.");	
	}
	
	if(num%3 != 0 && num >= 0)
	{
		printf("O número é positivo e não é múltiplo de 3.");	
	}
	
	if(num%3 != 0 && num <= 0)
	{
		printf("O número é negativo e não é múltiplo de 3.");	
	}

	

}
