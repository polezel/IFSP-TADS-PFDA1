#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, num[10];
	float med;
	med = 0;
			
	printf("Digite 10 n�meros inteiros..:");		
	for(i=0; i<=9; i++)
	{	
		scanf("%d", &num[i]);
	}
	
		
	printf("\n\nOrdem Inversa..:");
	for(i=9; i>=0; i=i-1)  
	{	
		printf("%d - ", num[i]);
	}
		
		
	printf("\n\nPares..:");
	for(i=0; i<=9; i++)
	{	
		if(num[i]%2 == 0)
		{
			printf("%d - ", num[i]);
		}
	}
	
	
	printf("\n\n�mpares..:");
	for(i=0; i<=9; i++)
	{	
		if(num[i]%2 != 0)
		{
			printf("%d - ", num[i]);
		}
	}
	
	
	printf("\n\nM�dia Aritm�tica..:");
	for(i=0; i<=9; i++)
	{	
		med = med + num[i]; 
	}
	med = med/10; 
	printf("%.2f", med);
		
	
	int maiorN, maiorposi;
	printf("\n\nMaior N�mero..:");
	for(i=0; i<=9; i++)
	{	
		if(num[i] > num[i-1])
		{
			maiorN = num[i];
			maiorposi = i+1;
		}
	}
	printf("%i, %i�", maiorN, maiorposi);
	
	
	int menorN, menorposi;
	printf("\n\nMenor N�mero..:");
	for(i=0; i<=9; i++)
	{	
		if(num[i] < num[i-1])
		{
			menorN = num[i];
			menorposi = i+1;
		}
	}
	printf("%i, %i�", menorN, menorposi);


						

	
	
	
}
