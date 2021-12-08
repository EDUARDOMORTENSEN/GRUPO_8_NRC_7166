/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria en Software													 *
 *				Autor: Isaac Escobar							     *
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
void calcularEdad( int anioActual , int mesActual, int diaActual, int anioNacimiento, int mesNacimiento, int diaNacimiento);

int main ()
{
    char variable[5];
    int validar;
	int V;
    int anioActual;
    int mesActual;
    int diaActual;

    int anioNacimiento;
    int mesNacimiento;
    int diaNacimiento;
    
    do{
    cout << "Ingrese Dia Actual: ";
    scanf("%s",variable);
    V=validar_numero(variable);

    }while(V==0);
    diaActual=atoi(variable);
    
    
     do{
    cout << "Ingrese Mes Actual: ";
    scanf("%s",variable);
    V=validar_numero(variable);

    }while(V==0);
    mesActual=atoi(variable);


    do{
    cout << "Ingrese Anio Actual: ";
    scanf("%s",variable);
    V=validar_numero(variable);

    }while(V==0);
    anioActual=atoi(variable);
    validar_fecha(diaActual,mesActual,anioActual);

    do{
    cout << "\nIngrese Anio Nacimiento: ";
    scanf("%s",variable);
    V=validar_numero(variable);

    }while(V==0);
    anioNacimiento=atoi(variable);


    do{
    cout << "\nIngrese Mes Nacimiento: ";
    scanf("%s",variable);
    V=validar_numero(variable);

    }while(V==0);
    mesNacimiento=atoi(variable);

    do{
    cout << "\nIngrese dia Nacimiento: ";
    scanf("%s",variable);
    V=validar_numero(variable);

    }while(V==0);
    diaNacimiento=atoi(variable);

    validar_fecha(diaNacimiento,mesNacimiento,anioNacimiento);
    if(anioNacimiento>anioActual){
    	cout<<"\nError"<<endl;
    	
	}
	else{
		if(anioNacimiento==anioActual){
			if(mesNacimiento>mesActual){
				cout<<"\nError"<<endl;
			}
			else{
				if(mesNacimiento==mesActual){
					if(diaNacimiento>diaActual){
						cout<<"\nError"<<endl;
					}
					else{
						calcularEdad( anioActual , mesActual, diaActual, anioNacimiento, mesNacimiento, diaNacimiento);
					}
				}
				else{
					calcularEdad( anioActual , mesActual, diaActual, anioNacimiento, mesNacimiento, diaNacimiento);
				}
			}
		}
	//calcularEdad( anioActual , mesActual, diaActual, anioNacimiento, mesNacimiento, diaNacimiento);
		
	}

    //calcularEdad( anioActual , mesActual, diaActual, anioNacimiento, mesNacimiento, diaNacimiento);

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
                          printf( "Valido" );
                        }
                      else{
                          printf( "Incorrecto" );
                                while(dia<=0 || dia>=32){
                                    cout << "Error Vuelva Ingresar Dia Actual ";  cin >> dia;
                                }
                      }
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( dia >= 1 && dia <= 30 )
                          printf( "Valido" );
                      else
                          printf( "Incorrecto" );
                                    while(dia<=0 || dia>=31){
                                    cout << "Error Vuelva Ingresar Dia Actual ";  cin >> dia;
                                }

                      break;

            case  2 : if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                          if ( dia >= 1 && dia <= 29 ){
                              printf( "Valido " );

                          }
                          else
                          {
                              printf( "Incorrecto" );
                              while(dia<=0 || dia>=30){
                                    cout << "Error Vuelva Ingresar Dia Actual ";  cin >> dia;
                                }

                          }

                      else
                          if ( dia >= 1 && dia <= 28 ){
                              printf( "Valido" );

                              }
                          else{
                              printf( "Incorrecto" );
                                while(dia<=0 || dia>=29){
                                    cout << "Error Vuelva Ingresar Dia Actual";  cin >> dia;
                                }

                              }
        }
    }
    else{
        printf( "Incorrecto" );
        while(mes<=0 || mes>=13){
        cout << "Error Vuelva Ingresar Mes Actual: ";  cin >> mes;
        }

    }


}

void validar_anio(int& anio,int& anioActual)
{
    if(anio>anioActual)
    {
        cout<<" el anio de Nacimiento no puede ser mayor que el anio actual, por favor vuelva a ingresar"<<endl;
        cin>>anio;
    }
}

void calcularEdad( int anioActual , int mesActual, int diaActual, int anioNacimiento, int mesNacimiento, int diaNacimiento)
{
    int respFech , respMes;

    if ( diaActual < diaNacimiento  )
    {
        diaActual = diaActual + 30;
        mesActual = mesActual - 1;
        respFech =  diaActual - diaNacimiento;
    }
    else
        respFech =  diaActual - diaNacimiento;

    if( mesActual < mesNacimiento )
    {
        mesActual = mesActual + 12;
        anioActual = anioActual - 1 ;
        respMes = mesActual - mesNacimiento;
    }
    else
        respMes = mesActual - mesNacimiento;

    cout << "\nTu edad completa es:\n";
    cout << " Anios: " <<anioActual - anioNacimiento << endl;
    cout << " Meses: " << respMes << endl;
    cout << " Dias: " << respFech << endl;
}

int validar_numero(char variable[])
{
    int i;
    for(i=0; i<strlen(variable); i++)
    {
        if(!(isdigit(variable[i])))
        {
            printf("Ingrese solo Numeros enteros");
            getch();
            return 0;
        }
    }
    return 1;
}
