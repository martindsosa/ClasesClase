#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estaVacio;  // 0 = hay alumno 1 = vacio
}eAlumno;
void MostrarUnAlumno(eAlumno alguno);
void MostrarAlumnos(eAlumno listadoDeAlumnos[],int cantidad);
int InicializarEstadoListado(eAlumno listado,int cantidad);


int main()
{
    int estaVacio = 0;
    int i;
    int cant =5;
    eAlumno listadoDeAlumnos[5];
    eAlumno unAlumno;
    InicializarEstadoListado(listadoDeAlumnos,cant);

    return 0;
}
int InicializarEstadoListado(eAlumno listado,int cantidad)
{
    int i;
    for (i=0;i<cantidad;i++)
    {
        listado[i].estaVacio = 1;
        printf("%d\n",listado[i].estaVacio);
    }
}
