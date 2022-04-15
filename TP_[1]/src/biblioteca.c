#include "biblioteca.h"


int pedirNumeroEntero(char* mensaje, char* mensajeError, int min, int max)
{
	int numeroIngresado;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%d", &numeroIngresado);

	while(numeroIngresado < min || numeroIngresado > max)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}


double pedirDouble(char* mensaje, char* mensajeError, double min, double max)
{
	double num;
	int operacion;

	printf("%s", mensaje);
	fflush(stdin);
	operacion=scanf("%lf", &num);

	while(operacion!=1 || (num < min || num > max))
	{
		printf("%s", mensajeError);
		fflush(stdin);
		operacion=scanf("%lf", &num);
	}
	return num;
}


double calcularDescuento(double numero){

	numero-=(numero*0.1);

	return numero;
}


double calcularInteres(double numero){

	numero+=(numero*0.25);

	return numero;
}


double convertirPrecio(double numero){

	numero/=4606954.55;

	return numero;
}
