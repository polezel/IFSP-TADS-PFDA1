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


	arq = fopen("Dados.txt", "w");
	 
	
	printf("Digite seu Nome: ");
	fflush(stdin);								//limpa os comandos anteriores do teclado 
	gets(nome);									//entrada de texto com espa�os
	fprintf(arq, "%s", nome);
	
	
	printf("Digite seu Prontu�rio: ");
	fflush(stdin);
	scanf("%s", &pront);						//entrada de texto sem espa�os
	fprintf(arq, "\n%s", pront);
	
	
	printf("Digite sua Idade: ");
	fflush(stdin);
	scanf("%i", &idade);
	fprintf(arq, "\n%i", idade);
	
	
	printf("Digite sua IRA: ");
	scanf("%f", &ira);
	fprintf(arq, "\n%.1f", ira);
	
	
	
	
	fclose(arq);									 
	printf("\n\nO arquivo foi criado com sucesso!!\n");
	system("pause");
}

