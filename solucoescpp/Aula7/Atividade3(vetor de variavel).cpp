#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float notas[20][3], total;		//linha - coluna
	int i;		//controla as linhas
	int j;		//controla as colunas

		
	for(i=0; i<20; i++) //for controlador de linhas
	{	
		for(j=0; j<3; j++)//for controlador de colunas
		{
			printf("Digite a nota..:");
			scanf("%f", &notas[i][j]);
		}
	}

}


