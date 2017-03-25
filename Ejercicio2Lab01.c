#include <stdio.h>
#include <stdlib.h>

/************************************************************************************************
*    Programa: Guia de ejercicios                                                               *
*    Objetivo:                                                                                  *
*    Autor/Grupo: Cristian Rojas Saavedra                                                       *
*    Asignatura: Estructura de datos     Sección: 652                                           *
*************************************************************************************************/ 


void *completaMatriz(int filas,int columnas,int **matriz)
{
	int i,j;
		
	for (i=0;i<filas;i++)
	{
		for (j=0;j<columnas;j++)
		{
			//printf ("\tIngrese Valores:");
			//scanf ("\n\t\t%d%d", i,j);
			matriz[i][j]=rand()%100;
			
			
		}
		printf ("\n");
		
	};
	for (i=0; i<filas ; i++)
	{
		printf ("fila %i :", i);
		for (j=0;j<columnas;j++)
		{//
			printf("%i ", matriz[i][j]);/*mostrar */
		}
		printf("\n");
	}			
}

void *calcular(int **matriz,int filas, int columnas)
{	
	printf("\ncalculando....\n");
	int i,j,var;
	for(i=0; i<filas; i++)
	{
    	for(j=0; j<columnas; j++)
		{
			var=matriz[i][j];
			int x,y=0;
			for(x=2;x<=(var/2);x++)
			{
				if (var%x==0)
				{
					y++;
					break;
					
				}
			}
			if (y==1)
			{
				matriz[i][j]=0;
			}
			
		}
	}
	
	for (i=0; i<filas ; i++)
	{
		printf ("fila %i :", i);
		for (j=0;j<columnas;j++)
		{//
			printf("%i ", matriz[i][j]);/*mostrar */
		}
		printf("\n");
	}
	/* si al calcular la matriz i/i=0 es primo*/
}




int main(int argc,char*argv[])
{
	int **matrizA;//matriz
	int filas,columnas,i,j;	
	
	printf("\nIngrese numero filas:");
	scanf("%d",&filas);
	printf("Ingrese numero columna:");
	scanf("%d",&columnas);
		
	matrizA = (int**) malloc (filas*sizeof(int*));//matriz filas
	
	for (i=0; i<filas;i++)
	{
		matrizA[i] = (int*) malloc (columnas*sizeof(int));//matriz columnas
	}
	
	completaMatriz(filas,columnas,matrizA);
	printf("\n");
	calcular(matrizA,filas,columnas);
	
}
