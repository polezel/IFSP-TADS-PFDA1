#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int    carneirinhos;
char   opc; /* S = sim   N = n�o */

int main()
{
	for ( carneirinhos=0, opc='N' ; opc=='N';   )
    {
	   /* pergunta se dormiu */
	   printf ("\nDormiu? [S=sim][N=nao]");
	   opc = getche ();
	   /* se n�o dormiu ainda, ent�o contabiliza carneirinho */
	   if ( opc=='N')
	   { 	/* contagem de carneirinhos */
	        carneirinhos++;
	   }
	}	
	printf ("\nPrecisei contar %i carneirinhos", carneirinhos);
	getch();
	return (0);
}
