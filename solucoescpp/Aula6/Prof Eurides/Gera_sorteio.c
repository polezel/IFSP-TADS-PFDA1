/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> /* necessário p/ as funções rand() e srand() */
#include <time.h>   /* necessário p/ função time() */
#include <locale.h> /* para uso de acentuação */
#include <windows.h> /* para usar Sleep () */

/* Variáveis globais */
int  num, cont;

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	/* srand(time(NULL)) objetiva inicializar o gerador de números 
	   aleatórios com o valor da função time(NULL). 
	   Este por sua vez, é calculado como sendo o total de segundos 
	   passados desde 1 de janeiro de 1970 até a data atual.
       Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand(time(NULL));
  
	printf ("Números gerados: ");
	for (cont=1; cont<=6; cont++) ;
	{
		num = rand()%61 ; /* % captura o resto da divisão inteira entre rand() e 61 */
		printf ("[%i]", num);
		Sleep(1000); /* Aguarda 1000 milisegundos = 1 segundo */
	}
    getch();
 	return (0);
}


