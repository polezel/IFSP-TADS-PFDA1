#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");


FILE *arq;
char nome[100], pront[10];
int idade;
float ira;


	arq = fopen("Dados.txt", "r");
	
	
	printf("Nome: ");
	fgets(nome, 100, arq);
//	fscanf(arq, "%s", nome);
	printf("%s", nome);
	
	
	printf("\nProntuário: ");
	fscanf(arq, "%s", pront);
	printf("%s", pront);
	
	
	printf("\nIdade: ");
	fscanf(arq, "%i", &idade);
	printf("%i", nome);
	
	printf("\nIRA: ");
	fscanf(arq, "%f", &ira);
	printf("%.1f\n\n\n", ira);
	
	
	fclose(arq);
	system("pause");
}
