#include <iostream>
#include <vector>
#define DIMENCIONES 2

using namespace std;

template <class T>

class Matriz {

    private:
        T matriz[DIMENCIONES][DIMENCIONES];

    public:
        Matriz();

        Matriz(T dato);

        ~Matriz();


        T         get(unsigned fil, unsigned colum) const;


        void      set(unsigned fil, unsigned colum, T dato);


        void      mostrar(string titulo);


        Matriz    operator+(const Matriz<T> matriz);

        Matriz   operator-(const Matriz<T> matriz);

        void      operator=(const Matriz<T> matriz);

        void      operator+=(const Matriz<T> matriz);
};

template <class T>
Matriz<T>::Matriz()
{
    for(unsigned i = 0; i < DIMENCIONES; i++)
    {
        for(unsigned j = 0; j < DIMENCIONES; j++)
        {
            this->matriz[i][j] = 0;
        }
    }
}

template <class T>
Matriz<T>::Matriz(T dato)
{
    for(unsigned i = 0; i < DIMENCIONES; i++)
    {
        for(unsigned j = 0; j < DIMENCIONES; j++)
        {
            this->matriz[i][j] = dato;
        }
    }
}

template <class T>
Matriz<T>::~Matriz()
{

}

template <class T>
T Matriz<T>::get(unsigned fil, unsigned colum) const
{
    return this->matriz[fil][colum];
}

template <class T>
void Matriz<T>::set(unsigned fil, unsigned colum, T dato)
{
    this->matriz[fil][colum] = dato;
}

template <class T>
void Matriz<T>::mostrar(string titulo)
{
    cout << titulo << endl << endl;

    for(unsigned i = 0; i < DIMENCIONES; i++)
    {
        for(unsigned j = 0; j < DIMENCIONES; j++)
        {
            cout << "  " << this->matriz[i][j] << "\t";
        }

        cout << endl;
    }

    cout << endl;
}

template<class T>
Matriz<T> Matriz<T>::operator-(const Matriz<T> matriz)
{
    Matriz<T> resultado;

    for(unsigned i = 0; i < DIMENCIONES; i++)
    {
        for(unsigned j = 0; j < DIMENCIONES; j++)
        {
            T resta = this->matriz[i][j] - matriz.get(i, j);
            resultado.set(i , j, resta);
        }
    }

    return resultado;
}

template<class T>
void Matriz<T>::operator=(const Matriz<T> matriz)
{
    for(unsigned i = 0; i < DIMENCIONES; i++)
    {
        for(unsigned j = 0; j < DIMENCIONES; j++)
        {
            this->matriz[i][j] = matriz.get(i, j);
        }
    }
}

template<class T>
void Matriz<T>::operator+=(const Matriz<T> matriz)
{
    for(unsigned i = 0; i < DIMENCIONES; i++)
    {
        for(unsigned j = 0; j < DIMENCIONES; j++)
        {
            this->matriz[i][j] += matriz.get(i, j);
        }
    }
}

int main()
{
    Matriz<float> X(98549);
    Matriz<float> Y(95825);
    Matriz<float> Z;

    cout<<"Resta de matrices"<<endl;
    Z = X - Y;
    Z.mostrar("C = X - Y");

    Z += X;
    Z.mostrar("Z += X");

    system("Pause");
    return 0;
}
