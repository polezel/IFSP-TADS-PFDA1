#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");

	int r, i;
	
	printf("Digite o número desejado..:"); fflush(stdin); scanf("%d", &i);

	r = 0;
	
	while(i>=1)
	{
		r = r+i;
		i = i-1;
	printf("%d + ", i);
		
	}
	
	
	printf("0 = %d\n\n\n", r);
	
	system ("pause");

}

