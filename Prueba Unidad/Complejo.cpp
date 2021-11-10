
#include "Complejo.h"

template<class T>
Complejo<T>::Complejo() {

	this->real=real;
	this->img=img;
}

template<class T>
void Complejo<T>::setReal() {

	this->real=real;
}

template<class T>
void Complejo<T>::setImg() {

	this->img=img;
}

template<class T>
T Complejo<T>::getReal() {

	return this->real;
}

template<class T>
T Complejo<T>::getImg() {

	return this->img;
}

template<class T>
Complejo<T> Complejo<T>::operator +() {

	this->img+= A.img;
	this->real+= A.real;
	return *this;
}

template<class T>
Complejo<T> Complejo<T>::operator -() {

	this->img-= A.img;
	this->real-= A.real;
	return *this;
}

