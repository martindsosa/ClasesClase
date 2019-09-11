/*
 ============================================================================
 Name        : Clase_07ArrayNombre.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define QTY_NOMBRES 5
#define QTY_CARACTERES 50
#define QTY_NUMEROS 8
int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);
int imprimeArrayString(char nombres[][QTY_CARACTERES],int limite);
int ordenaArrayString(char nombres[][QTY_CARACTERES],int limite);

int main(void)
{
	int i;
	char aNombres[QTY_NOMBRES][QTY_CARACTERES];
	char aDni[QTY_NOMBRES][QTY_NUMEROS];
	char bufferNombre[QTY_CARACTERES];
	char bufferDni[QTY_NUMEROS];
	for(i=0;i< QTY_NOMBRES;i++)
	{
		if (getString(bufferNombre,"\nNombre?:","Error\n",1,49,5)==0)
		{
			strcpy(aNombres[i],bufferNombre);
		}
	}
	for (i=0;i<QTY_NOMBRES;i++)
	{
		printf("El nombre es: %s\n",aNombres[i]);
	}
	imprimeArrayString(aNombres,QTY_NOMBRES);
	ordenaArrayString(aNombres,QTY_NOMBRES);
	imprimeArrayString(aNombres,QTY_NOMBRES);

	return EXIT_SUCCESS;
}
int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = -1;
	char buffer[4096];
	if(	pResultado != NULL &&
		pMensaje != NULL &&
		pMensajeError != NULL &&
		minimo <= maximo &&
		reintentos >= 0)
	{
		do
			{
				printf("%s",pMensaje);
				__fpurge(stdin);
				fgets(buffer,sizeof(buffer),stdin);
				buffer[strlen(buffer)-1] = '\0';
				if(strlen(buffer)>=minimo && strlen(buffer) <= maximo)
				{
					strncpy(pResultado,buffer,maximo+1);
					retorno = 0;
					break;
				}
				printf("%s",pMensajeError);
				reintentos--;
			}while(reintentos >= 0);
	}
	return retorno;
}
int imprimeArrayString(char nombres[][QTY_CARACTERES],int limite )
{
	int i;
	int retorno = -1;
	if(nombres != NULL && limite > 0)
	{
		retorno = 0;
		printf("\n\n-------\n");
		for(i=0;i<limite;i++)
		{
			printf("El nombre es: %s\n",nombres[i]);

		}

	}
	return retorno;
}

int ordenaArrayString(char nombres[][QTY_CARACTERES],int limite)
{
	int i;
	int flagSwap;
	int retorno = -1;
	char bufferString[QTY_CARACTERES];
	if(nombres != NULL && limite > 0)
	{
		retorno = 0;
		do
		{
			flagSwap=0;
			for(i=0;i<limite-1;i++)
			{
				if(strcmp(nombres[i],nombres[i+1])>0)
				{
					flagSwap = 1;
					strncpy(bufferString,nombres[i],QTY_CARACTERES);
					strncpy(nombres[i],nombres[i+1],QTY_CARACTERES);
					strncpy(nombres[i+1],bufferString,QTY_CARACTERES);
				}
			}
		}while(flagSwap);
	}
	return retorno;
}
