#ifndef _COMPLEJO_H
#define _COMPLEJO_H


//hhhh
//jjuj
//

template<class T>
class Complejo {
  public:
    Complejo(T real = 0, T img = 0);

    void setReal(T real);

    void setImg(T img);

    T getReal();

    T getImg();

    Complejo<T> & operator +(const Complejo<T> & A);

    Complejo<T> & operator -(const Complejo<T> & A);


  private:
    T real;

    T img;

};
#endif
