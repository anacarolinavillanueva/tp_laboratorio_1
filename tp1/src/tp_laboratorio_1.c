/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);
	int primerNumeroIngresado;
	int segundoNumeroIngresado;
	int resultadoResta;
	float resultadoDivision;
	int opcion;
	int resultadoSuma;
	int resultadoMultiplicacion;
	int resultadoFactoreal1;
	int resultadoFactoreal2;

	do {
		printf(" CALCULADORA UTN FRa - TP1 \n\n"
				"(1). Ingresar primerOperando \n"
				"(2). Ingresar segundoOperando \n"
				"(3). Calcular todas las Operaciones\n");
		printf("\t(a). Calcular la Suma \n");
		printf("\t(b). Calcular la Resta \n");
		printf("\t(c). Calcular la Division \n");
		printf("\t(d). Calcular el Producto \n");
		printf("\t(e). Calcular los Factoriales \n");
		printf("(4). Informar Resultado\n"
				"(5). Salir ");
		scanf("%d", &opcion);
		switch (opcion) {
		case 1:
			utn_entradaInt(&primerNumeroIngresado);
			printf("Ingresaste un numero %d \n", primerNumeroIngresado);
			break;
		case 2:
			utn_entradaInt(&segundoNumeroIngresado);
			printf("Ingresaste un numero %d \n", segundoNumeroIngresado);
			break;
		case 3:
			utn_sumaDeNumerosInt(&resultadoSuma, primerNumeroIngresado,
					segundoNumeroIngresado);
			utn_restaDeNumerosInt(&resultadoResta, primerNumeroIngresado,
					segundoNumeroIngresado);
			utn_multiplicarDeNumerosInt(&resultadoMultiplicacion,
					primerNumeroIngresado, segundoNumeroIngresado);
			utn_divisionNumerosInt(&resultadoDivision, primerNumeroIngresado,
					segundoNumeroIngresado);
			resultadoFactoreal1 = utn_factorial(primerNumeroIngresado);
			resultadoFactoreal2 = utn_factorial(segundoNumeroIngresado);
			break;
		case 4:
			printf("El resultado de la suma es:  %d \n", resultadoSuma);
			printf("El resultado de la resta es:  %d \n", resultadoResta);
			printf("El resultado de la multiplicación es: %d \n",
					resultadoMultiplicacion);
			printf("El resultado de la división es:   %.2f \n",
					resultadoDivision);
			if (resultadoFactoreal1 == -1) {
				printf(
						"Error!, No se puede calcular factorial de numeros negativos, lo lamentamos \n");
			} else {
				printf("El resultado del factorial es %d", resultadoFactoreal1);
			}
			if (resultadoFactoreal2 == -1) {
				printf(
						"\nError!, No se puede calcular factorial de números negativos, reinténtelo por favor!\n");
			} else {
				printf("\nEl resultado del factoreal es %d \n", resultadoFactoreal2);
			}
			break;
		case 5:
			printf("Fin de la calculadora, Muchas Gracias!");
			break;
		default:
			printf(
					"Usted está cometiendo un error, reintente nuevamente, Muchas Gracias!");
			break;
		}
		printf("\nPresiona cualquier tecla para continuar...");
		fflush(stdin);
		getchar();
		system("cls");

	} while (opcion != 5);

	return EXIT_SUCCESS;
}

