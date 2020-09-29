#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num[10];
	int i, qnum[10];
	
	
		
	printf("Digite 10 números..:");
	
				
	for(i=0; i<10; i++)
	{	
		scanf("%f", &num[i]);
		qnum[i] = num[i] * num[i];
	}
	
	for(i=0; i<10; i++) 
	{	
		printf("%i - ", qnum[i]);
	}
	
	
}
