#include "iostream"
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1,CAL2,CAL3,CAL4,CAL5;
	
	//Mensaje de bienbenida
	cout << "Hola! Este programa 1.8 Promedio calificaciones"<< "\n" ;
  //Se pide la MATRICULA DEL ALUMNO
	 cout << "Por favor ingrese la matricula del alumno: " << "\n";
	//se asigna el primer valor a MAT
		cin >> MAT;
	//se pide la primera calificación
	cout << "Por favor ingrese la Primera calificacion" << "\n";
	//Se asingna el primer valor a CAL1
		cin >> CAL1;
	//Se pide la segunda calificación
	cout << "Por favor ingrese la segunda calificacion" << "\n";
	//Se le asigna el segundo valor a CAL2
		cin >> CAL2;
	//Se pide la tercera calificación
	cout << "Por favor ingrese la tercera calificacion" << "\n";
	//Se le asigna el tercer valor a CAL3
		cin >> CAL3;
	//Se pide la cuarta calificación
	cout << "Por favor ingrese la cuarta calificacion" << "\n";
	//Se le asigna el valor a CAL4
		cin >> CAL4;
	//Se pide la quinta calificación
	cout << "Por favor ingrese la quinta calificacion" << "\n";
	//Se le asigna el valor a CAL5
		cin >> CAL5;
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	//Se muestra el resultado
	printf ("\n El Promedio del alumno con matricula %d es %5.5f \n",MAT,PRO);
	cout << "\n EL promedio del alumno con matricula " << MAT <<" es "<<PRO <<"\n";
	return 0;
}
