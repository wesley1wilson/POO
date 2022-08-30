#include <iostream>
#include <string>

using namespace std;

class Empregado {
  
  public:
  //definindo atributos
  string nome;
  string sobrenome;
  double salarioMensal;

  //construtor
  Empregado(string nome, string sobrenome, double salarioMensal){
    nome = nome;
    sobrenome = sobrenome;
    salarioMensal = salarioMensal;
  }

  //metodos
  string getNome(string nome);
  void setNome(string novoNome);
  string getSobrenome(string sobrenome);
  void setSobrenome(string novoSobrenome);
  double getSalario(double salarioMensal);
  void setSalario(double novoSalarioMensal);
  double salarioAnual(double aumento);
  double aumentoSalarial(double salarioMensal);
};