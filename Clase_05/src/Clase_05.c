/*
 ============================================================================
 Name        : Clase_05.c
 Author      : Martin Damian Sosa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define QTY_EMPLEADOS 1000
int initArrayInt(int array[],int limite,int valor );
void imprimirArray(int array[], int limite);
int getArrayInt(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos);
int maximoArrayInt(int array[],
				int limite,
				int *pResultado);
int minimoArrayInt(int array[],
				int limite,
				int *pResultado);
int promedioArrayInt(int array[],
				int limite,
				float *pResultado);
//para el promedio hay que castear una de las variables float(i) por ejemplo

int main(void)
{
	int edadesEmpleados[QTY_EMPLEADOS];
	if (getArrayInt(edadesEmpleados,QTY_EMPLEADOS,"Entero? \n","Error\n",0,10,2)==0)
	{

	}
	if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,10) == 0)
	{
		imprimirArray(edadesEmpleados,QTY_EMPLEADOS);
	}
	return EXIT_SUCCESS;
}

int initArrayInt(int array[],int limite,int valor )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			array[i]=valor+i;
		}
	}
	return retorno;
}
int getArrayInt(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int i=0;
	do
	{
		if((getInt(&buffer,pMensaje,pMensajeError,0,150,2)==0)
		{
			array[i]=buffer;
			i++;
			limite --;
		}
		print ("Continuar? (s/n)");
		__fpurge(stdin);


	}while(respuesta == 's' &&  );
}


void imprimirArray(int array[], int limite)
{

	for(int i=0;i<limite;i++)
	{
		printf("%d\n",array[i]);
	}
}
