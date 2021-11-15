#include <cstdio>
#include <iostream>

using namespace std;

template <class T>
class Coordenadas {
    private:
        T x;
        T y;

    public:
        Coordenadas(T x = 0, T y = 0);

        T getX() {
            return x;
        };

        T getY() {
            return y;
        }

        void setX(T x) {
            this->x = x;
        }

        void setY(T y) {
            this->y = y;
        }
};

template <class T>
Coordenadas<T>::Coordenadas(T x, T y) {
    this->x = x;
    this->y = y;
}

int main()
{
    Coordenadas <int> c1(180,295);
    Coordenadas <float> c2(3.14, 54.81);

    cout << "La Coordenada en X es: " << c1.getX() << endl;
    cout << "La Coordenada en Y es: " << c2.getY() << endl;

    system("Pause");
    return 0;

}
