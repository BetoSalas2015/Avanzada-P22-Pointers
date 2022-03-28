#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cadena[50];
	char *pointer;
	int cont = 0;

	printf("Escribe una cadena: ");
	gets(cadena);

	pointer = cadena;		//  equivale a decir pointer = &cadena[0]

	//pointer = cadena;		// Inicializo al elemento 0 de la cadena
	while( *pointer != '\0') 
	{
		cont++;
		pointer++;
	}
	putchar('\n');

	printf("La cadena tiene %d caracteres", cont);
	
	system("pause");
	return 0;
}


