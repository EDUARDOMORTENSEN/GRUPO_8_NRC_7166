/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria en Software													 *
 *				Autores: Isaac Escobar							                     *
 *				Fecha de creación: 01/12/2021										 *
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
    if (nodo->anterior) 
        nodo->anterior->siguiente = nodo->siguiente;
    if (nodo->siguiente) 
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
		Fecha(int _diaAct, int _mesAct, int _anioAct);
		Fecha(int _diaAct, int _mesAct, int _anioAct, int _diaNac, int _mesNac, int _anioNac);
		~Fecha();
		int getDiaAct();
   		void setDiaAct(int newDiaAct);
   		int getMesAct();
   		void setMesAct(int newMesAct);
  		int getAnioAct();
   		void setAnioAct(int newAnioAct);
   		int getDiaNac();
   		void setDiaNac(int newDiaNac);
   		int getMesNac();
   		void setMesNac(int newMesNac);
  		int getAnioNac();
   		void setAnioNac(int newAnioNac);
   		bool verificarFechaNac();
   		int verificarDiaSemana();
   		bool verificarFecha();
   		void validarFechaNac();
   		void validarFechaAc();
   		void CalcularEdad();

	private:
		int diaAct;
		int mesAct;
		int anioAct;
		int diaNac;
		int mesNac;
		int anioNac;
		int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int meses[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
		int mesesBisiesto[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
};

Fecha::Fecha(int _diaAct, int _mesAct, int _anioAct, int _diaNac, int _mesNac, int _anioNac){
    diaAct = _diaAct;
    mesAct = _mesAct;
    anioAct = _anioAct;
    diaNac = _diaNac;
    mesNac = _mesNac;
    anioNac = _anioNac;
}

Fecha::Fecha()
{
}

Fecha::~Fecha()
{
}

int Fecha::getDiaAct(void)
{
   return diaAct;
}

void Fecha::setDiaAct(int newDiaAct)
{
   diaAct = newDiaAct;
}

int Fecha::getMesAct(void)
{
   return mesAct;
}

void Fecha::setMesAct(int newMesAct)
{
   mesAct = newMesAct;
}

int Fecha::getAnioAct(void)
{
   return anioAct;
}

void Fecha::setAnioAct(int newAnioAct)
{
   anioAct = newAnioAct;
}

int Fecha::getDiaNac(void)
{
   return diaNac;
}

void Fecha::setDiaNac(int newDiaNac)
{
   diaNac = newDiaNac;
}

int Fecha::getMesNac(void)
{
   return mesNac;
}

void Fecha::setMesNac(int newMesNac)
{
   mesNac = newMesNac;
}

int Fecha::getAnioNac(void)
{
   return anioNac;
}

void Fecha::setAnioNac(int newAnioNac)
{
   anioNac = newAnioNac;
}

int Fecha::verificarDiaSemana(){
	int m;
	if(anioAct % 4 == 0){
		m = mesesBisiesto[mesAct - 1];
	}else{
		m = meses[mesAct - 1];
	}
	return ((anioAct - 1) % 7 + ((anioAct - 1) / 4 - (3 *((anioAct - 1) / 100 + 1) / 4)) % 7 + m + diaAct % 7) % 7;
}

bool Fecha::verificarFecha(){
    time_t t = std::time(0);
    tm* now = std::localtime(&t);
    if(mesAct<1 || mesAct>12){
        return false;
    }
    if(diaAct<1 || diaAct>dias[mesAct-1]){
        return false;
    }

    return true;
}


bool Fecha::verificarFechaNac(){
    time_t t = std::time(0);
    tm* now = std::localtime(&t);
    if(mesNac<1 || mesNac>12){
        return false;
    }
    if(diaNac<1 || diaNac>dias[mesNac-1]){
        return false;
    }

    return true;
}

void Fecha::CalcularEdad()
{

    int diaNac;
    int mesNac;
    int anioNac;
    Fecha fecha;

    bool condicionFecha = true;
    while(condicionFecha){
                cout<<"Ingrese dia de Nacimiento ";
                cin>>diaNac;
                fecha.setDiaNac(diaNac);
                cout<<"Ingrese mes de Nacimiento ";
                cin>>mesNac;
                fecha.setMesNac(mesNac);
                cout<<"Ingrese anio de Nacimiento ";
                cin>>anioNac;
                fecha.setAnioNac(anioNac);
                condicionFecha = !fecha.verificarFechaNac();
            }
    int diaAct;
    int mesAct;
    int anioAct;
    Fecha fecha2;
    bool condicionFecha2 = true;



    while(condicionFecha2){
                cout<<"Ingrese dia Actual ";
                cin>>diaAct;
                fecha2.setDiaAct(diaAct);
                cout<<"Ingrese mes Actual ";
                cin>>mesAct;
                fecha2.setMesAct(mesAct);
                cout<<"Ingrese anio Actual ";
                cin>>anioAct;
                fecha2.setAnioAct(anioAct);
                condicionFecha2 = !fecha2.verificarFecha();
            }

    int respFech , respMes;

    if ( diaAct < diaNac  )
    {   
        diaAct = diaAct + 30; 
        mesAct = mesAct - 1; 
        respFech =  diaAct - diaNac; 
    }
    else 
        respFech =  diaAct - diaNac;  

    if( mesAct < mesNac )
    {   
        mesAct = mesAct + 12; 
        anioAct = anioAct - 1 ; 
        respMes = mesAct - mesNac; 
    }
    else 
        respMes = mesAct - mesNac; 

    cout << "\nUsted tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl; 
    cout << " Mes: " << respMes << endl; 
    cout << " Dia: " << respFech << endl; 

}


int main(int argc, char** argv) {

    Fecha fecha;

    fecha.CalcularEdad();


    return 0;
}
