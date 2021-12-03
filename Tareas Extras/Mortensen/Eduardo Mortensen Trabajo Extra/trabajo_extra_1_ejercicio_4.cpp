/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen							                     *
 *				Fecha de creación: 02/11/2021										 *
 *				Fecha de modificación: 02/11/2021									 *
 *************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

template <typename T>
 void AreaDelTrapecio (T baseMayor, T baseMenor, T altura);


template < typename T>
 void AreaDelTrapecio (T baseMayor, T baseMenor, T altura){
 T resultado;
 resultado= ((baseMayor+baseMenor)/2) * altura;
 cout<<"el resultado del area del triangulo: "<<resultado<<endl;
 }

int main ()
{
    int i = 360;
    int j = 230;
    int k = 120;
    double f1 = 53.4;
    double f2 = 22.9;
    double f3 = 44.9;

    AreaDelTrapecio(i,j,k);
    AreaDelTrapecio(f1, f2, f3);

   return 0;
}
