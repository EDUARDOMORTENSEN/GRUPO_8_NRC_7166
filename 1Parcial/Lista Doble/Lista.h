#include "Nodo.h"
typedef nodo* pnodo;
class lista {
public:
    lista() : plista(NULL) {}
    ~lista();
    void Insertar(int v);
    void Borrar(int v);
    bool ListaVacia() { return plista == NULL; }
    void Mostrar(int);
    void Siguiente();
    void Anterior();
    void Primero();
    void Ultimo();
    bool Actual() { return plista != NULL; }
    int ValorActual() { return plista->valor; }
private:
    pnodo plista;
};
lista::~lista()
{
    pnodo aux;
    Primero();
    while (plista) {
            aux = plista;
    plista = plista->siguiente;
 delete aux;
 }
}

void lista::Insertar(int v)
{
    pnodo nuevo;
    Primero();
    if (ListaVacia() || plista->valor > v) {
            nuevo = new nodo(v, plista);
            if (!plista) plista = nuevo;
            else plista->anterior = nuevo;
 }
 else {
        while (plista->siguiente && plista->siguiente->valor <= v) Siguiente();
        nuevo = new nodo(v, plista->siguiente, plista);
        plista->siguiente = nuevo;
        if (nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
      }
}

void lista::Borrar(int v)

{
    pnodo nodo;
    nodo = plista;
    while (nodo && nodo->valor < v) nodo = nodo->siguiente;
    while (nodo && nodo->valor > v) nodo = nodo->anterior;
    if (!nodo || nodo->valor != v) return;
    if (nodo->anterior) // no es el primer elemento
        nodo->anterior->siguiente = nodo->siguiente;
    if (nodo->siguiente) // no el el último nodo
        nodo->siguiente->anterior = nodo->anterior;
    delete nodo;
}
void lista::Mostrar(int orden)
{
    pnodo nodo;
    if (orden == ASCENDENTE) {
            Primero();
    nodo = plista;
    while (nodo) {
            cout << nodo->valor << "-> ";
            nodo = nodo->siguiente;
                 }
}
    else {
            Ultimo();
            nodo = plista;
            while (nodo) {
                    cout << nodo->valor << "-> ";
            nodo = nodo->anterior;
 }
 }
 cout << endl;
}

void lista::Siguiente()
{
    if (plista) plista = plista->siguiente;
}
void lista::Anterior()
{
    if (plista) plista = plista->anterior;
}
void lista::Primero()
{
    while (plista && plista->anterior) plista = plista->anterior;
}
void lista::Ultimo()
{
    while (plista && plista->siguiente) plista = plista->siguiente;
}

