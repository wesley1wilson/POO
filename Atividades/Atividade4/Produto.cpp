#include <iostream>
#include <string>
#include "Produto.hpp"

using namespace std;

Produto::Produto(string novoNomeProduto, double novoValorUnd, int novaQuantidade){
  this->nomeProduto = novoNomeProduto;
  this->valorUnd = novoValorUnd;
  this->quantidade = novaQuantidade;
}

double Produto::calcularTotal(double valorUnd, int quantidade){
  this-> valorProduto = valorUnd * quantidade;
  return this-> valorProduto;
}
