#include <iostream.h>

using namespace std;

class Prueba {
int a1, a2, a3;
Prueba(int x, int y, int z) {
 a1=x;
 a2=y;
 a3=z;
}

public:
Prueba(void) {
 a1=0;
 a2=0;
 a3=0;
}

void Muestra(void) {cout << a1 << " " << a2
 << " " << a3 << "\n";}

void Priv (int t0, int t1, int t2) {
Prueba O1(t0, t1, t2);
O1.Muestra();
 }

friend void Fr1(void);
};

void Fr1(void) {
Prueba O2(4, 5, 6);
O2.Muestra();
}

void main (void) {
Prueba O1;
O1.Muestra();
O1.Priv(1,2,3);
Fr1();
}
