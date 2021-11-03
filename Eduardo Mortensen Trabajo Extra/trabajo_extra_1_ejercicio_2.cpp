#include <iostream>
#include <string>

using namespace std;

template <typename T>
 void Suma (T x, T y);


template < typename T>
 void Suma(T x, T y){
 T resultado;
 resultado= x+y;
 cout<<"resultado es: "<<resultado<<endl;
 }

int main ()
{
    int i = 30;
    int j = 70;
    double f1 = 5.7;
    double f2 = 10.8;

    Suma(i,j);
    Suma(f1, f2);

   return 0;
}
