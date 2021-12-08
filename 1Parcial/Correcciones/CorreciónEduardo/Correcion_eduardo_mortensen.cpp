/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Issac Escobar							                     *
 *				Fecha de creación: 08/12/2021										 *
 *				Fecha de modificación: 08/12/2021									 *
 *************************************************************************************/

#include <iostream>
#include  <ctime>
#include "lista.h"
#include "fecha.h"


using namespace std;


int main(int argc, char** argv) {

    Lista lista;

    printf("\n");

    Fecha fecha;

	lista.mostrar();

    fecha.CalcularEdad();
    return 0;
}
