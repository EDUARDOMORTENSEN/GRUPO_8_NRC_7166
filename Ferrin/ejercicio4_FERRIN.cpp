#include <iostream.h>

using namespace std;

class Fecha {
 int dia, mes, anio;
public:
 void Iniciar(void);
 void Fijar(int, int, int);
 void Mostrar(void);
};

void main(void) {
 Fecha fecha;
 fecha.Iniciar();
 fecha.Fijar(13,5,2020);
 fecha.Mostrar();
}

void Fecha::Iniciar(void) {
 dia = 0;
 mes = 0;
 anio = 0;
 }
void Fecha::Fijar(int d, int m, int a) {
 dia = d;
 mes = m;
 anio = a;
 }
void Fecha::Mostrar(void) {
 cout << dia << "/" << mes << "/" << anio << "\n";
 }
