#ifndef NODO_H
#define NODO_H
#include "Persona.h"
#include "Maestro.h"
class Nodo
{
	public:
		Nodo(Persona _persona);
		~Nodo();
		Nodo *getSiguiente();
		void setSiguiente(Nodo *_siguiente);
		void setPersona(Persona _persona);
		Persona getPersona();




		Nodo(Maestro _maestro);
		void setMaestro(Maestro _maestro);
		Maestro getMaestro();


	protected:

	private:
		Persona persona;
		Nodo *siguiente =NULL;



		Maestro maestro;
};

#endif
