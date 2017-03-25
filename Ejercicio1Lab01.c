#include <stdio.h>

/************************************************************************************************
*    Programa: Laboratorio Taller 01                                                            *
*    Objetivo: Realizar el programa en consola según lo indicado por la profesor                * 
*    Autor/Grupo: Cristian Rojas Saavedra                                                       *
*    Asignatura: LAB_Estructura de datos     Sección: 652                                       *
*************************************************************************************************/ 

int main()
{
	int a,b;
	char cadena[9];
	int c;
	
	a=7;b=14;c=128 //FALTA UN PUNTO Y COMA
	printf("Asigne un valor a la cadena de caracteres");
	scanf("%s",cadena); 
	printf("La cadena es: %8s\n",cadena)//FALTA UN PUNTO Y COMA
	printf("\t a: %d",a);	
	printf("\t b: %d",b);
	printf("\t c: %d",c);
	return 0;
}
/*AL MOMENTO DE ESCRIBIR BUENOS DIAS, SOLAMENTE MUESTRA BUENOS */
