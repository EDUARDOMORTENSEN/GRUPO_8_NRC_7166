#include "Nodo.h"

Nodo::Nodo(Persona _persona){
	persona = _persona;
}

Nodo::~Nodo(){

}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente){
	siguiente = _siguiente;
}

void Nodo::setPersona(Persona _persona){
	persona = _persona;
}

Persona Nodo::getPersona(){
	return persona;
}






Nodo::Nodo(Maestro _maestro){
	maestro = _maestro;
}
void Nodo::setMaestro(Maestro _maestro){
	maestro = _maestro;
}

Maestro Nodo::getMaestro(){
	return maestro;
}


