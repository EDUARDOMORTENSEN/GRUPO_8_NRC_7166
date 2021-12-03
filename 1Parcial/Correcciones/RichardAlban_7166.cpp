/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Richard Alban							                     *
 *				Fecha de creación: 02/12/2021										 *
 *				Fecha de modificación: 02/12/2021									 *
 *************************************************************************************/

#include <iostream>
#include  <ctime>
#define ASCENDENTE 1
#define DESCENDENTE 0
using namespace std;
class nodo {
    public:
        nodo(int v, nodo* sig = NULL, nodo* ant = NULL) :
        valor(v), siguiente(sig), anterior(ant) {}
    private:
        int valor;
        nodo* siguiente;
        nodo* anterior;
    friend class lista;
};
typedef nodo* pnodo;
class lista {
public:
    lista() : plista(NULL) {}
    ~lista();
    void Insertar(int v);
    void InsertarUltimo(int v);
    void Borrar(int v);
    bool ListaVacia() { return plista == NULL; }
    void Mostrar(int);
    void Siguiente();
    void Anterior();
    void Primero();
    void Ultimo();
    bool Actual() { return plista != NULL; }
    int ValorActual() { return plista->valor; }
private:
    pnodo plista;
};
lista::~lista()
{
    pnodo aux;
    Primero();
    while (plista) {
            aux = plista;
    plista = plista->siguiente;
 delete aux;
 }
}

void lista::Insertar(int v)
{
    pnodo nuevo;
    Primero();
    if (ListaVacia() || plista->valor > v) {
            nuevo = new nodo(v, plista);
            if (!plista) plista = nuevo;
            else plista->anterior = nuevo;
 }
 else {
        while (plista->siguiente && plista->siguiente->valor <= v) Siguiente();
        nuevo = new nodo(v, plista->siguiente, plista);
        plista->siguiente = nuevo;
        if (nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
      }
}

void lista::InsertarUltimo(int v)
{
    pnodo nuevo;
    Ultimo();
    if (ListaVacia() || plista->valor > v) {
            nuevo = new nodo(v, plista);
            if (!plista) plista = nuevo;
            else plista->anterior = nuevo;
 }
 else {
        while (plista->siguiente && plista->siguiente->valor <= v) Siguiente();
        nuevo = new nodo(v, plista->siguiente, plista);
        plista->siguiente = nuevo;
        if (nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
      }
}

void lista::Borrar(int v)

{
    pnodo nodo;
    nodo = plista;
    while (nodo && nodo->valor < v) nodo = nodo->siguiente;
    while (nodo && nodo->valor > v) nodo = nodo->anterior;
    if (!nodo || nodo->valor != v) return;
    if (nodo->anterior) // no es el primer elemento
        nodo->anterior->siguiente = nodo->siguiente;
    if (nodo->siguiente) // no el el último nodo
        nodo->siguiente->anterior = nodo->anterior;
    delete nodo;
}
void lista::Mostrar(int orden)
{
    pnodo nodo;
    if (orden == ASCENDENTE) {
            Primero();
    nodo = plista;
    while (nodo) {
            cout << nodo->valor << "-> ";
            nodo = nodo->siguiente;
                 }
}
    else {
            Ultimo();
            nodo = plista;
            while (nodo) {
                    cout << nodo->valor << "-> ";
            nodo = nodo->anterior;
 }
 }
 cout << endl;
}

void lista::Siguiente()
{
    if (plista) plista = plista->siguiente;
}
void lista::Anterior()
{
    if (plista) plista = plista->anterior;
}
void lista::Primero()
{
    while (plista && plista->anterior) plista = plista->anterior;
}
void lista::Ultimo()
{
    while (plista && plista->siguiente) plista = plista->siguiente;
}


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

int Fecha::verificarDiaSemana(){
	int m;
	if(anio % 4 == 0){
		m = mesesBisiesto[mes - 1];
	}else{
		m = meses[mes - 1];
	}
	return ((anio - 1) % 7 + ((anio - 1) / 4 - (3 *((anio - 1) / 100 + 1) / 4)) % 7 + m + dia % 7) % 7;
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

    int diaNa;
    int mesNa;
    int anioNa;

    lista lista;
    Fecha fecha;

    bool condicionFecha = true;
    while(condicionFecha){
                cout<<"Ingrese el dia Nacimiento ";
                cin>>diaNa;
                fecha.setDiaNa(diaNa);
                cout<<"Ingrese el mes Nacimiento ";
                cin>>mesNa;
                fecha.setMesNa(mesNa);
                cout<<"Ingrese el año Nacimiento ";
                cin>>anioNa;
                fecha.setAnioNa(anioNa);
                condicionFecha = !fecha.verificarFechaNa();
            }

   if (condicionFecha=true){
            lista.Insertar(diaNa);
            lista.Insertar(mesNa);
            lista.Insertar(anioNa);
            lista.Mostrar(1);
    }


    int dia;
    int mes;
    int anio;
    Fecha fecha2;
    bool condicionFecha2 = true;



    while(condicionFecha2){
                cout<<"Ingrese el dia Actual ";
                cin>>dia;
                fecha2.setDia(dia);
                cout<<"Ingrese el mes Actual ";
                cin>>mes;
                fecha2.setMes(mes);
                cout<<"Ingrese el año Actual ";
                cin>>anio;
                fecha2.setAnio(anio);
                condicionFecha2 = !fecha2.verificarFecha();
            }

    int respFech , respMes;

    if ( dia < diaNa  )
    {   //En caso de ser menor la fecha actual que el nacimiento
        dia = dia + 30; // Se le suma los 30 días (1 mes) a la fecha actual
        mes = mes - 1; // Se le resta un mes (30 días) al mes actual
        respFech =  dia - diaNa; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respFech =  dia - diaNa;  //Se le resta fecha nacimiento al actual

    if( mes < mesNa )
    {   //En caso de ser menor el mes actual que el nacimiento
        mes = mes + 12; // Se le suma los 12 meses (1 año) al mes actual
        anio = anio - 1 ; // Se le resta 1 año ( 12 meses) al año actual
        respMes = mes - mesNa; //Se le resta año nacimiento al actual
    }
    else //En caso de ser mayor el mes actual que el nacimiento
        respMes = mes - mesNa; //Se le resta año nacimiento al actual

    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anio - anioNa <<endl; //Muestra edad
    cout << " Mes: " << respMes << endl; //Muestra mes
    cout << " Dia: " << respFech << endl; //Muestra dia

}


int main(int argc, char** argv) {


    lista lista1;


    Fecha fecha;

    fecha.CalcularEdad();


    return 0;
}
