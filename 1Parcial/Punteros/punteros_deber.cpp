#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>



template <class T>

class Operaciones{

     public:

         Operaciones(T *p, T t=0);

         void procesar (int *p, int t);
         void ingresar(int *p, int t);
         void set(int *p, int t);
         T get(int *p, int t) const;
	};


template <class T>
void Operaciones<T>::ingresar(int *p, int t){
	int i;
	for(i=0;i<t;i++){
		printf("Ingrese el valor entero: ");
		scanf("%d",*(&p)+i);
	}
}

template <class T>

void Operaciones <T> :: procesar(int *p, int t){
	int i,e;
	printf("Ingrese el escalr")	;
	scanf("%d",&e);
	for(i=0;i<t;i++){
		p=((&(*p)))*e;
		*(p++);
	}
}

template <class T>
T Operaciones<T>::get(int *p, int t) const
{
    return this->operaciones[*p][t];
}

template <class T>
 void Operaciones<T>::set(int *p, int t)
{
    return this->operaciones[*p][t];
}


int main(int argc, char** argv) {
    Operaciones<int> *ptr, t;
    ptr =(int)malloc(4*sizeof(int));
	std::cout<<"Ingrese el tamanio: "<<std :: endl;
	std::cin>>t;
	ingresar(ptr,t);
	procesar(ptr,t);

	return 0;
}
