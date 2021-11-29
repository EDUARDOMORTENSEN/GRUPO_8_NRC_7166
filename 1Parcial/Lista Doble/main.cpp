/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban *
 *						Isaac Escobar, Josue Ferrin,							     *
 *				Fecha de creación: 22/11/2021										 *
 *				Fecha de modificación: 29/11/2021									 *
 *************************************************************************************/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

#pragma once 

class cNodo
{
private:

	cNodo* pSig;
	cNodo* pAnt;
	float fDato;

public:

	void insertar_adelante(float fNuevo);

	friend class cLista;
};


void cNodo::insertar_adelante(float fNuevo) 
{
	cNodo* pNuevoNodo = new cNodo;

	pNuevoNodo->pSig = this->pSig;
	pNuevoNodo->pAnt = this;
	this->pSig = pNuevoNodo;
	pNuevoNodo->pSig->pAnt = pNuevoNodo;
	pNuevoNodo->fDato = fNuevo;
}



class cLista
{
private:

	cNodo Inicio;
	cNodo Final;

public:

	void insertar_inicio(float Start);
	void Insertar_Final(float End);

	int Size(); 
	void Imprimir();

	cLista(void);
};


cLista::cLista(void) 
{
	Inicio.pSig = &Final;
	Final.pAnt = &Inicio;

}

void cLista::insertar_inicio(float Start)
{
	Inicio.insertar_adelante(Start);
}

void cLista::Insertar_Final(float End) 
{
	cNodo* pNuevoNodo = new cNodo;

	pNuevoNodo->pSig = &Final;
	pNuevoNodo->pAnt = Final.pAnt;
	pNuevoNodo->pAnt->pSig = pNuevoNodo;
	Final.pAnt = pNuevoNodo;
	pNuevoNodo->fDato = End;

}

int cLista::Size() 
{
	cNodo* pNodo = Inicio.pSig;
	int iContador = 0;

	while (pNodo != &Final)
	{
		iContador++;
		pNodo = pNodo->pSig;
	}
	cout << "numeros guardados: ";
	return iContador;

}


void cLista::Imprimir() 
{
	cNodo* pNodo = Inicio.pSig;

	cout << "|| ";
	while (pNodo != &Final)
	{
		cout << pNodo->fDato << " || ";
		pNodo = pNodo->pSig;
	}
}





int main()
{
	cNodo Nodo;
	cLista Lista;
	int opc, iBool = 0;
	float fNumero;

	do
	{
		cout << "\n";
		cout << "\n\tEscoje una opcion\n" << endl;
		cout << "[1] Insertar en el inicio" << endl;
		cout << "[2] Insertar en el final" << endl;
		cout << "[3] Cuantos numeros hay " << endl;
		cout << "[4] Imprimir" << endl;
		cout << "[5] Salir" << endl << endl;
		cout << "Opcion: ";
		cin >> opc;
		cout << endl;

		switch (opc)
		{
		case 1:cout << endl << "Ingresar un valor: ";
			cin >> fNumero;
			Lista.insertar_inicio(fNumero);
			break;

		case 2:cout << endl << "Ingrese un valor: ";
			cin >> fNumero;
			Lista.Insertar_Final(fNumero);
			break;

		case 3:cout << Lista.Size();
			break;

		case 4:Lista.Imprimir();
			break;

		case 5:break;

		default:cout << endl << "Opcion no Valida";
		}
		cout << endl;
	} while (opc != 5);

	cout << "Press enter to exit..." << endl;


	_getch();
	return 0;
}
