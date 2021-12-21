/**         Universidad de las Fuerzas Armadas ESPE                       ****
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban                            *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 15/12/2021										 *
 *				Fecha de modificación: 16/12/2021									 *
 *****************************/
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
template <typename T>

class Operaciones {
    //int numero, x;
    T n1;
    T n2;
    T n3;
 public:
     void maximoComunDivisorConTresNumeros (T n1, T n2, T n3);
     void minimoComunDivisorConTresParametros(T n1, T n2, T n3);
     void maximoComunDivisorConNParametros();
     void minimoComunMultiploConNParametros();
     void getN1();
     void getN2();
     void getN3();
     T setN1(T n1);
     T setN2(T n2);
     T setN3(T n3);
     Operaciones(T _n1, T _n2, T _n3)
     {
         n1=n1;
         n2=n2;
         n3=n3;
     }
     Operaciones()
     {

     };
};

int mcd1(int z, int u, int v)
 {
     int t, maximo;
     while (u > 0)
     {
         if (u < v)
         {
             t = u;
             u = v;
             v = t;
             if(0 == z%v)
                maximo = v;
        }
        u = u - v;
    }

 return maximo;

 }




template <typename T>
void Operaciones<T>::maximoComunDivisorConTresNumeros (T n1, T n2, T n3)
{
    auto mcda = [&](int& x) -> int {
        int mcda=0;
        int mayor;
        mayor = n1;
    if ( n2 > mayor )
    {
        mayor = n2;
        n2 = n1;
    }
    if ( n3 > mayor )
    {
        mayor = n3;
        n1 = mayor;
    }
    mcda = mcd1(mayor, n2, n3);
    return mcda;
    };
    int x;
    cout <<"El maximo comun divisor(MCD) es: "<< mcda(x) << endl;
}


template <typename T>
void Operaciones<T>::minimoComunDivisorConTresParametros(T n1, T n2, T n3)
{

    int x;
    auto mcmConTresNumeros = [=](int& x) -> int {
    int mcm=0;
    int i;
    int maximo;
    maximo = n1;

    if ( n2 > maximo )
        maximo = n2;

    if ( n3 > maximo )
        maximo = n3;
    i = maximo;
    while ((i % n1 != 0) || (i % n2 != 0) || (i % n3 != 0))
        i++;
    mcm=i;

        return mcm;
    };
    cout <<"El minimo comun multiplo (MCM) es: "<< mcmConTresNumeros(x)  << endl;
}


template <typename T>
void Operaciones<T>::minimoComunMultiploConNParametros()
{
    int numero, x;
    int residuo, mcm, i, n, mcd;
    int producto;
    printf("Ingrese la cantidad de numeros para calcular el minimo: ");
    scanf("%d", &n);

    auto mcmConParametros = [&](int& x) -> int {

    for (i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcm = numero;
            producto = numero;
        }
        else
        {
            producto = mcm * numero;

            do
            {
                residuo = mcm % numero;
                mcm = numero;
                numero = residuo;
            } while (residuo != 0);

            mcm = producto / mcm;
        }
    }
    return mcm;
    };
    cout<<"minimo comun multiplo con n parametros:\n"<<mcmConParametros(x)<<endl;
}

template <typename T>
void Operaciones<T>::maximoComunDivisorConNParametros()
{
    int numero, x;
    int residuo, mcm, i, n, mcd;
    int producto;
    printf("Ingrese la cantidad de numeros para calcular el maximo: ");
    scanf("%d", &n);



    auto mcdConParametros = [&](int& x) -> int {
    for (i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcd = numero;
        }
        else
        {
            do
            {
                residuo = mcd % numero;
                mcd = numero;
                numero = residuo;
            } while (residuo != 0);
        }
    }
return mcd;
    };
    cout<<"maximo comun divisor con n parametros: \n" <<mcdConParametros(x)<<endl;
}
int main() {
    Operaciones<int> O1;
    O1.maximoComunDivisorConTresNumeros(2,3,4);
    O1.minimoComunDivisorConTresParametros(2,3,4);
    Operaciones<int> O2;
    O2.maximoComunDivisorConNParametros();
    Operaciones<int> O3;
    O3.minimoComunMultiploConNParametros();
}





