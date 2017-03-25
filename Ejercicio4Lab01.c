#include <stdio.h>
#include <stdlib.h>

/************************************************************************************************
*    Programa: Laboratorio Taller 01                                                            *
*    Objetivo: Realizar el programa en consola según lo indicado por la profesor                * 
*    Autor/Grupo: Cristian Rojas Saavedra                                                       *
*    Asignatura: LAB_Estructura de datos     Sección: 652                                       *
*************************************************************************************************/ 

/*FUNCION DE ORDENAMIENTO*/
void swap (int *arreglo1,int *arreglo2)
{
	int variable;
	variable = *arreglo1;
	//printf("%i\n", variable);
	*arreglo1=*arreglo2;
	//printf("%i\n", arreglo1);
	*arreglo2 = variable;
	//printf("%i\n", arreglo2);
	
}


int main(int argc,char*argv[])
{
	int a,b,c,d,columnas=4;	
	/*SOLICITO ENTRADA POR TECLADO*/
	printf ("ingrese el valor de a:\n >: ");
	scanf("%i",&a);
	printf ("ingrese el valor de b:\n >: ");
	scanf("%i",&b);
	printf ("ingrese el valor de c:\n >: ");
	scanf("%i",&c);
	printf ("ingrese el valor de d:\n >: ");
	scanf("%i",&d);

	/*DECLARO Y ASIGNO VALORES AL ARREGLO*/	
	int *arreglo= (int*) malloc(columnas*sizeof(int));
	arreglo[0]=a;
	arreglo[1]=b;
	arreglo[2]=c;
	arreglo[3]=d;
	int *ptra , *ptrb,*ptrc,*ptrd;
	
	/*ORDENAMIENTO PASO 1 A Y C*/	
	if (arreglo[0]<arreglo[2])
	{
		ptra = &arreglo[0];
		ptrc = &arreglo[2];
		
		swap(ptra,ptrc);
	}
	/*ORDENAMIENTO PASO 1 B Y D*/
	if (arreglo[1]<arreglo[3])
	{
		ptrb = &arreglo[1];
		ptrd = &arreglo[3];
		
		swap(ptrb,ptrd);
	}
	
	/*ORDENAMIENTO PASO 2 A Y B*/
	if (arreglo[0]<arreglo[1])
	{
		ptra = &arreglo[1];
		ptrb = &arreglo[0];
		
		swap(ptra,ptrb);
	}
	/*ORDENAMIENTO PASO 2 C Y D*/
	if (arreglo[2]<arreglo[3])
	{
		ptrc = &arreglo[3];
		ptrd = &arreglo[2];
		
		swap(ptrc,ptrd);
	}
	/*ORDENAMIENTO PASO 3 B Y C*/
	if (arreglo[1]<arreglo[2])
	{
		ptrb = &arreglo[2];
		ptrc = &arreglo[1];
		
		swap(ptrb,ptrc);
	}
	
	/*RECORRER ARREGLO FINAL*/
	int i;
	for (i=0;i<4;i++){
		printf("%i ",arreglo[i]);
	}
	
	return (0);
		
}
