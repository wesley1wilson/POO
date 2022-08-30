#ifndef Empregado_hpp_
#define Empregado_hpp_

#include <iostream>
#include <string>
using namespace std;

class Empregado{
    private:
      string name;
    protected:
      double salario;

    public:
      Empregado(string name, double salario);
      void setName(string n);
      string getName();
      void setSalario( double s);
      double getSalario();
      void toString();




};
#endif 