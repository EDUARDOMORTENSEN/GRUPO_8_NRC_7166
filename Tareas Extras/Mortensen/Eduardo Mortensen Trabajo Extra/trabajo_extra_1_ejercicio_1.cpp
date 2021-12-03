#include <iostream>
#include <string>
/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen							                     *
 *				Fecha de creación: 30/10/2021										 *
 *				Fecha de modificación: 30/10/2021									 *
 *************************************************************************************/
using namespace std;

template <typename T>
inline T const& Mayor (T const& x, T const& y)
{
    return x < y ? y:x;
}
int main ()
{

    int i = 60;
    int j = 40;

    cout << " El mayor entre i y j es: " << Mayor(i, j) << "\n";

    double f1 = 5.7;
    double f2 = 10.8;

    cout << " El mayor entre f1 y f2 es: " << Mayor(f1, f2) << "\n";

    string z1 = "Hola";
    string z2 = "Mundo";

    cout << "El mayor entre z1 y z2 es: " << Mayor(z1, z2) << "\n";

   return 0;
}
