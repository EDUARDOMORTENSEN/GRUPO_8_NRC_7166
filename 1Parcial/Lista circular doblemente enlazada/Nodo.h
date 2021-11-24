/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#ifndef NODO_H
#define NODO_H
#include<stdlib.h>
class Nodo {
    public:
    Nodo(int);
    int getDato();
    void setDato(int);
    Nodo *getSiguiente();
    void setSiguiente(Nodo *);
    Nodo *getAnterior();
    void setAnterior(Nodo *);
    private:
    int dato;
    Nodo *siguiente;
    Nodo *anterior;

    };
#endif
