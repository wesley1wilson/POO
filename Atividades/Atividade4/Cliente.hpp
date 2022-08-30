#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
#include "Endereco.hpp"
using namespace std;

class Cliente {
  private:
    // atributos
    string nome;
    Endereco endereco;
    string telefone;

  public:
  // construtor
    Cliente();
    // metodos
    void setNome(string novoNome);
    void setEndereco(Endereco novoEndereco);
    void setTelefone(string novoTelefone);
    string getNome();
    Endereco getEndereco();
    string getTelefone();
};
#endif