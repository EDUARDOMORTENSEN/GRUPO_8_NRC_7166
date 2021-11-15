#include <iostream>
#include <vector>
#define TAMANO 6

/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen							                 *
 *				Fecha de creación: 7/11/2021										 *
 *				Fecha de modificación: 7/11/2021									 *
 *************************************************************************************/

using namespace std;

template <class T>

class Matriz {

    private:
        T matriz[TAMANO][TAMANO];

    public:
        Matriz();

        Matriz(T valor);

        ~Matriz();

        T         get(unsigned fila, unsigned columna) const;

        void      set(unsigned fila, unsigned columna, T valor);

        void      mostrar(string titulo);

        Matriz    operator+(const Matriz<T> matriz);

        Matriz   operator-(const Matriz<T> matriz);

        void      operator=(const Matriz<T> matriz);

        void      operator+=(const Matriz<T> matriz);
};


template <class T>
Matriz<T>::Matriz()
{
    for(unsigned i = 0; i < TAMANO; i++)
    {
        for(unsigned j = 0; j < TAMANO; j++)
        {
            this->matriz[i][j] = 0;
        }
    }
}


template <class T>
Matriz<T>::Matriz(T valor)
{
    for(unsigned i = 0; i < TAMANO; i++)
    {
        for(unsigned j = 0; j < TAMANO; j++)
        {
            this->matriz[i][j] = valor;
        }
    }
}

template <class T>
Matriz<T>::~Matriz()
{
}

template <class T>
T Matriz<T>::get(unsigned fila, unsigned columna) const
{
    return this->matriz[fila][columna];
}


template <class T>
void Matriz<T>::set(unsigned fila, unsigned columna, T valor)
{
    this->matriz[fila][columna] = valor;
}


template <class T>
void Matriz<T>::mostrar(string titulo)
{
    cout << titulo << endl << endl;

    for(unsigned i = 0; i < TAMANO; i++)
    {
        for(unsigned j = 0; j < TAMANO; j++)
        {
            cout << "  " << this->matriz[i][j] << "\t";
        }

        cout << endl;
    }

    cout << endl;
}


template<class T>
void Matriz<T>::operator=(const Matriz<T> matriz)
{
    for(unsigned i = 0; i < TAMANO; i++)
    {
        for(unsigned j = 0; j < TAMANO; j++)
        {
            this->matriz[i][j] = matriz.get(i, j);
        }
    }
}


int main()
{
    Matriz<float> A(4.3f);
    Matriz<float> B(6.1f);
    Matriz<float> C(9.6f);

    A.mostrar("A = ");
    B.mostrar("B = ");
    C.mostrar("C = ");

    C = A;
    C.mostrar("C = A");

    return 0;
}
