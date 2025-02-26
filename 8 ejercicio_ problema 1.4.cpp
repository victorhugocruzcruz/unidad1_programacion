#include "iostream"
using namespace std;

int main()
{	  /*Problema 1.4 construya un diagrama de flujo que resuelva el problema que tienen en una
		gasolineria. Los surtidores de La misma registran lo que "surten" en galones, pero el
		precio de la gasolina esta fijado en "litros". El programa debe calcular e imprimir lo
		que hay que cobrarle al cliente. Cada galon tiene 3.785 litros, y el precio del litro
		es 8.20.*/
	  //Declaracion de variables
	  
	float GALONES, TOTAL;
	const float GALON=3.785, PRECIOLITRO=8.20;

//Entrada de datos

cout<<"Escribe la cantidad de galones comprados por el cliente" << "\n";
cin>>GALONES;

//CALCULOS
TOTAL=GALONES*GALON*PRECIOLITRO;

//SE IMPRIMEN LOS RESULTADOS
	 cout<<"La cantidad de galones surtidos fue de	"<<GALONES<<", y el monto a pagar del cliente es de $"<<TOTAL<<" pesos " << "\n";
	return 0;
}
