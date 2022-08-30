#include <iostream>
#include <string>
#include "Empregado.hpp"
using namespace std;

class Gerente : public Empregado {
  private:
    //Variaveis
    string departamento;

  public:
    //Construtor
    Gerente(string name, float salario, string departamento);

    //Metodos
    void toString();
};