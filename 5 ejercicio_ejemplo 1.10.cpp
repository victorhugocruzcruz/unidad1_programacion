#include "iostream"
#include "stdio.h"
using namespace std;

int main()
{
	float Altura,Base;
	float SUPERFICIE,PERIMETRO;
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.10 calcula la superficie y el perimetro de un rectangulo" << "\n";
	
	//Se declaran los numeros que se sumaran (puden ser decimales)
	
	 // Se pide es primer numero
	cout << "Por favor ingrese el valor de la base: " << "\n";
	//se le asigna el valor a Base
	cin >> Base;
	//Se pide el segundo numero
	cout << "Por favor ingresa el valor de la altura: " << "\n";
	//Se le asigna el valor a Altura
	cin >> Altura;
	
	SUPERFICIE=Base*Altura;
	PERIMETRO=2*(Base+Altura);
	
	//Se muestra el resultado.
	printf ("\n La Superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El Perimetro del rectangulo es %5.2f \n", PERIMETRO);

	return 0;
}
