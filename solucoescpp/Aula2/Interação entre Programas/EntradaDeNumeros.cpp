#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
FILE *arq;
	
	
	arq = fopen("nums.txt", "w"); 				


	fprintf(arq, "200 758");


		
	fclose(arq);									 
	printf("O arquivo foi criado com sucesso!!\n");
	system("pause");
}
