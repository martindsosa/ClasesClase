/*
 ============================================================================
 Name        : clase_04string.c
 Author      : martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utnstring.h"
int main(void)
{
	char nombre[51];
	int r; // Respuesta
	r = getString(nombre,"Nombre: ","El largo debe ser entre 2 y 50", 2, 50,2);
	if(r == 0)
	{
		printf("Nombre: %s",nombre);
	}
}
