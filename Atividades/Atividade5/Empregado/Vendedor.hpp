#include <iostream>
#include <string>
using namespace std;

class Vendedor : public Empregado{
  private:
      double percentualCom;
  public:
      Vendedor(string name, double salario, double pc);
      double calcularSalario();
      void toString();
};