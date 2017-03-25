#include <stdio.h>
#include <stdlib.h>

/************************************************************************************************
*    Programa: Laboratorio Taller 01                                                            *
*    Objetivo: Realizar el programa en consola según lo indicado por la profesor                * 
*    Autor/Grupo: Cristian Rojas Saavedra                                                       *
*    Asignatura: LAB_Estructura de datos     Sección: 652                                       *
*************************************************************************************************/ 

/*FUNCION QUE PERMITE CALCULAR NUMERO MAGICO*/
int suma (int n)
{
	int suma=0;	
	while(n!=0)
	{
		suma=suma+(n%10);
		n=n/10;
	}
	return (suma);
}
/*FUNCION QUE PERMITE VALIDAR DIAS*/
int validar(int *d, int m)
{
	/*FUNCION QUE PERMITE VALIDAR 28 DIAS DE FEBRERO*/
	if (*d>28 && m==2)
	{
		printf("Vuelva a ingresar una Fecha entre el 01 y 28:\n");
		printf(">: ");
		scanf("%i",d);
	//	return (d,m);
	}
	/*FUNCION QUE PERMITE VALIDAR 30 DIAS DE ABRIL*/
	else if (*d>30 && m==4)
	{
		printf("Vuelva a ingresar una Fecha entre el 01 y 30:\n");
		printf(">: ");
		scanf("%d",d);
	//	return (d,m);
	}
	/*FUNCION QUE PERMITE VALIDAR 30 DIAS DE JUNIO*/
	else if (*d>30 && m==6)
	{
		printf("Vuelva a ingresar una Fecha entre el 01 y 30:\n");
		printf(">: ");
		scanf("%d",d);
	//	return (d,m);
	}
	/*FUNCION QUE PERMITE VALIDAR 30 DIAS DE SEPTIEMBRE*/
	else if (*d>30 && m==9)
	{
		printf("Vuelva a ingresar una Fecha entre el 01 y 30:\n");
		printf(">: ");
		scanf("%d",d);
	//	return (d,m);
	}
	/*FUNCION QUE PERMITE VALIDAR 30 DIAS DE NOVIEMBRE*/
	else if (*d>30 && m==11)
	{
		printf("Vuelva a ingresar una Fecha entre el 01 y 30:\n");
		printf(">: ");
		scanf("%d",d);
	//	return (d,m);
	}
	return (d,m);/*RETORNA EL DIA CORREGIDO*/
}



int main(int argc,char*argv[])
{
	printf("________________________________________\n");
	printf("______ADIVINA TU NUMERO MAGICO__________\n");
	printf("________________________________________\n");
	printf("\n");
	printf("______INGRESA TU FECHA NACIMIENTO_______\n");
	printf("\n");
	
	int a,mes,dia,magico1=0,magico2=0;
	
	/*INGRESAR EL AÑO POR TECLADO*/
	printf("Ingrese su año (yyyy):\n");
	printf(">: ");
	scanf("%d",&a);
	/*FUNCION QUE PERMITE VALIDAR QUE EL AÑO SEA MAYOR A CERO*/
	while (0>=a)
	{
		printf("El valor ingresado es menor a 0,\n");
		printf("vuelva a ingresar un valor mayor a 0.\n");
		printf(">: ");
		scanf("%d",&a);
	}
	/*INGRESAR EL MES POR TECLADO*/
	printf("ingrese su mes:\n");
	printf(">: ");
	scanf("%d",&mes);
	
	/*FUNCION QUE PERMITE VALIDAR QUE EL MES SEA MAYOR A CERO Y MENOR O IGUAL A 12*/
	while (1>mes || 12< mes)
	{
		printf("Ingrese un valor entre 1 y 12,\n");
		printf(">: ");
		scanf("%d",&mes);
	}
	/*INGRESAR EL DIA POR TECLADO*/
	printf("ingrese el dia:\n");
	printf(">: ");
	scanf("%d",&dia);
	
	/*FUNCION QUE PERMITE VALIDAR QUE EL DIA SEA MAYOR A CERO Y MENOR QUE 31 */
	while ( 1>dia || 31<dia)
	{
		printf("Ingrese un valor entre 01 y 31,\n");
		printf(">: ");
		scanf("%d",&dia);
	}
	
	int *ptrd;	
	ptrd=&dia;
	
	/*LLAMAR FUNCION PARA VALIDAR MESES CON 30 Y 28 DIAS */	
	validar(ptrd,mes);
	printf("\n");
	printf("________________________________________\n");
	printf("\n");	
	printf("Su fecha de nacimiento ingresada es(dd/mm/yyyy):\n ");
	printf("\n %d/%d/%d\n",dia,mes,a);
	
	/*UNA VEZ VALIDADO, SUMAMOS AÑO, MES Y DIA */	
	magico1=a+mes+dia;

	/*FUNCION CALCULA PRIMERA ETAPA DEL NUMERO MAGICO */
	suma(magico1);
	
	/*LE ASIGO PRIMER NUMERO MAGICO A OTRA VARIABLE */
	magico2=suma(magico1);

	/*FUNCION VUELVE A CALCULAR RESULTADO DEL ANTERIOR NUMERO MAGICO */
	magico2=suma(magico2);
	
	printf("\n");
	printf("________________________________________\n");
	printf("\n");
	
	printf ("su numero magico es: %d",magico2);
	
	printf("\n");
	printf("________________________________________\n");
	printf("\n");
	
	return (0);
}
