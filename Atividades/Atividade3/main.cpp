#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main(){
  
  //variaveis
  string nome;
  string sobrenome;
  double salarioMensal;

  //setando as variaveis 1
  cout << "Digite o nome do funcionario: " << endl;
  cin >> nome;
  cout << "Digite o sobrenome do funcionario: " << endl;
  cin >> sobrenome;
  cout << "Quanto ele ganhara por mes?" << endl;
  cin >> salarioMensal;

  //instanciando as variaveis 1
  Empregado empregado1 = Empregado(nome, sobrenome, salarioMensal);
  cout << "Nome: " << empregado1.getNome(nome) << endl;
  cout << "Sobrenome: " << empregado1.getSobrenome(sobrenome) << endl;
  cout << "Salario: " << empregado1.getSalario(salarioMensal) << endl;
  cout << "Aumento: " << empregado1.aumentoSalarial(salarioMensal) << endl;
  cout << "Salario anual: " << empregado1.aumentoSalarial(salarioMensal)*12 << endl;

  //setando as variaveis 2
  cout << "Digite o nome do funcionario 2: " << endl;
  cin >> nome;
  cout << "Digite o sobrenome do funcionario 2: " << endl;
  cin >> sobrenome;
  cout << "Quanto ele ganhara por mes?" << endl;
  cin >> salarioMensal;

  //instanciando as variaveis 2
  Empregado empregado2 = Empregado(nome, sobrenome, salarioMensal);
  cout << "Nome: " << empregado2.getNome(nome) << endl;
  cout << "Sobrenome: " << empregado2.getSobrenome(sobrenome) << endl;
  cout << "Salario: " << empregado2.getSalario(salarioMensal) << endl;
  cout << "Aumento: " << empregado2.aumentoSalarial(salarioMensal) << endl;
  cout << "Salario anual: " << empregado2.aumentoSalarial(salarioMensal)*12 << endl;
  return 0;
}