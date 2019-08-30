#include <stdio.h>
#include <stdlib.h>
#include "utnchar.h"

#define EXIT_ERROR -1

int main(void)
{
	char resultado;
	if(get_Char(&resultado,"Ingrese letra minuscula\n","Error\n",97,122,2)==0)
	{
		printf("El resultado es: %c",resultado);
	}
	return EXIT_SUCCESS;
}
