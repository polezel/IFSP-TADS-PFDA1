#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>		//biblioteca de linguas


int main () 
{


//			TIPOS DE VARIAVEIS
//int - numeros inteiros
//float - numeros decimais
//char - caracteres


//			CRIAÇÃO DE VARIAVEIS
//	OBS: 1 nao pode caracter especial
//		 2 variavel não pode iniciar com numero


	setlocale(LC_ALL, "Portuguese");	//ultilizar a biblioteca de linguas

float nota1;
float nota2;
float media;

//^^^^^^^^^ atribuição de variaveis

	nota1 = 7.1;
	nota2 = 5.3;
	media = (nota1 + nota2)/2;

	
// os comandos  %F, %C, %I   ===   "imprimem" a variavel indicada (F=float    C=caracter    I=inteiro
// PARA SELECIONAR QUANTIDADE DE CASAS DECIMAIS DO FLOAT   ===		%.2f  (para duas casas decimais e assim segue)

	printf("A primeira nota foi %.1f, a segunda nota, %.1f,\n", nota1, nota2);
	printf("A média entre elas é igual a %.1f.", media);
	
}






