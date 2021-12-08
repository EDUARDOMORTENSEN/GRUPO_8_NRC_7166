#ifndef MAESTRO_H_INCLUDED
#define MAESTRO_H_INCLUDED

#include <iostream>

using namespace std;

class Maestro
{
	public:
		Maestro();
		~Maestro();
		Maestro(string _primerNombre,string _apellido,string materiadicta,int nrc);
		void setPrimerNombre(string _primerNombre);
		string getPrimerNombre();
		void setApellido(string _apellido);
		string getApellido();
		void setCorreo(string _correo);
		string getCorreo();
		void setMateriadicta(string _materiadicta);
		string getMateriadicta();

		void setNrc(int _nrc);
		int getNrc();


	protected:

	private:
		string primerNombre;
        string apellido;
		string correo;
		string materiadicta;
		int nrc;

};



#endif // MAESTRO_H_INCLUDED
