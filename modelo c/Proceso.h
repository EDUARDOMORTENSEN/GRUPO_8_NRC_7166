/***********************************************************************
 * Module:  Proceso.h
 * Author:  HP
 * Modified: jueves, 28 de octubre de 2021 18:51:17
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Proceso_h)
#define __Class_Diagram_2_Proceso_h

class Proceso
{
public:
   float getDenominador(void);
   void setDenominador(float newDenominador);
   float getNumerador(void);
   void setNumerador(float newNumerador);
   Proceso(float num, float dem);
   ~Proceso();
   void imprimir(Proceso objeto);
   float OperationCalculo(void);

protected:
private:
   float denominador;
   float numerador;


};

#endif