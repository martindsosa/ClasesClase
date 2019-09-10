/*
 * utn.h
 *
 *  Created on: 10 sep. 2019
 *      Author: martin
 */

#define EXIT_ERROR -1
char getChar(char *resultado,
			char *mensaje,
			char *mensajeError,
			char minimo,
			char maximo,
			int reintentos);

float getFloat(float *resultado,
			char *mensaje,
			char *mensajeError,
			float minimo,
			float maximo,
			int reintentos);

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);






