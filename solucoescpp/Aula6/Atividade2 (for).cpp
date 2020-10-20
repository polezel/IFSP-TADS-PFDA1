#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");

	int i;
	
	for(i=0; i<10; i++)
	{
		printf("%i\n", i);
	}
	system ("pause");

}
