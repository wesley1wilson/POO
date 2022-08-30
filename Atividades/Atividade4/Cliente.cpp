#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Endereco.hpp"
using namespace std;

Cliente::Cliente(){
  this->nome = "";
}

void Cliente::setNome(string novoNome){
  this->nome = novoNome;
}

void Cliente::setEndereco(Endereco novoEndereco){
  this->endereco = novoEndereco;
}

void Cliente::setTelefone(string novoTelefone){
  this->telefone = novoTelefone;
}

string Cliente::getNome(){
  return this->nome;
}

Endereco Cliente::getEndereco(){
  return this->endereco;
}

string Cliente::getTelefone(){
  return this->telefone;
}