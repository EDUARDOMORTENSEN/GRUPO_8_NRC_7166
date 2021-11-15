#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED



#endif // OPERACIONES_H_INCLUDED
#include <stdio.h>
#include <iostream>


using namespace std;

template <typename tipoDato>

class Operaciones {
private:
	tipoDato valor1;
	tipoDato valor2;
	tipoDato valor3;
	tipoDato valor4;
public:

	Operaciones(tipoDato _valor1, tipoDato _valor2, tipoDato _valor3, tipoDato _valor4) {

		valor1 = _valor1;
		valor2 = _valor2;
		valor3= _valor3;
		valor4= _valor4;

	}

	tipoDato setValor1(int _valor1) {

		valor1 = _valor1;

	}

	tipoDato setValor2(int _valor2) {

		valor2 = _valor2;

	}


	tipoDato getValor1() {

		return valor1;

	}

	tipoDato getValor2() {

		return valor2;

	}

	tipoDato setValor3(int _valor3) {

		valor3 = _valor3;

	}

	tipoDato setValor4(int _valor4) {

		valor4 = _valor4;

	}


	tipoDato getValor3() {

		return valor3;

	}

	tipoDato getValor4() {

		return valor4;

	}


	tipoDato divisionDeFracciones();
};

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::divisionDeFracciones() {
	return (( getValor1()*getValor4())+(getValor2()*getValor3()))/(getValor2() + getValor4());
}
