#include <iostream>
#include <stdlib.h>

using namespace std;

template <class Datos>
class Numeros
{
    Datos n1, n2;
public:
    Numeros(Datos n_1, Datos n_2){ n1=n_1; n2=n_2;}
    Datos Mayor();
} ;

template <class Datos>
Datos Numeros<Datos>::Mayor()
{
    return (n1>n2? n1:n2);
}
int main()
{

    Numeros<double>dosnum(1158.15905, 1158.9529);
    cout<<"El mayor de los numeros es:"<<dosnum.Mayor()<<endl;
    system("Pause");
    return 0;
}
