#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
	int NUM,CUA,CUB;	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.9 Calcular el cuadrado y el cubo de un numero entero positivo" << "\n";
	
	//Se pide el valor NUM
	cout << "Por favor ingrese el valor de NUMERO: " << "\n";
	//Se asigna el primer valor a A
		cin >> NUM;
		
	//Resolvemos la formula del problema
	CUA=NUM*NUM;
	CUB=CUA*NUM;
	//Enviamos el resultado de CUA y CUB a la pantalla
	cout << "EL cuadrado de " <<NUM<<" es: "<<CUA<<" y el cubo es: "<<CUB<<endl;
	return 0;
}
