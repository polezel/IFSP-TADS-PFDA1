#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");

	int x, y;
	
	for(x=0, y=10; x<10; x++, y-2;)
	{
		printf("%i - %i \n", x);
	}
	system ("pause");

}
