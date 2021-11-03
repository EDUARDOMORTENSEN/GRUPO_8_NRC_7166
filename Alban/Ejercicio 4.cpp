#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
class suma{
    public:
        suma(T, T);
        T sumar();
    private:
        T n1;
        T n2;

};

template <class T>
suma<T>::suma(T n, T m){
    n1=n;
    n2= m;
}
template <class T>
T suma<T>::sumar(){
    return n1+n2;

}
int main(){
    suma<int> sum(15,28);
    cout<<"La suma es: "<<sum.sumar();
    return 0;
}
