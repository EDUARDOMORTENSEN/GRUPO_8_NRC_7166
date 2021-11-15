#include <stdio.h>
#include <iostream.h>

using namespace std;

class Ejemplo {
public:
 void puts(char *texto);
 void escribir(char *texto);
};
void Ejemplo::puts (char *texto) {
 cout << "&&&" << texto << "&&&\n";
}
void Ejemplo::escribir (char *texto) {
 ::puts (texto);
 puts (texto);
}
void main(void) {
 Ejemplo A;
 A.escribir("Texto de ejemplo");
 A.puts("Segundo texto de ejemplo");
 puts("Tercer texto de ejemplo");
}
