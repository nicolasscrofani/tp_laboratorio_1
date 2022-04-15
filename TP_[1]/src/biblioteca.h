#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * @brief pide un numero entero y verifica
 * @param mensaje a mostrar para pedir lo que se necesite
 * @param mensajeError mensaje de ERROR mas mensaje de reingreso
 * @param minimo valor minimo a validar
 * @param maximo valor maximo a validar
 * @return retorna un numero entero ingresado valido
 */
int pedirNumeroEntero(char* mensaje, char* mensajeError, int min, int max);


/**
 * @brief pide un numero flotante y verifica
 * @param mensaje a mostrar para pedir lo que se necesite
 * @param mensajeError mensaje de ERROR mas mensaje de reingreso
 * @param minimo valor minimo a validar
 * @param maximo valor maximo a validar
 * @return retorna un numero flotante ingresado valido
 */
double pedirDouble(char* mensaje, char* mensajeError, double min, double max);


/**
 * @brief calcula un descuento del 10% a un numero ingresado
 * @param un numero flotante ingresado
 * @return retorna el numero flotante ingresado con el descuento aplicado
 */
double calcularDescuento(double numero);


/**
 * @brief calcula un aumento del 25% a un numero ingresado
 * @param un numero flotante ingresado
 * @return retorna el numero flotante ingresado con el aumento aplicado
 */
double calcularInteres(double numero);


/**
 * @brief convierte valor peso a bitcoin
 * @param un numero flotante ingresado
 * @return retorna el numero flotante ingresado con la conversion aplicado
 */
double convertirPrecio(double numero);


#endif /* BIBLIOTECA_H_ */
