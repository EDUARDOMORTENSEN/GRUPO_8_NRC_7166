/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#pragma once
#include <iostream>
class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo(int val, Nodo *sig=NULL){
			this->valor=val;
			this->siguiente=sig;
		}
	friend class Lista;
};
