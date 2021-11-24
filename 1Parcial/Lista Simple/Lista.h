/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 23/11/2021									 *
 *************************************************************************************/
#pragma once
#include "Nodo.h"
#include <iostream>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
		bool listaVacia(){
			return (this->primero==NULL);
		}
		public:
			Lista(){
				this->primero=NULL;
				this->actual=NULL;
			}
		void insertar(int val){
			Nodo *nuevo=new Nodo(val);
			if(listaVacia()){
				this->primero=nuevo;
			}
			else{
				this->actual->siguiente=nuevo;
			}
			this->actual=nuevo;
		}
		void mostrar(){
			Nodo *tmp=this->primero;
			while(tmp){
				cout<<tmp->valor<<"-->";
				tmp=tmp->siguiente;
			}
			cout<<"NULL";
		}
};
