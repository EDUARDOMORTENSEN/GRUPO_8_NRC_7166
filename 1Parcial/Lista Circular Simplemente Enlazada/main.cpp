//#pragma once
#include <iostream>
#include "ListaSimple.h"
using namespace std;
int main(int argc, char** argv) {
	ListaSimple lst;
	lst.insertar(3);
	lst.insertar(13);
	lst.insertar(23);
	lst.insertar(33);
	lst.insertar(43);
	lst.mostrar();
	return 0;
}


