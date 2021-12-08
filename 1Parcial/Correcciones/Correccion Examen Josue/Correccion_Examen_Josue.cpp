/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Software													 *
 *				Autores: Josue Ferrin							                     *
 *				Fecha de creación: 05/12/2021										 *
 *				Fecha de modificación: 07/12/2021									 *
 *************************************************************************************/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int validar_numero(char[]);
void validar_fecha(int&,int&,int&);
void validar_anio(int&,int&);
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);

int main ()
{
    char numero[5];
    int numeroValido,N;
    int anioAct;
    int mesAct;
    int fechAct;

    int anioNac;
    int mesNac;
    int fechNac;

    cout << "\n\tCALCULADORA DE EDAD\n\n";
    cout << "\n\tIngrese unicamente numeros\n\n";

    do{
    cout << "Ingrese Anio Actual: ";
    scanf("%s",numero);
    N=validar_numero(numero);

    }while(N==0);
    anioAct=atoi(numero);

    do{
    cout << "Ingrese Mes Actual: ";
    scanf("%s",numero);
    N=validar_numero(numero);

    }while(N==0);
    mesAct=atoi(numero);


    do{
    cout << "Ingrese Dia Actual: ";
    scanf("%s",numero);
    N=validar_numero(numero);

    }while(N==0);
    fechAct=atoi(numero);
    validar_fecha(fechAct,mesAct,anioAct);




    do{
    cout << "\nIngrese Anio Nacimiento: ";
    scanf("%s",numero);
    N=validar_numero(numero);

    }while(N==0);
    anioNac=atoi(numero);


    do{
    cout << "Ingrese Mes de Nacimiento: ";
    scanf("%s",numero);
    N=validar_numero(numero);

    }while(N==0);
    mesNac=atoi(numero);

    do{
    cout << "Ingrese Dia de Nacimiento: ";
    scanf("%s",numero);
    N=validar_numero(numero);

    }while(N==0);
    fechNac=atoi(numero);

    validar_fecha(fechNac,mesNac,anioNac);

    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);

    return 0;
}

void validar_fecha(int& dia, int& mes, int& anio)
{


    if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( dia >= 1 && dia <= 31 ){
                          printf( "\n   FECHA CORRECTA" );
                        }
                      else{
                          printf( "\n   FECHA INCORRECTA \n" );
                                while(dia<=0 || dia>=32){
                                    cout << "Vuelva a ingresar Dia Actual: ";  cin >> dia;
                                }
                      }
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( dia >= 1 && dia <= 30 )
                          printf( "\n   FECHA CORRECTA" );
                      else
                          printf( "\n   FECHA INCORRECTA \n" );
                                    while(dia<=0 || dia>=31){
                                    cout << "Vuelva a ingresar Dia Actual: ";  cin >> dia;
                                }

                      break;

            case  2 : if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                          if ( dia >= 1 && dia <= 29 ){
                              printf( "\n   FECHA CORRECTA " );

                          }
                          else
                          {
                              printf( "\n   FECHA INCORRECTA \n" );
                              while(dia<=0 || dia>=30){
                                    cout << "Vuelva a ingresar Dia Actual: ";  cin >> dia;
                                }

                          }

                      else
                          if ( dia >= 1 && dia <= 28 ){
                              printf( "\n   FECHA CORRECTA" );

                              }
                          else{
                              printf( "\n   FECHA INCORRECTA \n" );
                                while(dia<=0 || dia>=29){
                                    cout << "Vuelva a ingresar Dia Actual: ";  cin >> dia;
                                }

                              }
        }
    }
    else{
        printf( "\n   FECHA INCORRECTA \n" );
        while(mes<=0 || mes>=13){
        cout << "Vuelva a ingresar Mes Actual: ";  cin >> mes;
        }

    }


}

void validar_anio(int& anio,int& anioActual)
{
    while(anio>anioActual)
    {
        cout<<"su anio de nacimiento no puede ser superior al actual, vuelva a ingresar"<<endl;
        cin>>anio;
    }
}

void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;

    if ( fechAct < fechNac  )
    {
        fechAct = fechAct + 30;
        mesAct = mesAct - 1;
        respFech =  fechAct - fechNac;
    }
    else
        respFech =  fechAct - fechNac;

    if( mesAct < mesNac )
    {
        mesAct = mesAct + 12;
        anioAct = anioAct - 1 ;
        respMes = mesAct - mesNac;
    }
    else
        respMes = mesAct - mesNac;

    cout << "\nSu edad completa es:\n";
    cout << " Anios: " <<anioAct - anioNac << endl;
    cout << " Meses: " << respMes << endl;
    cout << " Dias: " << respFech << endl;
}

int validar_numero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if(!(isdigit(numero[i])))
        {
            printf("\nFECHA INVALIDA, VUELVA A INGRESAR\n");
            return 0;
        }
    }
    return 1;
}
