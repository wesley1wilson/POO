#include <iostream>
#include <string>
#include "Gerente.hpp"
using namespace std;

Gerente::Gerente(string name, float salario, string departamento):Empregado(name, salario) {
  this->departamento = departamento;
}

void Gerente::toString(){
  cout << "\nNome do gerente: " << getName() << endl;
  cout << "\nSalário do gerente: " << getSalario() << endl;
  cout << "\nDepartamento do gerente: " << this->departamento << endl;
}