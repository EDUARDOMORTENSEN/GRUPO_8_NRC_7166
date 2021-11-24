/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#include "Nodo.h"
Nodo::Nodo(int _dato)
{
    dato = _dato;
    siguiente = NULL;
    anterior = NULL;
}
int Nodo::getDato(){
    return dato;
}
void Nodo::setDato(int _dato){
    dato = _dato;
}
Nodo *Nodo::getSiguiente(){
    return siguiente;
}
void Nodo::setSiguiente(Nodo *_siguiente){
    siguiente = _siguiente;
}
Nodo *Nodo::getAnterior(){
    return anterior;
}
void Nodo::setAnterior(Nodo *_anterior){
    anterior = _anterior;

}

