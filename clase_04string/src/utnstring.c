/*
 * utnstring.c
 *
 *  Created on: 29 ago. 2019
 *      Author: Martin Damian Sosa
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utnstring.h"

int getString(char *resultado,
			char mensaje[],
			char mensajeError[],
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = EXIT_ERROR;
	char buffer[10];
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
			if(scanf("%s", buffer)==1)
			{
				if(strlen(buffer) >= minimo && strlen(buffer) <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = strlen(buffer);
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}
