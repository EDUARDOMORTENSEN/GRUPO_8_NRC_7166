#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Maestro.h"
#include "Lista.h"
#include "Fecha.h"
#include "Nodo.h"
#include "procesos.h"
#include "Validacion.h"
Persona agregarPersonas(Lista lista);
void calendarioPagos(Lista lista);
Maestro agregarMaestro(Lista lista);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
    Lista lista;
    Lista listaMaestro;
    int opcion;
    for(;;)
    {
        system("cls");
        cout<<"1. Agregar Personas"<<endl;
        cout<<"2. Agregar Maestro"<<endl;
        cout<<"3. Imprimir listado de alumnos"<<endl;
        cout<<"4. Imprimir listado de Maestros"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Ingrese la opcion deseada: ";
        opcion = ingresarEntero();
        switch(opcion){
        case 1:
            lista.insertarCola(agregarPersonas(lista));
            lista.imprimir();
            system("pause");
            break;
        case 2:
            listaMaestro.insertarColaMaestro(agregarMaestro(listaMaestro));
            listaMaestro.imprimirMaestro();
            system("pause");
            break;
        case 3:
            lista.imprimir();
            cout<<endl;
            system("pause");
            break;
        case 4:
            listaMaestro.imprimirMaestro();
            cout<<endl;
            system("pause");
            break;
        case 5:
            exit(0);
            break;
        }
        lista.imprimir();
    }
    return 0;
}

Persona agregarPersonas(Lista lista)
{
    string cedula;
    string primerNombre;
    string segundoNombre;
    string apellido;
    char direccion[100];
    string dir;
    int telefono;
    cout<<"Ingresar la cedula: ";
    cin>>cedula;
    while(!verificarCedula(cedula) || !lista.buscarDuplicado(cedula))
    {
        if(!lista.buscarDuplicado(cedula)){
            cout<<"El numero de cedula ingresado ya se encuentra registrado, reingrese: ";
        }else{
            cout<<"Numero de cedula no valido, reingrese: ";
        }
        cin>>cedula;
    }
    cout<<"Ingrese el primer nombre: ";
    primerNombre = ingresarLetra();
    cout<<"Ingrese el segundo nombre: ";
    segundoNombre = ingresarLetra();
    cout<<"Ingrese su apellido: ";
    apellido= ingresarLetra();
    cout<<"Ingrese la direccion: ";
    fflush(stdin);
    cin.getline(direccion,100);
    cout<<"Ingrese el telefono: ";
    telefono= ingresarEntero();
    Persona persona(cedula,primerNombre,segundoNombre,apellido,direccion,to_string(telefono));
    cout<<"Se ha ingresado correctamente los datos"<<endl;
    system("pause");
    return persona;
}


Maestro agregarMaestro(Lista lista)
{
    string primerNombre;
    string apellido;
    string materiadicta;
    cout<<"Ingrese el primer nombre: ";
    primerNombre = ingresarLetra();
    cout<<"Ingrese su apellido: ";
    apellido= ingresarLetra();
    cout<<"Ingrese la Materia: ";
    materiadicta= ingresarLetra();
    Maestro maestro(primerNombre,apellido,materiadicta);
    cout<<"Se ha ingresado correctamente los datos"<<endl;
    system("pause");
    return maestro;
}
