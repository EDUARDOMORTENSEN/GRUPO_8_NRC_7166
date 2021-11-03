#include <iostream>

using namespace std;

class Externa {
public:
 int i;
 class Interna {
 public:
 int x;
 };
};
int main (void) {
 Externa E1;

 E1.i=0;
 cout << E1.i << "\n"; // 0 por pantalla
 //E1.x=9; // Error 'x' no es un miembro de Externa
 Externa::Interna I1;
 I1.x=9;
 cout << I1.x << "\n"; // 9 por pantalla
}
