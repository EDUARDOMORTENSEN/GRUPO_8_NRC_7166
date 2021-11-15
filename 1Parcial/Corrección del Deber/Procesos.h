#ifndef PROCESOS_H_INCLUDED
#define PROCESOS_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "Operaciones.h"

#endif // PROCESOS_H_INCLUDED



template <typename tipoDato>
tipoDato Operaciones<tipoDato>::divisionDeFracciones() {
	return (( getValor1()*getValor4())+(getValor2()*getValor3()))/(getValor2() + getValor4());
}
