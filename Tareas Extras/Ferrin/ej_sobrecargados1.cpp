/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autor: Josue Ferrin                    							     *
 *				Fecha de creación: 5/11/2021										 *
 *				Fecha de modificación: 7/11/2021									 *
 *************************************************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

class Vector
{    float x;
     float y;
   public:
     Vector(float cx=0, float cy=0);
     void DefineX(float);
     void DefineY(float);
     float DameX(void);
     float DameY(void);
     float operator * (Vector);
};

Vector::Vector(float cx, float cy)
{    x=cx; y=cy;
}

void Vector::DefineX(float cx)
{    x=cx;
}

void Vector::DefineY(float cy)
{    y=cy;
}

float Vector::DameX(void)
{    return x;
}

float Vector::DameY(void)
{    return y;
}

float Vector::operator * (Vector V)
{    return (x*V.DameX() + y*V.DameY());
}

int main (void)
{    Vector V1(10,20), V2(5,5);
     float p;

     p = V1*V2;

     cout << "P = " << p<< endl;
}
