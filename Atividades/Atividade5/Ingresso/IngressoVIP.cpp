#include <iostream>
#include <string>
#include "IngressoVIP.hpp"
using namespace std;

IngressoVIP::IngressoVIP(double valor, double valorAdicional):Ingresso(valor){
  this->valorAdicional = valorAdicional;
}

double IngressoVIP::getValor(){
  return this->valor;
}

double IngressoVIP::getValorAdicional(){
  return this->valorAdicional;
}

void IngressoVIP::setValor(double novoValor){
  this->valor = novoValor;
}

void IngressoVIP::setValorAdicional(double novoValorAdicional){
  this->valorAdicional = novoValorAdicional;
}

void IngressoVIP::toString(){
  cout << "\nValor do ingresso: " << getValor() << endl;
  cout << "\nAdicional do ingresso: " << getValorAdicional() << endl;
  cout << "\nValor total do ingresso: " << getValor() + getValorAdicional() << endl;
}