#include <iostream>
using namespace std;
int mcd(int z, int u, int v)
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
int main()
{
    int n1, n2, n3;
    cout<<"Ingrese el primer numero "<<endl;
    cin >> n1;
    cout<<"Ingrese el segundo numero "<<endl;
    cin >> n2;
    cout<<"Ingrese el tercer numero "<<endl;
    cin >> n3;
    int x;

    auto mcm = [=](int& x) -> int {
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
    cout <<"El minimo comun multiplo (MCM) es: "<< mcm(x)  << endl;


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
    mcda = mcd(mayor, n2, n3);
    return mcda;
    };
    cout <<"El maximo comun divisor(MCD) es: "<< mcda(x) << endl;

    return 0;
}
