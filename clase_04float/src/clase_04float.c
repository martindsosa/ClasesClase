/*
 ============================================================================
 Name        : clase_04float.c
 Author      : martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utnfloat.h"

#define EXIT_ERROR -1

int main(void)
{
	float resultado;
	if(getFloat(&resultado,"Ingrese flotante?\n","Error\n",0.0,150.0,2)==0)
	{
		printf("El resultado es: %f",resultado);
	}
	return EXIT_SUCCESS;
}
