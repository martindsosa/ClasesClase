/*
 ============================================================================
 Name        : clase_05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#define QTY_EMPLEADOS 8
int imprimeArrayInt(int array[],int limite);
int initArrayInt(int array[],int limite,int valor);
int getArrayInt(	int array[],
					int limite,
					char *mensaje,
					char *mensajeError,
					int minimo,
					int maximo,
					int reintentos);
int ordenarArrayInt(int array[],int limite);
int maximoArrayInt(int array[],int limite,int *pResultado);
int minimoArrayInt(int array[],int limite,int cantidaElementos,int *pResultado);
//int promedioArrayInt(int array[],int limite,int cantidaElementos,float *pResultado);

int main(void)
{
	int edadesEmpleados[QTY_EMPLEADOS]={5,77,10,100,500,70,3,2};

	if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,10) == 0)
	{
	    imprimeArrayInt(edadesEmpleados,QTY_EMPLEADOS);
		ordenarArrayInt(edadesEmpleados,QTY_EMPLEADOS);
		imprimeArrayInt(edadesEmpleados,QTY_EMPLEADOS);
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

int imprimeArrayInt(int array[],int limite )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("%d\n",array[i]);
		}

	}
	return retorno;
}
int maximoArrayInt(int array[],int limite,int *pResultado)
{
	int i;
	int retorno = -1;
	int maximoVector;
	maximoVector = array[0];
	for(i=0;i < limite; i++)
	{
		if(array[i]> maximoVector)
		{
			maximoVector = array[i];
		}
	}
	*pResultado = maximoVector;
	return retorno;
}
int minimoArrayInt(int array[],int limite,int cantidaElementos,int *pResultado)
{
	int i;
	int retorno = -1;
	int minimoVector;
	minimoVector= array[0];
	for(i=0;i<limite;i++)
	{
		if(array[i]<minimoVector)
		{
			minimoVector = array[i];
		}
	}
	*pResultado = minimoVector;
	return retorno;
}
int ordenarArrayInt(int array[],int limite)
{
	int j;
	int flagNoEstaOrdenado;
	int bufferInt;
	int retorno = -1;
	if (array != NULL && limite > 0)
	{
		retorno = 0;
		do
		{
			flagNoEstaOrdenado = 0;
			for (j = 0; j < limite; j++)
			{
				if (array[j] > array[j + 1])
				{
					bufferInt = array[j];
					array[j] = array[j + 1];
					array[j + 1] = bufferInt;
					flagNoEstaOrdenado = 1;
				}
			}
		}while(flagNoEstaOrdenado==1);
	}
	return retorno;
}
char getString (char *pResultado  ,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = -1;
	char buffer[4096];

	if(pResultado != NULL &&
		pMensaje != NULL &&
		pMensajeError != NULL &&
		minimo < maximo &&
		reintentos >=0)
		do{
			printf("%s",pMensaje);
			__fpurge();
			fgets(buffer,sizeof(buffer),stdin);
			if(strlen(buffer) >= minimo && strlen(buffer) <= maximo)
			{
				retorno = 0;
				break;
			}
			printf("%s",pMensajeError);
			reintentos--;

		}while(reintentos >= 0);
	}
	return (retorno);
}
int getArrayInt(	int array[],
					int limite,
					char *pMensaje,
					char *pMensajeError,
					int minimo,
					int maximo,
					int reintentos)
{
	int i=0;
	int buffer;
	char respuesta = 'n';
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		do
		{
			if(getInt(	&buffer,
						pMensaje,
						pMensajeError,
						minimo,
						maximo,
						reintentos) == 0)
			{
				array[i] = buffer;
				i++;
				limite--;
			}
			printf("Continuar? (s/n)");
			__fpurge(stdin);
			scanf("%c",&respuesta);
		}while(respuesta == 's' && limite > 0);
		retorno = i;
	}
	return retorno;
}

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = -1;
	int buffer;
	do
	{
		printf("%s",pMensaje);
		__fpurge(stdin);
		if(scanf("%d",&buffer)==1 && buffer >= minimo && buffer <= maximo)
		{
			*pResultado = buffer;
			retorno = 0;
			break;
		}
		printf("%s",pMensajeError);
		reintentos--;
	}while(reintentos >= 0);
	return retorno;
}
