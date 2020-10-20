/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> /* necess�rio p/ as fun��es rand() e srand() */
#include <time.h>   /* necess�rio p/ fun��o time() */
#include <locale.h> /* para uso de acentua��o */
#include <windows.h> /* para usar Sleep () */

/* Vari�veis globais */
int  num, cont;

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	/* srand(time(NULL)) objetiva inicializar o gerador de n�meros 
	   aleat�rios com o valor da fun��o time(NULL). 
	   Este por sua vez, � calculado como sendo o total de segundos 
	   passados desde 1 de janeiro de 1970 at� a data atual.
       Desta forma, a cada execu��o o valor da "semente" ser� diferente.
    */
    srand(time(NULL));
  
	printf ("N�meros gerados: ");
	for (cont=1; cont<=6; cont++) ;
	{
		num = rand()%61 ; /* % captura o resto da divis�o inteira entre rand() e 61 */
		printf ("[%i]", num);
		Sleep(1000); /* Aguarda 1000 milisegundos = 1 segundo */
	}
    getch();
 	return (0);
}


