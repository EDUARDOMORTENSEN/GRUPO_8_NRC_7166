#include <iostream>
#include <stdlib.h>

using namespace std;

template <class A>
A valorabsoluto(A num);

int main()
{
    int entero= -2875;
    long largo= -1525843659848;
    float flotante= -154.98745;
    double real= -0.987425;
    cout<<"El valor absoluto de "<<entero<<" es: "<<valorabsoluto(entero)<<endl;
    cout<<"El valor absoluto de "<<largo<<" es: "<<valorabsoluto(largo)<<endl;
    cout<<"El valor absoluto de "<<flotante<<" es: "<<valorabsoluto(flotante)<<endl;
    cout<<"El valor absoluto de "<<real<<" es: "<<valorabsoluto(real)<<endl;
    system("Pause");
    return 0;
}

template <class A>
A valorabsoluto(A num){
    return (num < 0)? -num : num;
}
