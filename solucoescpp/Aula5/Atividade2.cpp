#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 

int main (){
 	
	setlocale(LC_ALL, "Portuguese");
	
	
int num;

	printf ("Insira um n�mero para verificar se o mesmo � positivo ou negativo e m�ltiplo e 3..:");
	scanf("%d", &num);

	
	if(num%3 == 0 && num >= 0)
	{
		printf("O n�mero � positivo e m�ltiplo de 3 simultaneamente.");	
	}
	
	if(num%3 == 0 && num <= 0)
	{
		printf("O n�mero � negativo e m�ltiplo de 3 simultaneamente.");	
	}
	
	if(num%3 != 0 && num >= 0)
	{
		printf("O n�mero � positivo e n�o � m�ltiplo de 3.");	
	}
	
	if(num%3 != 0 && num <= 0)
	{
		printf("O n�mero � negativo e n�o � m�ltiplo de 3.");	
	}

	

}
