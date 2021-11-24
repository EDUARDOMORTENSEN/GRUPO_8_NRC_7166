/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H
#include "Nodo.h"
#include <iostream>
class ListaCircularDoble

{
    public:
    ListaCircularDoble();
    void insertar(int);
    bool eliminar(int);
    void imprimir();
    private:
    Nodo *primero;
    Nodo *ultimo;
};
#endif
