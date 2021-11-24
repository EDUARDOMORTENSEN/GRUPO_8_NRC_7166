/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#include <iostream>
#define ASCENDENTE 1
#define DESCENDENTE 0
using namespace std;
class nodo {
public:
 nodo(int v, nodo* sig = NULL, nodo* ant = NULL) :
 valor(v), siguiente(sig), anterior(ant) {}
private:
 int valor;
 nodo* siguiente;
 nodo* anterior;
 friend class lista;
};
