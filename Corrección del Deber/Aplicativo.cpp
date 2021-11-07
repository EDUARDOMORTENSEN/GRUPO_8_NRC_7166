/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 27/10/2021										 *
 *				Fecha de modificación: 4/11/2021									 *
 *************************************************************************************/

#include <iostream>
#include <stdio.h>
#include "Operaciones.h"


using namespace std;

int main(int argc, char** argv) {



	float valor1, valor2,valor3, valor4;
	cout << "Ingrese el numerador 1: ";
	cin >> valor1;
	cout << "Ingrese el denominador 1: ";
	cin >> valor2;
	cout << "Ingrese el numerador 2: ";
	cin >> valor3;
	cout << "Ingrese el denominador 2: ";
	cin>>  valor4;

	Operaciones <float> operacion(valor1, valor2, valor3, valor4);

	cout << "division de fracciones= " << operacion.divisionDeFracciones() << endl;

	system ("Pause");

	return 0;

}
