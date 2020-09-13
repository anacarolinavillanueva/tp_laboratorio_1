/*
 * utn.
 *
 *  Created on: 11 sep. 2020
 *      Author: Alumno_Invitado
 */
#include <stdio.h>
#include <stdlib.h>
int utn_entradaInt(int *pNumeroIngresado) {
	int retorno = -1;
	int buffer;
	int respuestaScanf;

	do {
		printf("Por favor ingrese un numero, gracias!  :  \n");
		fflush(stdin);
		respuestaScanf = scanf("%d", &buffer);
	} while (respuestaScanf == 0);
	*pNumeroIngresado = buffer;

	retorno = 0;
	return retorno;
}
int utn_sumaDeNumerosInt(int *pResultado, int primerNumeroIngresado,
		int segundoNumeroIngresado) {
	int retorno = -1;
	if (pResultado != NULL) {
		*pResultado = primerNumeroIngresado + segundoNumeroIngresado;
		retorno = 0;
	}
	return retorno;
}
int utn_restaDeNumerosInt(int *pResultado, int primerNumeroIngresado,
		int segundoNumeroIngresado) {
	int retorno = -1;
	if (pResultado != NULL) {
		*pResultado = primerNumeroIngresado - segundoNumeroIngresado;
		retorno = 0;
	}
	return retorno;
}
int utn_multiplicarDeNumerosInt(int *pResultado, int primerNumeroIngresado,
		int segundoNumeroIngresado) {
	int retorno = -1;
	if (pResultado != NULL) {
		*pResultado = primerNumeroIngresado * segundoNumeroIngresado;
		retorno = 0;
	}
	return retorno;
}
int utn_divisionNumerosInt(float *pResultado, int primerNumeroIngresado,
		int segundoNumeroIngresado) {
	int retorno = -1;
	if (pResultado != NULL && segundoNumeroIngresado != 0) {
		*pResultado = (float) primerNumeroIngresado / segundoNumeroIngresado;
		retorno = 0;
	}
	return retorno;
}
int utn_factorial(int numeroAfactorear) {
	int total;
	if (numeroAfactorear >= 0) {
		if (numeroAfactorear == 0) {
			total = 1;
		} else {
			total = numeroAfactorear * utn_factorial(numeroAfactorear - 1);
		}
	} else {
		total = -1;
	}
	return total;
}

