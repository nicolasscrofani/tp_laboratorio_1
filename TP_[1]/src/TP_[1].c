#include "biblioteca.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcion;
	int flagPrecioLatam=0;
	int flagPrecioAerolineas=0;
	int flagKm=0;
	int flagCalcular=0;
	double km;
	double precioAerolineas;
	double precioLatam;
	double precioConDescuentoLatam;
	double precioConDescuentoAerolineas;
	double precioConInteresLatam;
	double precioConInteresAerolineas;
	double precioEnBitcoinLatam;
	double precioEnBitcoinAerolineas;
	double precioPorKmLatam;
	double precioPorKmAerolineas;
	double diferenciaDePrecio;


		printf("Bienvenido!.\n"
				"-------__|__\n"
				"------oo(_)oo------\n\n");

		do
		{

			opcion = pedirNumeroEntero( "1. Ingresar kilómetros:\n\n"

					  "2. Ingresar Precio de Vuelos:"
					  "\n- Precio vuelo Aerolíneas:"
					  "\n- Precio vuelo Latam:\n\n"

					  "3. Calcular todos los costos:"
					  "\na) Tarjeta de débito (descuento 10%)"
					  "\nb) Tarjeta de crédito (interés 25%)"
					  "\nc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)"
					  "\nd) Mostrar precio por km (precio unitario)"
					  "\ne) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n"

					  "4. Informar Resultados"
					  "\nLatam:"
					  "\na) Precio con tarjeta de débito:"
					  "\nb) Precio con tarjeta de crédito:"
					  "\nc) Precio pagando con bitcoin:"
					  "\nd) Precio unitario:"
					  "\nAerolíneas:"
					  "\na) Precio con tarjeta de débito:"
					  "\nb) Precio con tarjeta de crédito:"
					  "\nc) Precio pagando con bitcoin:"
					  "\nd) Precio unitario:"
					  "\nLa diferencia de precio es:\n\n"

					  "5. Carga forzada de datos\n\n"

					  "6. Salir\n",

					  "----------------------------\n\n"

					  "1. Ingresar Kilómetros:\n\n"

					  					  "2. Ingresar Precio de Vuelos:"
					  					  "\n- Precio vuelo Aerolíneas:"
					  					  "\n- Precio vuelo Latam:\n\n"

					  					  "3. Calcular todos los costos:"
					  					  "\na) Tarjeta de débito (descuento 10%)"
					  					  "\nb) Tarjeta de crédito (interés 25%)"
					  					  "\nc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)"
					  					  "\nd) Mostrar precio por km (precio unitario)"
					  					  "\ne) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n"

					  					  "4. Informar Resultados"
					  					  "\nLatam:"
					  					  "\na) Precio con tarjeta de débito:"
					  					  "\nb) Precio con tarjeta de crédito:"
					  					  "\nc) Precio pagando con bitcoin:"
					  					  "\nd) Precio unitario:"
					  					  "\nAerolíneas:"
					  					  "\na) Precio con tarjeta de débito:"
					  					  "\nb) Precio con tarjeta de crédito:"
					  					  "\nc) Precio pagando con bitcoin:"
					  					  "\nd) Precio unitario:"
					  					  "\nLa diferencia de precio es:\n\n"

					  					  "5. Carga forzada de datos\n\n"

					  					  "6. Salir\n"
					  "----------------------------\n"
				      "Opcion invalida, reingrese (1-6): ", 1, 6);


			switch(opcion)
			{
			case 1:

				km = pedirDouble("Ingrese los km: ", "Error, ingrese un numero valido", 1, 99999999);

				flagKm=1;

				system("pause");
				system("cls");

				break;

			case 2:
				if(flagKm==1){
				precioAerolineas = pedirDouble("Ingrese precio de Aerolineas","Error. Ingrese un precio valido", 0, 99999999);
				precioLatam = pedirDouble("Ingrese precio de Latam","Error. Ingrese un precio valido", 0, 99999999);
				flagPrecioAerolineas=1;
				flagPrecioLatam=1;

				}else{

					printf("Error, primero debe ingresar los kilometros (opcion 1)\n\n");
				}

				system("pause");
				system("cls");

				break;

			case 3:
				if(flagPrecioAerolineas==1 && flagPrecioLatam==1){

					precioConDescuentoLatam= calcularDescuento(precioLatam);
					precioConDescuentoAerolineas= calcularDescuento(precioAerolineas);
					precioConInteresLatam= calcularInteres(precioLatam);
					precioConInteresAerolineas= calcularInteres(precioAerolineas);
					precioEnBitcoinLatam=convertirPrecio(precioLatam);
					precioEnBitcoinAerolineas=convertirPrecio(precioAerolineas);
					precioPorKmLatam=precioLatam/km;
					precioPorKmAerolineas=precioAerolineas/km;
					diferenciaDePrecio=precioLatam-precioAerolineas;

					flagCalcular=1;

					printf("¡Calculos realizados exitosamente! Ingrese el numero 4 para mostrar los resultados\n");


				}else{

					printf("Error, primero debe ingresar el precio de ambos vuelos (opcion 2)\n\n");
				}


				system("pause");
				system("cls");

				break;

			case 4:
				if(flagCalcular==1){
				printf("\nKMs ingresados: %.2lf"
						"\n\nPrecio Latam: %.2lf"
						"\na) Precio con tarjeta de débito: $ %.2lf"
						"\nb) Precio con tarjeta de crédito: $ %.2lf"
						"\nc) Precio pagando con bitcoin: %.2lf BTC"
						"\nd) Precio unitario: $ %.2lf"
						"\n\nPrecio Aerolíneas: %.2lf"
						"\na) Precio con tarjeta de débito: $ %.2lf"
						"\nb) Precio con tarjeta de crédito: $ %.2lf"
						"\nc) Precio pagando con bitcoin: %.2lf BTC"
						"\nd) Precio unitario: $ %.2lf"
						"\nLa diferencia de precio es : $ %.2lf\n", km, precioLatam, precioConDescuentoLatam, precioConInteresLatam, precioEnBitcoinLatam, precioPorKmLatam, precioAerolineas, precioConDescuentoAerolineas, precioConInteresAerolineas, precioEnBitcoinAerolineas, precioPorKmAerolineas, diferenciaDePrecio);

				}else{

					printf("Error, primero debe calcular los costos(opcion 3)\n\n");
				}

				system("pause");
				system("cls");

				break;

			case 5:

				km= 7090;
				precioAerolineas= 162965;
				precioLatam= 159339;

				precioConDescuentoLatam= calcularDescuento(precioLatam);
				precioConDescuentoAerolineas= calcularDescuento(precioAerolineas);
				precioConInteresLatam= calcularInteres(precioLatam);
				precioConInteresAerolineas= calcularInteres(precioAerolineas);
				precioEnBitcoinLatam=convertirPrecio(precioLatam);
				precioEnBitcoinAerolineas=convertirPrecio(precioAerolineas);
				precioPorKmLatam=precioLatam/km;
				precioPorKmAerolineas=precioAerolineas/km;
				diferenciaDePrecio=precioLatam-precioAerolineas;


				printf("\nKMs ingresados: %.2lf"
						"\n\nPrecio Latam: %.2lf"
						"\na) Precio con tarjeta de débito: $ %.2lf"
						"\nb) Precio con tarjeta de crédito: $ %.2lf"
						"\nc) Precio pagando con bitcoin: %.2lf BTC"
						"\nd) Precio unitario: $ %.2lf"
						"\n\nPrecio Aerolíneas: %.2lf"
						"\na) Precio con tarjeta de débito: $ %.2lf"
						"\nb) Precio con tarjeta de crédito: $ %.2lf"
						"\nc) Precio pagando con bitcoin: %.2lf BTC"
						"\nd) Precio unitario: $ %.2lf"
						"\nLa diferencia de precio es : $ %.2lf\n\n", km, precioLatam, precioConDescuentoLatam, precioConInteresLatam, precioEnBitcoinLatam, precioPorKmLatam, precioAerolineas, precioConDescuentoAerolineas, precioConInteresAerolineas, precioEnBitcoinAerolineas, precioPorKmAerolineas, diferenciaDePrecio);

				system("pause");
				system("cls");


				break;

			case 6:


				printf("Eligio salir, fin del programa.\n"
						"-------__|__\n"
						"------oo(_)oo------\n\n");

				system("pause");

				break;

			}

		}while(opcion != 6);

	return EXIT_SUCCESS;

}
