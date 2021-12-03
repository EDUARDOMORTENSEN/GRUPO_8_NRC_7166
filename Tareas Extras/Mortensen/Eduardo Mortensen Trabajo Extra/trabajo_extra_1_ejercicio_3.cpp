/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen							                     *
 *				Fecha de creación: 01/11/2021										 *
 *				Fecha de modificación: 01/11/2021									 *
 *************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

template <typename T>
 void Resta (T x, T y);


template < typename T>
 void Resta(T x, T y){
 T resultado;
 resultado= x-y;
 cout<<"resultado es: "<<resultado<<endl;
 }

int main ()
{
    int i = 160;
    int j = 130;
    double f1 = 33.4;
    double f2 = 22.9;

    Resta(i,j);
    Resta(f1, f2);

   return 0;
}
