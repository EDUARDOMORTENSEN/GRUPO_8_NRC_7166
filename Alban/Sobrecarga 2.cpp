#include <iostream>
#include <stdlib.h>

using namespace std;

class cuadrado
{
    float a,p,l;
public:
    void leer(void);
    void area(void);
    void perimetro(void);
    void imprime(void);
    cuadrado operator + (cuadrado D)
    {
        cuadrado aux;
        aux.a=a+D.a;
        aux.p=p+D.p;
        return (aux);
    }
};

int main (void)
{
    cuadrado A,B,C;
    A.leer();
    A.area();
    A.perimetro();
    A.imprime();

    C=A.operator +(B);
    system("Pause");
    return 0;
}

void cuadrado::leer(void)
{
    cout<<"Lado:"; cin>>l;
}
void cuadrado::area(void)
{
    a=l*l;
}
void cuadrado::perimetro(void)
{
    p=l*4;
}
void cuadrado::imprime(void)
{
    cout<<"Area: "<<a<<endl;
    cout<<"Perimetro: "<<p<<endl;

}
