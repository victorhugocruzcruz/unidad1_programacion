#include "iostream"
#include "iostream"
using namespace std;

int main()
{	 //Problema 1.3 Escribe un programa tal que dado como datos el nombre del dinosaurio
	// su peso y longitud, expresado estos ultimos en libras y pies respectivamente
	// escriba el nombre del dinosaurio, su peso en kilogramos y la longitud expresada en metros
	
	//Declaracion de variables
	string NOMBRE;
	float PESOTONELADAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	
//Entrada de datos

cout<<"Escribe el nombre del dinosaurio" << "\n";
cin>>NOMBRE;

cout<<"Escribe el peso del dinosaurio en Toneladas" << "\n";
cin>>PESOTONELADAS;

cout<<"Escribe la longitud del dinosaurio en Pies" << "\n";
cin>>LONGITUDENPIES;


//CALCULOS
PESOENKILOS=PESOTONELADAS*1000;
LONGITUDENMETROS=LONGITUDENPIES*0.3047;


//SE IMPRIME RESULTADOS
	cout<<" El peso en Kilos del dinosaurio " <<NOMBRE<< " es "<<PESOENKILOS<<" y la longitud en metros es "<<LONGITUDENMETROS<< "\n";
	return 0;
}
