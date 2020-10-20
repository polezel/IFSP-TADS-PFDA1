#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define N 5
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v[N], i;
	
	// entrada de dados
	for(i=0; i<N; i++)
	{
		printf("Digite valor..: ");
		scanf("%i", &v[i]);
	}
	
	
	
	// processamento de dados
	for(i=0; i<N; i++)
	{
		v[i] = v[i] * 2;
	}
	
	
	// saída de dados
	printf("\n\nDados digitados..: ");
	for(i=0; i<N; i++)
	{
		printf("%i - ", v[i]);
	}
}
