#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define N 5

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	float nt1, nt2, media[n], total;
	
	total = 0;
	
	for(i=0; i<N; i++)	// entrada de dados
	{
		printf("Digite a 1ª nota..: ");		scanf("%f", &nt1);
		printf("Digite a 2ª nota..: ");		scanf("%f", &nt2);
		printf("\n");
	}
		
	for(i=0; i<N; i++)	// processamento de dados
	{
		media[n] = (nt1 + nt2)/2;
		total = total + media[n];
	}
	
	total = total/N;
	printf(" A media total é %.2f ", total);
}

