/******  Universidad de las Fuerzas Armadas ESPE  ********
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban                            *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 14/12/2021										 *
 *				Fecha de modificación: 14/12/2021									 *
 *****************************/

#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

//Negar cada elemento en le vector objeto, asume tipo de datos asignados
template <typename T>
void multiplicarTodoPorMenosUno(vector<T>& v)
{
    for_each(v.begin(), v.end(), [](T& n) { n = -n; });
}

// Imprimir el vector
template <typename T>
void imprimir(const vector<T>& v)
{
    for_each(v.begin(), v.end(), [](const T& n) { cout << n << endl; });
}
// elevar al cuadrado
template <typename T>
void elevarAlCuadrado(vector<T>& v)
{
    for_each(v.begin(), v.end(), [](T& n) { n=pow(n,2); });
}

int main()
{
    //Crear un vector con elementos designados
    vector<int> v;
    v.push_back(34);
    v.push_back(43);
    v.push_back(56);

    imprimir(v);
    elevarAlCuadrado(v);
    cout << "Despues de elevar al cuadrado" << endl;
    imprimir(v);
    multiplicarTodoPorMenosUno(v);


    cout << "Despues de multiplicar menos uno" << endl;
    imprimir(v);
}
