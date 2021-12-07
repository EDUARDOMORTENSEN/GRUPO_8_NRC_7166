#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Maestro.h"
#include "Lista.h"
#include "Nodo.h"
#include "procesos.h"
#include "Validacion.h"
Persona agregarPersonas(Lista lista);
Maestro agregarMaestro(Lista lista);
void NotasFinales(Lista lista, Lista listaMaestro);

using namespace std;
int main(int argc, char** argv)
{
    Lista lista;
    Lista listaMaestro;
    Lista listaNotas;


    int opcion;
    for(;;)
    {
        system("cls");
        cout<<".....UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE....."<<endl;
        cout<<"1. AGREGAR ALUMNOS"<<endl;
        cout<<"2. AGREGAR MAESTROS"<<endl;
        cout<<"3. IMPRIMIR LISTA DE ALUMNOS"<<endl;
        cout<<"4. IMPRIMIR LISTA DE DOCENTES"<<endl;
        cout<<"5. GENERAR NOTAS PARA ALUMNOS"<<endl;
        cout<<"6. SALIR"<<endl;
        cout<<"INGRESE UNA OPCION: ";
        opcion = ingresarEntero();
        switch(opcion){
        case 1:
            lista.insertarCola(agregarPersonas(lista));
            system("pause");
            break;
        case 2:
            listaMaestro.insertarColaMaestro(agregarMaestro(listaMaestro));
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
            NotasFinales(lista,listaMaestro);
            cout<<endl;
            system("pause");
        case 6:
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

void NotasFinales(Lista lista, Lista listaMaestro)
{
    string cedula;
    string primerNombre;
    string apellido;
    float nota1;
    float nota2;
    float nota3;
    float promedio;
    Persona persona;
    Maestro maestro;
    cout<<"Ingrese la cedula de la persona que desea generar las notas:";
    cin>>cedula;
    while(!verificarCedula(cedula))
        {
            cout<<"Numero de cedula no valido, reingrese: ";
            cin>>cedula;
        }
        persona = lista.buscarPersona(cedula);
    cout<<"Ingrese el nombre del docente desea generar las notas:";
    primerNombre=ingresarLetra();
    apellido=ingresarLetra();
    maestro = listaMaestro.buscarMaestro(primerNombre);
    //maestro = listaMaestro.buscarMaestro(apellido);
    do
    {
        cout<<"Ingrese la Nota del primer parcial "<<endl;
        nota1=ingresarfloat();

    }while((nota1<0)||(nota1>20));


    do
    {
        cout<<"Ingrese la Nota del Segundo parcial "<<endl;
        nota2=ingresarfloat();

    }while((nota2<0)||(nota2>20));

    do
    {
        cout<<"Ingrese la Nota del Tercer parcial "<<endl;
        nota3=ingresarfloat();

    }while((nota3<0)||(nota3>20));
    generarMaterias(nota1,nota2,nota3,persona,maestro);
 }


