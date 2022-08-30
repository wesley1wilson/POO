#ifndef Ingresso_hpp_
#define Ingresso_hpp_
#include <iostream>
#include <string>


using namespace std;

class Ingresso{
    protected:
        double valor;
    public:
        Ingresso(double valor);
        void toString();
        void setValor(double v);
        double getValor();





};
#endif