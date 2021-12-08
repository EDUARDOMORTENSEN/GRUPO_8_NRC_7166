#include "Persona.h"
#include "Maestro.h"

Maestro::Maestro()
{
	this->primerNombre = "";
	this->apellido = "";
	this->correo = "";
}

Maestro::~Maestro()
{
}


Maestro::Maestro(string _primerNombre,string _apellido,string _materiadicta,int _nrc){
	this->primerNombre = _primerNombre;
	this->apellido = _apellido;
	this->materiadicta= _materiadicta;
	this->nrc=_nrc;
	this->correo = "";
}

void Maestro::setPrimerNombre(string _primerNombre){
	this->primerNombre = _primerNombre;
}
string Maestro::getPrimerNombre(){
	return this->primerNombre;
}

void Maestro::setApellido(string _apellido){
	this->apellido = _apellido;
}
string Maestro::getApellido(){
	return this->apellido;
}
void Maestro::setCorreo(string _correo){
	this->correo = _correo;
}
string Maestro::getCorreo(){
	return this->correo;
}
void Maestro::setMateriadicta(string _materiadicta){
	this->materiadicta= _materiadicta;
}
string Maestro::getMateriadicta(){
	return this->materiadicta;
}


void Maestro::setNrc(int _nrc){
	this->nrc= _nrc;
}
int Maestro::getNrc(){
	return this->nrc;
}

