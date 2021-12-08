#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
using namespace std;
class Lista
{
public:

	Lista() {
		head = NULL;
	}

	void Anadir(int item) {

		Nodo *actual, *nuevoNodo;


		nuevoNodo = new Nodo;
		nuevoNodo->data = item;
		nuevoNodo->siguiente = NULL;


		if (head == NULL)
			head = nuevoNodo;
		else
		{
			actual = head;

			while (actual->siguiente != NULL)
				actual = actual->siguiente;

			actual->siguiente = nuevoNodo;
		}
	}



	void mostrar() {
		if (head == NULL) {
			cout << "La lista se encuentra vacia" << endl;
			return;
		}
		cout << "la lista tiene los siguentes elementos: ";
		for (Nodo *i = head; i != NULL; i = i->siguiente)
			cout << i->data << "/";
		cout << endl;
	}



private:
	struct Nodo {
		int data;
		Nodo *siguiente;
	};

	Nodo *head;
};


#endif // LISTA_H_INCLUDED
