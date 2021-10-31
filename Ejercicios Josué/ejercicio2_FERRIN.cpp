#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


class Persona
{
  private:
  string nombre;
  int edad;


  public:
  Persona();

  void leer();
  void correr();
};

Persona::Persona(int _edad,string _nombre)
{
 edad =_edad;
 nombre =_nombre;

}

void Persona::leer()
{

 cout<<"soy"<<nombre<<" y  estoy leyendo un libro"<<endl;

}

void Persona::correr()
{
 cout<<"Soy"<nombre<<" y estoy corriendo"<<endl;
}

int main()
{
Persona P1=(23,"Paula");
Persona P2=(17,"Cristina");
Persona p3=(25,"Pablo");
p1.leer();
p2.correr();

p3.leer();
p3.correr();

getchar():
return 0;
}
