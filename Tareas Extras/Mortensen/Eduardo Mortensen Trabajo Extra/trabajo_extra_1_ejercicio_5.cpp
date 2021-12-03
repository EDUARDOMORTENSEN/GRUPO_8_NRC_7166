/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen							                     *
 *				Fecha de creación: 03/11/2021										 *
 *				Fecha de modificación: 03/11/2021									 *
 *************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

template <typename T>
 void AreaDelTriangulo(T base, T altura);


template < typename T>
 void AreaDelTriangulo(T base, T altura){
 T resultado;
 resultado= (base+altura)/2;
 cout<<"el resultado del area del triangulo es "<<resultado<<endl;
 }

int main ()
{
    int x = 4;
    int y = 3;

    double z1 = 3.7;
    double z2 = 4.6;

    AreaDelTriangulo(x,y);
    AreaDelTriangulo(z1,z2);

   return 0;
}
