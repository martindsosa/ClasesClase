//============================================================================
// Name        : clase_07Bibliotecas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <stdlib.h>
#include"utn.h"


int main(void) {
	int resultado;
	if(getInt(&resultado,"Edad?\n","Error\n",0,150,2)==0)
	{
		printf("El resultado es: %d",resultado);
	}
	return EXIT_SUCCESS;
}
