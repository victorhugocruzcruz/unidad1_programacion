#include "iostream"
#include "math.h"
using namespace std;

int main()
{	/*Problema 1.7 Construya un diagrama de flujo tal que dado como datos de los tres lados de un triangulo
	 pueda determinar su area.*/
	//L1,L2,L3 representan los tres lados del triangulo
	
	float L1, L2, L3, S, AREA;
	const float PI=3.141592;

//Mesaje de bienvenida
cout<< " Hola! Este es un programa que te permite calcular el area de un triangulo teniendo como datos los tres lados del triangulo."<<"\n";
cout<< "\n";	
//Entrada de datos
cout<<" Escriba la medida del lado uno del triangulo. "<<"\n";
cin >> L1;

cout<<" Escriba la medida del lado dos del triangulo. "<<"\n";
cin >> L2;

cout<<" Escriba la medida del lado tres del triangulo. "<<"\n";
cin >> L3;

//CALCULOS
S=(L1+L2+L3)/2;
AREA=sqrt(S*(S-L1)*(S-L2)*(S-L3));

//SE IMPRIMEN RESULTADOS
	cout<<" El area del triangulo es de "<<AREA<<"\n";
	
  return 0; 
}
