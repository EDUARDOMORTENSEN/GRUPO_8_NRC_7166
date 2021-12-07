#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <iostream>
#include  <ctime>
#include "lista.h"
#include "nodo.h"
using namespace std;
class Fecha
{
	public:
	    Fecha();
		Fecha(int _dia, int _mes, int _anio);
		Fecha(int _dia, int _mes, int _anio, int _diaNa, int _mesNa, int _anioNa);
		~Fecha();
		int getDia();
   		void setDia(int newDia);
   		int getMes();
   		void setMes(int newMes);
  		int getAnio();
   		void setAnio(int newAnio);
   		int getDiaNa();
   		void setDiaNa(int newDiaNa);
   		int getMesNa();
   		void setMesNa(int newMesNa);
  		int getAnioNa();
   		void setAnioNa(int newAnioNa);
   		bool verificarFechaNa();
   		int verificarDiaSemana();
   		bool verificarFecha();
   		void validarFechaNa();
   		void validarFechaAc();
   		void CalcularEdad();
   		bool esEntero(string linea);

	private:
		int dia;
		int mes;
		int anio;
		int diaNa;
		int mesNa;
		int anioNa;
		int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int meses[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
		int mesesBisiesto[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
};

Fecha::Fecha(int _dia, int _mes, int _anio, int _diaNa, int _mesNa, int _anioNa){
    dia = _dia;
    mes = _mes;
    anio = _anio;
    diaNa = _diaNa;
    mesNa = _mesNa;
    anioNa = _anioNa;
}

Fecha::Fecha()
{
}

Fecha::~Fecha()
{
}

int Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

int Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

int Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}

int Fecha::getDiaNa(void)
{
   return diaNa;
}

void Fecha::setDiaNa(int newDiaNa)
{
   diaNa = newDiaNa;
}

int Fecha::getMesNa(void)
{
   return mesNa;
}

void Fecha::setMesNa(int newMesNa)
{
   mesNa = newMesNa;
}

int Fecha::getAnioNa(void)
{
   return anioNa;
}

void Fecha::setAnioNa(int newAnioNa)
{
   anioNa = newAnioNa;
}



bool Fecha::verificarFecha(){
    time_t t = std::time(0);
    tm* now = std::localtime(&t);
    if(mes<1 || mes>12){
        return false;
    }
    if(dia<1 || dia>dias[mes-1]){
        return false;
    }

    return true;
}


bool Fecha::verificarFechaNa(){
    time_t t = std::time(0);
    tm* now = std::localtime(&t);
    if(mesNa<1 || mesNa>12){
        return false;
    }
    if(diaNa<1 || diaNa>dias[mesNa-1]){
        return false;
    }

    return true;
}

void Fecha::CalcularEdad()
{
    string linea1;
    string linea2;
    string linea3;
	int diaNa;
    int mesNa;
    int anioNa;

    lista lista;
    Fecha fecha;

    bool condicionFecha = true;
    bool repite = true;



	do {
		cout<<"Ingrese el dia Nacimiento ";
		getline(cin, linea1);
		cout<<"Ingrese el mes Nacimiento ";
		getline(cin, linea2);
		cout<<"Ingrese el año Nacimiento ";
		getline(cin, linea3);

		if (esEntero(linea1)&&esEntero(linea2)&&esEntero(linea3)) {
			repite = false;
			diaNa = atoi(linea1.c_str());
            fecha.setDiaNa(diaNa);
			mesNa = atoi(linea2.c_str());
            fecha.setMesNa(mesNa);
	        anioNa = atoi(linea3.c_str());
            fecha.setAnioNa(anioNa);
            condicionFecha = !fecha.verificarFechaNa();


		} else {
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
		}

	} while (condicionFecha||repite);


   /*if (condicionFecha=true){
            lista.Insertar(diaNa);
            lista.Insertar(mesNa);
            lista.Insertar(anioNa);
            lista.Mostrar(0);
    }*/


    int dia;
    int mes;
    int anio;
    Fecha fecha2;
    bool condicionFecha2 = true;
    bool repite1 = true;
    string linea4;
    string linea5;
    string linea6;



    do {
		cout<<"Ingrese el dia Actual ";
		getline(cin, linea4);
		cout<<"Ingrese el mes Actual ";
		getline(cin, linea5);
		cout<<"Ingrese el año Actual ";
		getline(cin, linea6);

		if (esEntero(linea4)&&esEntero(linea5)&&esEntero(linea6)) {
            dia = atoi(linea4.c_str());
            fecha2.setDia(dia);
            mes = atoi(linea5.c_str());
            fecha2.setMes(mes);
            anio = atoi(linea6.c_str());
            fecha2.setAnio(anio);
            condicionFecha2 = !fecha2.verificarFecha();

			repite1 = false;
		} else {
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
		}

	} while (condicionFecha2||repite1);


    if (anioNa>anio)
    {
        cout<<"Error año de nacimiento es mayor al año actual "<<endl;

    }
    else if (anioNa==anio&&mesNa>mes)
        {
           cout<<"Error "<<endl;

    }
    else if (anioNa==anio&&mesNa==mes&&diaNa>dia)
        {
           cout<<"Error "<<endl;

        }
    else
    {
        int respFech , respMes;

    if ( dia < diaNa  )
    {
        dia = dia + 30;
        mes = mes - 1;
        respFech =  dia - diaNa;
    }
    else
        respFech =  dia - diaNa;

    if( mes < mesNa )
    {
        mes = mes + 12;
        anio = anio - 1 ;
        respMes = mes - mesNa;
    }
    else
        respMes = mes - mesNa;

    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anio - anioNa <<endl;
    cout << " Mes: " << respMes << endl;
    cout << " Dia: " << respFech << endl;

    }




}



bool Fecha::esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size();

	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}

		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}


	return esEntero;
}


#endif // FECHA_H_INCLUDED
