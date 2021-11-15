#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<stdio.h>
using namespace std;
class Funciones{
	public:
		template <class ... Args>
		auto Sumar(Args ... arg);
};
template<class... Args>
auto Funciones::Sumar(Args... arg){
    FILE *pArch;
	pArch=fopen("Datos.txt","r+");
	auto suma=0.0;
	auto x=0;
	while(!feof(pArch))
	{
		fscanf(pArch, "%d",&x);
		suma+=x;
	}
	return suma;
}




int main() {

	Funciones f;
	cout<<"Suma elementos enteros del archivo es: "<<f.Sumar()<<endl;
	system("pause");
	return 0;
}
