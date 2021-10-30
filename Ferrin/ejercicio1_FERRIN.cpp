#include <iostream.h>
#include <conio.h>

template <class T>
T minimo (T * Array, int num_elemen)
{
   T min= Array [0] ;

   for (int i=1; i< num_elemen; i++)
        if( Array[ i ] < min)
            min = Array [ i ];

   return min;
} ;

template <class T>
T maximo (T * Array, int num_elemen)
{
   T max= Array [0];

   for (int i=1; i< num_elemen; i++)
        if( Array[ i ] > max)
            max = Array [ i ];

   return max;
};

void main(void)
{
   int ArrayInt [3] = { 2, 8, 6};
   float ArrayFloat [3] = { 12.1, 8.7, 5.6 };
   int i;

   cout<<"Arreglo de enteros: ";
   for (i=0; i<3; i++)
         cout << ArrayInt[ i ] << " ";

   cout << endl << "Numero minimo: " << minimo (ArrayInt, 3) << endl
         <<"Numero maximo: " << maximo (ArrayInt, 3) << endl << endl;

   cout << "Arreglo de flotantes: ";
   for (i=0; i<3; i++)
        cout << ArrayFloat[ i ] << " ";
        cout << endl <<"Numero minimo: " << minimo (ArrayFloat, 3) << endl
               <<"Numero maximo: " << maximo (ArrayFloat, 3);

   getch();
}
