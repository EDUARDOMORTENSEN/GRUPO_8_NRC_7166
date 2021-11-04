#include <iostream>
#include <stdio.h>
#include "Procesos.h"

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::divisionDeFracciones() {
	return (( getValor1()*getValor4())+(getValor2()*getValor3()))/(getValor2() + getValor4());
}
