#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>
#include <math.h>
#include "Persona.h"
#include "Fecha.h"
#include "Maestro.h"

using namespace std;

bool verificarCedula(string cedula)
{
    int mul1=0,mul2=0,res,cont=1,sum1=0,sum2=0,sum3=0,ult_n1,ult_n2;
    int coc1,coc2;
    int num;
    stringstream ss;
    ss << cedula;
    ss >> num;
    do
    {
        mul1=0;
        mul2=0;
        sum1=0;
        sum2=0;
        sum3=0;
        cont=1;
        while (num<99999999 || num>9999999999)
        {
            return false;
        }
        ult_n1=num%10;
        coc1=num/10;
        num=coc1;
        do
        {
            do
            {
                coc2=num/10;
                res=num%10;
                if (cont%2==0)
                {
                    mul2=res*1;
                    if (mul2>=10)
                        mul2-=9;
                    sum2+=mul2;
                }
                else
                {
                    mul1=res*2;
                    if (mul1>=10)
                        mul1-=9;
                    sum1+=mul1;
                }
                cont++;
                num=coc2;
            }
            while (coc2 != 0);
            sum3=sum1+sum2;
            if ((sum3%10)!=0)
            {
                ult_n2=sum3/10;
                ult_n2++;
                ult_n2*=10;
                ult_n2-=sum3;
            }
            else
                ult_n2-=ult_n2;
            if(ult_n2==ult_n1)
                while (ult_n2==ult_n1)
                {
                    return true;
                }
        }
        while (ult_n2==ult_n1);
        return false;
    }
    while (ult_n2!=ult_n1);
    return true;
}
void generarMaterias(float nota1, float nota2, float nota3, Persona persona,Maestro maestro)
{
    string nombreArchivo = persona.getPrimerNombre() + persona.getApellido();
    string nombreAux = nombreArchivo + ".txt";
    float promedioNotas=(nota1+nota2+nota3)/3;
    ofstream fichero(nombreArchivo+".txt");
    fichero<<"Cedula: "<<persona.getCedula()+"\n";
    fichero<<"Nombre: " +persona.getPrimerNombre()+" "+persona.getSegundoNombre()+ " " + persona.getApellido() +"\n";
    fichero<<"Direccion: " + persona.getDireccion()+"\t\tTelefono: "+persona.getTelefono()+ "\tCorreo: " + persona.getCorreo()+"@espe.edu.ec" +"\n";
    fichero<<"Profesor: "+maestro.getPrimerNombre()+" "+maestro.getApellido() +" " +"Asignatura "+" "+maestro.getMateriadicta()+"\n";
    fichero<<"Nota1: "<<fixed<<setprecision(2)<<nota1<<"\tNota2: "<<fixed<<setprecision(2)<<nota2<<"Nota3: "<<fixed<<setprecision(2)<<nota3<<"\tPromedio: "<<fixed<<setprecision(2)<<promedioNotas<<"\n";
    if(promedioNotas>=14)
        {
            cout<<"Aprobado "<<endl;
        }
    else
        {
            cout<<"Reprobado "<<endl;
        }
        fichero<<"Promedio: "<<fixed<<setprecision(2)<<promedioNotas<<"\n";

    fichero.close();
    nombreArchivo = "txt2pdf.exe "+ nombreArchivo + ".txt " + nombreArchivo + ".pdf -oao -pfs60 -pps43 -ptc0 -width3000 -height2000";
    char nombre[200];
    strcpy(nombre,nombreArchivo.c_str());
    system(nombre);
    strcpy(nombre,nombreAux.c_str());
    cout<<"Notas generadas correctamente!!"<<endl;
    system("pause");
}
