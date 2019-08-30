/*
 * utnfloat.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */


#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utnfloat.h"

float getFloat(float *resultado,
			char *mensaje,
			char *mensajeError,
			float minimo,
			float maximo,
			int reintentos)
{
	int retorno = EXIT_ERROR;
	float buffer;
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin);
			if(scanf("%f",&buffer)==1)
			{
				if(buffer >= minimo && buffer <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}
