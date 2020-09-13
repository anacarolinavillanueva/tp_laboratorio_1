/*
 * utn.h
 *
 *  Created on: 12 sep. 2020
 *      Author: Alumno_Invitado
 */

#ifndef UTN_H_
#define UTN_H_

/** \brief: verifica si la cadena ingresada es num�rica
 *
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funci�n
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si as� no lo fuera.
 *
 */
int utn_entradaInt(int *pNumeroIngresado);
/** \brief: verifica si la cadena es numerica, realiza la suma de dos numeros enteros
 *
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funci�n
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si as� no lo fuera.
 *
 */

int utn_sumaDeNumerosInt(int *pResultado, int primerNumeroIngresado, int segundoNumeroIngresado);
/** \brief: verifica si la cadena ingresada es num�rica, realiza la resta de ambos numeros enteros
 *
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funci�n
 * \return Retorna 0 (EXITO) si se obtiene la resta de numeros enteros y -1 (ERROR) si as� no lo fuera.
 *
 */
int utn_restaDeNumerosInt(int *pResultado, int primerNumeroIngresado, int segundoNumeroIngresado);
/** \brief: verifica si la cadena ingresada es num�rica. Multiplica dos numeros enteros entre s�.
 *
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funci�n
 * \return Retorna 0 (EXITO) si se obtiene la multiplicaci�n de ambos numeros enteros y -1 (ERROR) si as� no lo fuera.
 *
 */
int utn_multiplicarDeNumerosInt(int *pResultado, int primerNumeroIngresado, int segundoNumeroIngresado);
/** \brief: verifica si la cadena ingresada es num�rica.Divide numeros enteros arrojando resultados en decimales.
 *
 *
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funci�n
 * \return Retorna 0 (EXITO) si se realiza la operaci�n de divisi�n y -1 (ERROR) si as� no lo fuera.
 *
 */
int utn_divisionNumerosInt(float *pResultado, int primerNumeroIngresado, int segundoNumeroIngresado);
/** \brief: funcion que devuelve el factorial de un numero
 *
 * \param  int numeroAfactorear: numero a calcular factorial.
 * \return int:  (-1) error o el factorial calculado.
 *
 */
int utn_factorial(int numeroAfactorear);
#endif /* UTN_H_ */
