#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
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
    if(annio>annioNacimiento || annio<2021 ){

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

    if(annioNacimiento<1900 || annioNacimiento>2021){
        return false;
    }

    return true;
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

                printf("//FECHA DE NACIMIENTO// \n ");
                printf("\n");
                printf("por favor ingrese el dia de su nacimiento: ");
                printf("\n");
                cin>>diaNacimiento;
                fecha.setDiaNacimiento(diaNacimiento);
                printf("por favor ingrese el mes de su nacimiento: ");
                printf("\n");
                cin>>mesNacimiento;
                fecha.setMesNacimiento(mesNacimiento);
                printf("por favor ingrese el año de su nacimiento: ");
                printf("\n");
                cin>>annioNacimiento;
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
                printf("//FECHA ACTUAL// \n ");
                printf("\n");
                printf("por favor ingrese el dia de hoy: ");
                printf("\n");
                cin>>dia;
                fecha2.setDia(dia);
                printf("por favor ingrese el mes actual: ");
                printf("\n");
                cin>>mes;
                fecha2.setMes(mes);
                printf("por favor ingrese el año actual: ");
                printf("\n");
                cin>>annio;
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
