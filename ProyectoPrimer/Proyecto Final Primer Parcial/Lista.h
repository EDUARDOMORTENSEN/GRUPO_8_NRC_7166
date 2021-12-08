#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Persona.h"
#include "Maestro.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <sstream>

class Lista
{
	private:
		Nodo *primero = NULL;
	public:
		void insertarCola(Persona persona);
		void eliminarCola();
		void imprimir();
		void insertarCabeza(Persona persona);
		void eliminarCabeza();
		Persona buscarPersona(string cedula);
		Nodo *getPrimero();
		std::string generarCorreo(Nodo* primero, Persona persona);
		bool buscarDuplicado(string cedula);


		void insertarColaMaestro(Maestro maestro);
		void eliminarColaMaestro();
		void imprimirMaestro();
		void insertarCabezaMaestro(Maestro maestro);
		void eliminarCabezaMaestro();
		Maestro buscarMaestro(string primerNombre);


		std::string generarCorreo(Nodo* primero, Maestro maestro);



};

#endif
