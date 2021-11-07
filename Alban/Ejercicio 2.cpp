#include <iostream>
#include <stdlib.h>

using namespace std;

class Tabla {
  public:
   Tabla(int n);
   ~Tabla();
   int& operator[](int indice) { return pInt[indice]; }

  private:
   int *pInt;
   int elementos;
};

Tala::Tabla(int n) : elementos(n) {
    pInt = new int[elementos];
}

Tabla::~Tabla() {
    delete[] pInt;
}

int main() {
    Tabla TablaA(51);
    for(int i = 0; i < 51; i++)
        TablaA[i] = 51-i;
    for(int i = 0; i < 51; i++)
        cout << TablaA[i] << endl;

    system("Pause");

    return 0;
}
