#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int    carneirinhos;
char   opc; /* S = sim   N = não */

int main()
{
	for ( carneirinhos=0, opc='N' ; opc=='N';  )
    {
	   /* pergunta se dormiu */
	   printf ("\nDormiu? [S=sim][N=nao]");
	   opc = getche ();
       if ( opc == 'N')
       	   carneirinhos++;
	}	
	printf ("\nPrecisei contar %i carneirinhos", carneirinhos);
	getch();
	return (0);
}
