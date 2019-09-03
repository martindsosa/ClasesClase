/*
 * utnstring.h
 *
 *  Created on: 29 ago. 2019
 *      Author: Martin Damian Sosa
 */
#define EXIT_ERROR -1
int getString(char *resultado,
			char mensaje[],
			char mensajeError[],
			int minimo,
			int maximo,
			int reintentos);
