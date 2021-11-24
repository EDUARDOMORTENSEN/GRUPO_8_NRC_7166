/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#pragma once
#include <iostream>
#include "Lista.h"
using namespace std;
int main(int argc, char** argv) {
	Lista lst;
	lst.insertar(3);
	lst.insertar(13);
	lst.insertar(23);
	lst.insertar(33);
	lst.insertar(43);
	lst.mostrar();
	return 0;
}
