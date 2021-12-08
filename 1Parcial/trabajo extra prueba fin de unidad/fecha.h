#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>
#include  <ctime>
 #include <cstdlib>
 #include <cstdio>
 #include <cstring>

using namespace std;
class Fecha
{
	public:
	    Fecha();
		Fecha(int _dia, int _mes, int _annio);
		Fecha(int _dia, int _mes, int _annio, int _diaNacimiento, int _mesNacimiento, int _annioNacimiento);
		~Fecha();
		int getDia();
   		void setDia(int nuevowDia);

   		int getMes();
   		void setMes(int nuevoMes);

  		int getAnnio();
   		void setAnnio(int nuevoAnnio);

   		int getDiaNacimiento();
   		void setDiaNacimiento(int nuevoDiaNacimiento);

   		int getMesNacimiento();
   		void setMesNacimiento(int nuevoMesNacimiento);

  		int getAnnioNacimiento();
   		void setAnnioNacimiento(int nuevoAnnioNacimiento);

   		bool verificarFechaNacimiento();

   		int verificarDiaSemana();

   		bool verificarFecha();

   		void validarFechaNacimiento();

   		void validarFechaActual();

   		void CalcularEdad();

   		bool entero(char *a);

        int validarDiaNacimiento(string a);
        int validarMesNacimiento(string a);
        int validarAnnioNacimiento(string a);
         int validarDia(string a);
        int validarMes(string a);
        int validarAnnio(string a);

        void error();

