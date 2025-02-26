#include "iostream"
using namespace std;

int main()
{	/*Problema 1.6 Construya un diagrama de flujo que calcule e imprima el numero de segundos
	  que hay en un determinado numero de dias.*/
	int DIAS;
	int SEGUNDOS;
	
//Entrada de datos
cout<< " Escirba el numero de dias para calcular los segundos" << "\n";
cin>> DIAS;

//CALCULO
SEGUNDOS= DIAS*24*60*60;

//SE IMPRIME RESULTADOS
	cout<< " En "<<DIAS<<" dias, hay "<<SEGUNDOS<<" segundos" << "\n";
  return 0;
}
