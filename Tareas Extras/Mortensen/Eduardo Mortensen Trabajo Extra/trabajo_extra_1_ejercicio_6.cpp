/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen							                     *
 *				Fecha de creación: 04/11/2021										 *
 *				Fecha de modificación: 04/11/2021									 *
 *************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

template <typename T>
 void Velocidad(T distancia, T tiempo);


template < typename T>
 void Velocidad(T distancia, T tiempo){
 T resultado;
 resultado= distancia/tiempo;
 cout<<"el resultado del calculo de la velocidad es:"<<resultado<<endl;
 }

int main ()
{
    float w = 12;
    float s = 60;

    double q1 = 28.7;
    double q2 = 6.6;

    Velocidad(w,s);
    Velocidad(q1,q2);

   return 0;
}
