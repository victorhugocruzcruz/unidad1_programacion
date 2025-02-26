#include "iostream"
#include "string"
#include <conio.h>

using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.6 Escribe los datos en orden inverso" << "\n";
	
	//se declaran los números que se sumarán (pueden ser decimales)
	int A,B,C,D;
	char oprimir_tecla_para_terminar;
	//se pide el primer número
	cout << "por favor ingrese el primer valor A: " << "\n";
	
	//se asigna el primer valor a A
	cin >> A;
	
	//se piede el segundo número
	cout << "por favor ingrese el segundo valor B: " << "\n";
	
	//se asigna el segundo valor a B
	cin >> B;
	
	//se pide el tercer numero
	cout << "por favor ingrese el tercer valor C: " << "\n";
	
	//se asigna el segundo valor a C
	cin >> C;
	
	//se pide el tercer numero
	cout << "por favor ingrese el tercer valor D: " << "\n";
	
	//se asigna el segundo valor a D
	cin >> D;
	
	//se muestra el resultado.
	cout << D << "," << C << "," << B << "," << A;
	oprimir_tecla_para_terminar=getch();	
	return 0;
}