	private:
		int dia;
		int mes;
		int annio;
		int diaNacimiento;
		int mesNacimiento;
		int annioNacimiento;
		int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int meses[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
		int mesesBisiesto[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
};

Fecha::Fecha(int _dia, int _mes, int _annio, int _diaNacimiento, int _mesNacimiento, int _annioNacimiento){
    dia = _dia;
    mes = _mes;
    annio = _annio;
    diaNacimiento = _diaNacimiento;
    mesNacimiento = _mesNacimiento;
    annioNacimiento = _annioNacimiento;
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

void Fecha::setDia(int nuevoDia)
{
   dia = nuevoDia;
}

int Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(int nuevoMes)
{
   mes = nuevoMes;
}

int Fecha::getAnnio(void)
{
   return annio;
}

void Fecha::setAnnio(int nuevoAnio)
{
   annio = nuevoAnio;
}

int Fecha::getDiaNacimiento(void)
{
   return diaNacimiento;
}

void Fecha::setDiaNacimiento(int nuevoDiaNacimiento)
{
   diaNacimiento = nuevoDiaNacimiento;
}

int Fecha::getMesNacimiento(void)
{
   return mesNacimiento;
}

void Fecha::setMesNacimiento(int nuevoMesNacimiento)
{
   mesNacimiento = nuevoMesNacimiento;
}

int Fecha::getAnnioNacimiento(void)
{
   return annioNacimiento;
}

void Fecha::setAnnioNacimiento(int nuevoAnnioNacimiento)
{
   annioNacimiento = nuevoAnnioNacimiento;
}

int Fecha::verificarDiaSemana(){
	int i;
	if(annio % 4 == 0){
		i = mesesBisiesto[mes - 1];
	}else{
		i = meses[mes - 1];
	}
	return ((annio - 1) % 7 + ((annio - 1) / 4 - (3 *((annio - 1) / 100 + 1) / 4)) % 7 + i + dia % 7) % 7;
}

bool Fecha::verificarFecha(){
    time_t t = time(0);
    tm* now = localtime(&t);
    if(mes<1 || mes>12){

        return false;
    }
    if(dia<1 || dia>dias[mes-1]){

        return false;
    }
    if(annio>annioNacimiento  ){

        return false;
    }


    return true;
}


bool Fecha::verificarFechaNacimiento(){
    time_t t = time(0);
    tm* now = localtime(&t);
    if(mesNacimiento<1 || mesNacimiento>12){
        return false;
    }
    if(diaNacimiento<1 || diaNacimiento>dias[mesNacimiento-1]){
        return false;
    }

    if(annioNacimiento<1900){
        return false;
    }
    if(annioNacimiento>annio){
            return false;

	}
	else{
		if(annioNacimiento==annio){
			if(mesNacimiento>mes){
				return false;
			}
			else{
				if(mesNacimiento==mes){
					if(diaNacimiento>dia){
						return false;
					}
				}
			}

			}
	}




    return true;


}

bool Fecha:: entero(char *a){
      for(int i = 0; i<strlen(a); i++){
           if(!isdigit(a[i])){
                return false;
           }
      }
      return true;
 }
int Fecha::validarDia(string a){
     char dia[100];
      do{
           cout<<a;
           cin>>dia;
           if(!entero(dia)){
           error();
           }
      }while(!entero(dia));
      return atoi(dia);
 }

  int Fecha::validarMes(string a){
     char mes[100];
      do{
           cout<<a;
           cin>>mes;
           if(!entero(mes)){
           error();
           }
      }while(!entero(mes));
      return atoi(mes);
 }

 int Fecha::validarAnnio(string a){
     char annio[100];
      do{
           cout<<a;
           cin>>annio;
           if(!entero(annio)){
           error();
           }
      }while(!entero(annio));
      return atoi(annio);
 }




 int Fecha::validarDiaNacimiento(string a){
     char diaNacimiento[100];
      do{
           cout<<a;
           cin>>diaNacimiento;;
           if(!entero(diaNacimiento)){
           error();
           }
      }while(!entero(diaNacimiento));
      return atoi(diaNacimiento);
 }

  int Fecha::validarMesNacimiento(string a){
     char mesNacimiento[100];
      do{
           cout<<a;
           cin>>mesNacimiento;
           if(!entero(mesNacimiento)){
           error();
           }
      }while(!entero(mesNacimiento));
      return atoi(mesNacimiento);
 }

 int Fecha::validarAnnioNacimiento(string a){
     char annioNacimiento[100];
      do{
           cout<<a;
           cin>>annioNacimiento;
           if(!entero(annioNacimiento)){
           error();
           }
      }while(!entero(annioNacimiento));
      return atoi(annioNacimiento);
 }
 void Fecha::error(){
      cout<<"\nDato no valido, verifique.."<<endl;
 }

void Fecha::CalcularEdad()
{

    int diaNacimiento;
    int mesNacimiento;
    int annioNacimiento;
    Fecha fecha;

    bool condicionFecha = true;
     Lista lista;
    while(condicionFecha){
string mensaje="Ingrese un   numero entero: ";

                printf("//FECHA DE NACIMIENTO// \n ");
                printf("\n");
                printf("por favor ingrese el dia de su nacimiento: ");
                printf("\n");
                diaNacimiento=validarDiaNacimiento(mensaje);
                fecha.setDiaNacimiento(diaNacimiento);
                printf("por favor ingrese el mes de su nacimiento: ");
                printf("\n");
                mesNacimiento=validarMesNacimiento(mensaje);
                fecha.setMesNacimiento(mesNacimiento);
                printf("por favor ingrese el año de su nacimiento: ");
                printf("\n");
                annioNacimiento=validarAnnioNacimiento(mensaje);
                fecha.setAnnioNacimiento(annioNacimiento);
                condicionFecha = !fecha.verificarFechaNacimiento();


            }
    if (condicionFecha=true){
            lista.Anadir(diaNacimiento);
            lista.Anadir(mesNacimiento);
            lista.Anadir(annioNacimiento);
            lista.mostrar();
    }
    int dia,mes,annio;
    Fecha fecha2;
    bool condicionFecha2 = true;

    while(condicionFecha2){
    string mensaje="Ingrese un   numero entero: ";
                printf("//FECHA ACTUAL// \n ");
                printf("\n");
                printf("por favor ingrese el dia de hoy: ");
                printf("\n");
                dia=validarDia(mensaje);
                fecha2.setDia(dia);
                printf("por favor ingrese el mes actual: ");
                printf("\n");
                mes=validarMes(mensaje);
                fecha2.setMes(mes);
                printf("por favor ingrese el año actual: ");
                printf("\n");
                annio=validarAnnio(mensaje);
                fecha2.setAnnio(annio);
                condicionFecha2 = !fecha2.verificarFecha();
            }

    int respectivaFecha , respectivoMes;

    if ( dia < diaNacimiento  )
    {
        dia = dia + 30;
        mes = mes - 1;
        respectivaFecha =  dia - diaNacimiento;
    }
    else
        respectivaFecha =  dia - diaNacimiento;

    if( mes < mesNacimiento )
    {
        mes = mes + 12;
        annio = annio - 1 ;
        respectivoMes = mes - mesNacimiento;
    }
    else
        respectivoMes = mes - mesNacimiento;

    printf("\n Su respectiva edad es la siguiente en años meses y días:\n");
    cout<<" Años: " <<annio - annioNacimiento <<"   Mes: " << respectivoMes <<"   Dia: " << respectivaFecha;

}

#endif // FECHA_H_INCLUDED
