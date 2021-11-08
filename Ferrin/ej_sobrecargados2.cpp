/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autor: Josue Ferrin                    							     *
 *				Fecha de creación: 5/11/2021										 *
 *				Fecha de modificación: 7/11/2021									 *
 *************************************************************************************/

#include<iostream>

using namespace std;

class MyClass
{
	int x;
	public:
	MyClass(int n):x(n){}

	int operator*(const MyClass& a) const //Sobrecarga del operador '*'
	{
		return x*a.x;
	}
};

int main()
{
	MyClass x(2);
    MyClass y(3);
    int a = x*y;  //Utilizando el operador sobrecargado
    cout<< a <<endl;

	return 0;
}
