#include "iostream"
using namespace std;

int main()
{	/*Problema 1.5 Construya un diagrama de flujo que dado como datos el radio y la altura
	  de un cilindro, calcule e imprima el area y su volumen.*/
	  
	float RADIO, ALTURA, VOLUMEN, AREA;
	const float PI=3.141592;
	
//Entrada de datos
cout<<" Escribe la medida del radio " << "\n";
cin >> RADIO;

cout<<" Escriba la medida de la altura" << "\n";
cin >> ALTURA;

//CALCULOS
VOLUMEN=PI*(RADIO*RADIO)*ALTURA;
AREA=2*PI*RADIO*ALTURA;

//SE IMPRIIME RESULTADOS
	cout<< " El volumen del cilindro es "<<VOLUMEN<< "\n";
	cout<< " El area del cilindro es "<<AREA<< "\n";
  return 0;
}
