/*
 ============================================================================
 Name        : minmaxprom.c
 Author      : Martin Damian Sosa
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#define NUMEROS_A_PEDIR 6
int pedirNumerosYCalcularMaximoMinimoPromedio(int *maximo, int *minimo, float *promedio);
int main(void) {
	int maximo;
	int minimo;
	float promedio;
	if (pedirNumerosYCalcularMaximoMinimoPromedio(&maximo,&minimo,&promedio)==0){
		printf("Maximo: %d  Minimo: %d  Promedio: %.2f ",maximo,minimo,promedio);
	}else{
		printf("Error.");
	}
	return 0;
}

int pedirNumerosYCalcularMaximoMinimoPromedio(int *maximo, int *minimo, float *promedio)
{
	int retorno = 0;
	int numero;
	int acumulador = 0;
	int contador=0;
	int maximoAuxiliar;
	int minimoAuxiliar;

	for (int i=1; i < NUMEROS_A_PEDIR;i++)
	{
		printf("Ingrese un numero: ");
		__fpurge (stdin);
		scanf("%d",&numero);

		if(numero >maximoAuxiliar || i == 1){
			maximoAuxiliar = numero;
		}
		if (numero < minimoAuxiliar|| i == 1){
			minimoAuxiliar = numero;
		}
		acumulador = acumulador + numero;
		contador = i;
	}
	*maximo = maximoAuxiliar;
	*minimo = minimoAuxiliar;
	*promedio = (float) acumulador / (float) contador;
	return retorno;
}
