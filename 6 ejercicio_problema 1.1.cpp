#include "iostream"
#include "string"

using namespace std;

int main()
{	 //Problema 1.1
	// Construya un diagrama de flujo que dado el costo de un articulo vendido y la cantidad
	//de dinero entregada por el cliente, calcule e implima el cambio que le debe entregar
	
	
	//Declaracion de variables
	float PRECIOPRODUCTO, DEVOLUCION;
	float PAGO;
	
//Entrada de datos

cout << "Escibe el costo del articulo" << "\n";
cin >> PRECIOPRODUCTO;

cout << "Escribe cuanto fue el pago del articulo" << "\n";
cin >> PAGO;

//CALCULO DE DEVOLUCION

DEVOLUCION= PAGO-PRECIOPRODUCTO;

//SE IMPRIMEN LOS RESULTADOS
	 cout << "El cambio del cliente es " <<DEVOLUCION;
	return 0;
}
