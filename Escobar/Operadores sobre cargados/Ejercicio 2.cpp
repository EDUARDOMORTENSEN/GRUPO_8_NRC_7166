/***************          Universidad de las Fuerzas Armadas ESPE         ************
 *				Carrera: Software													 *
 *				Autores:Isaac Escobar						                         *
 *				Fecha de creación: 05/11/2021										 *
 *				Fecha de modificación: 07/11/2021									 *
 *************************************************************************************/

#include <iostream>

using namespace std;

struct Punto
{
	double x, y;
	
};

Punto operator + (const Punto &p, const Punto &q);

int main ()
{
	Punto a, b, c, r;
	a.x = 0.0;
	a.y = -1.5;
	b.x = 2.4;
	c.x = 0.0;
	c.y = 1.1;
	r = a + b +c;
	cout << r.x << " , " << r.y << endl;
	return 0;
	
}

Punto operator + (const Punto &p, const &q)
{
	Punto r;
	r.x = p.x + q.x;
	r.y = p.y + q.y;
	return r;
	
}
