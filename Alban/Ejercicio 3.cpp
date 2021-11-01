#include <iostream>
#include <conio.h>

using namespace std;

template <class T>
T minimo (T * Array, int elem)
{
   T min= Array [0] ;

   for (int i=1; i< elem; i++)
        if( Array[ i ] < min)
            min = Array [ i ];

   return min;
} ;

template <class T>
T maximo (T * Array, int elem)
{
   T max= Array [0];

   for (int i=1; i< elem; i++)
        if( Array[ i ] > max)
            max = Array [ i ];

   return max;
};

int main()
{
   int ArrayInt [3] = { 18, 8, 20};
   float ArrayFloat [3] = { 12.1, 8.7, 5.6 };
   int i;

   cout<<"Arreglo de enteros: ";
   for (i=0; i<3; i++)
         cout << ArrayInt[ i ] << " ";

   cout << endl << "El numero minimo es: " << minimo (ArrayInt, 3) << endl
         <<"El numero maximo es: " << maximo (ArrayInt, 3) << endl << endl;

   cout << "Arreglo de flotantes: ";
   for (i=0; i<3; i++)
        cout << ArrayFloat[ i ] << " ";
        cout << endl <<"El numero minimo es: " << minimo (ArrayFloat, 3) << endl
               <<"El numero maximo es: " << maximo (ArrayFloat, 3)<<endl;

   system("Pause");
   return 0;
}
