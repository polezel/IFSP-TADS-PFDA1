/* ---------------------------------------------------
	- Programa: Programa para fazer uma multiplicação simples (exercício da prova de LGPA1)
	- Autor: Lucas Polezel e John Mendonça
	- Descrição: O programa vai receber do usuário os números, multiplicar por 5 e mostrar na tela os resultados. 
	e imprimir o resultado na tela 
	- Data de criação: 21.10.2020
	- Última atualização: 23.10.2020
------------------------------------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Numeros[3][3]; //linha - coluna
	int LINHAS; //controla as linhas
	int COLUNAS; //controla as colunas
	
	
	// ----- entrada dos dados -----
	for(LINHAS=0; LINHAS<3; LINHAS++) //for controlador de linhas
	{
		for(COLUNAS=0; COLUNAS<3; COLUNAS++)//for controlador de colunas
		{
			printf("Digite um número..:"); fflush(stdin); scanf("%i", &Numeros[LINHAS][COLUNAS]);
		}
	}
	
	// ----- multiplicação -----
	for(LINHAS=0; LINHAS<3; LINHAS++) //for controlador de linhas
	{
		for(COLUNAS=0; COLUNAS<3; COLUNAS++) //for controlador de colunas
		{
			Numeros[LINHAS][COLUNAS] = Numeros[LINHAS][COLUNAS] * 5; //recebe o valor inserido e o multiplica de acordo com o solicitado no exercício
		}
	}

	// ----- impressão dos dados -----
	for(LINHAS=0; LINHAS<3; LINHAS++) //for controlador de linhas
	{
		for(COLUNAS=0; COLUNAS<3; COLUNAS++)//for controlador de colunas
		{
			printf("%i - ", Numeros[LINHAS][COLUNAS]);
		}
	}
}
