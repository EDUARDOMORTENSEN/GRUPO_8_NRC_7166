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
    lista Lista;
    Lista.Insertar(20);
    Lista.Insertar(10);
    Lista.Insertar(40);
    Lista.Insertar(30);
    Lista.Mostrar(ASCENDENTE);
    Lista.Mostrar(DESCENDENTE);
    Lista.Primero();
    cout << "Primero: " << Lista.ValorActual() << endl;
    Lista.Ultimo();
    cout << "Ultimo: " << Lista.ValorActual() << endl;
    Lista.Borrar(10);
    Lista.Borrar(15);
    Lista.Borrar(45);
    Lista.Borrar(40);
    Lista.Mostrar(ASCENDENTE);
    Lista.Mostrar(DESCENDENTE);
    cin.get();
    return 0;


}
