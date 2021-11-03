#include <iostream>
#include <string>

using namespace std;

template <typename T>
 void Promedio (T x, T y, T z);


template < typename T>
 void Promedio(T x, T y, T z){
 T resultado;
 resultado= (x+y+z)/3;
 cout<<"el resultado del resultado del promedio de tres valores es: "<<resultado<<endl;
 }

int main ()
{
    int i = 360;
    int j = 230;
    int k = 120;
    double f1 = 33.4;
    double f2 = 22.9;
    double f3 = 44.9;

    Promedio(i,j,k);
    Promedio(f1, f2, f3);

   return 0;
}
