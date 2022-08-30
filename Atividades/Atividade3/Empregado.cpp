#include "Empregado.h"
#include <iostream>
#include <string>

string Empregado::getNome(string nome){
  return nome;
}

void Empregado::setNome(string novoNome){
  this->nome = novoNome;
}

string Empregado::getSobrenome(string sobrenome){
  return sobrenome;
}

void Empregado::setSobrenome(string novoSobrenome){
  this->sobrenome = novoSobrenome;
}

void Empregado::setSalario(double novoSalarioMensal){
  this->salarioMensal = novoSalarioMensal;
}

double Empregado::getSalario(double salarioMensal){
  return salarioMensal;
}

double Empregado::salarioAnual(double salarioMensal){
  return salarioMensal * 12;
}

double Empregado::aumentoSalarial(double salarioMensal){
  double aumento = salarioMensal * 1.10;
  return aumento;
}