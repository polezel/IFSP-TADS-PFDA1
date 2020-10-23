/* ---------------------------------------------------
	- Programa: Programa para fazer uma multiplica��o simples (exerc�cio da prova de LGPA1)
	- Autor: Lucas Polezel e John Mendon�a
	- Descri��o: O programa vai receber do usu�rio os n�meros, multiplicar por 5 e mostrar na tela os resultados. 
	e imprimir o resultado na tela 
	- Data de cria��o: 21.10.2020
	- �ltima atualiza��o: 23.10.2020
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
			printf("Digite um n�mero..:"); fflush(stdin); scanf("%i", &Numeros[LINHAS][COLUNAS]);
		}
	}
	
	// ----- multiplica��o -----
	for(LINHAS=0; LINHAS<3; LINHAS++) //for controlador de linhas
	{
		for(COLUNAS=0; COLUNAS<3; COLUNAS++) //for controlador de colunas
		{
			Numeros[LINHAS][COLUNAS] = Numeros[LINHAS][COLUNAS] * 5; //recebe o valor inserido e o multiplica de acordo com o solicitado no exerc�cio
		}
	}

	// ----- impress�o dos dados -----
	for(LINHAS=0; LINHAS<3; LINHAS++) //for controlador de linhas
	{
		for(COLUNAS=0; COLUNAS<3; COLUNAS++)//for controlador de colunas
		{
			printf("%i - ", Numeros[LINHAS][COLUNAS]);
		}
	}
}
