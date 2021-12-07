#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED



#include <iostream>
#include  <ctime>

#define ASCENDENTE 1
#define DESCENDENTE 0

using namespace std;
class nodo {
    public:
        nodo(int v, nodo* sig = NULL, nodo* ant = NULL) :
        valor(v), siguiente(sig), anterior(ant) {}
    private:
        int valor;
        nodo* siguiente;
        nodo* anterior;
    friend class lista;
};



#endif // NODO_H_INCLUDED
