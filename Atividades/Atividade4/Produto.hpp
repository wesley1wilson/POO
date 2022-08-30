#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

using namespace std;

class Produto {
  public:
  //atributos
  string nomeProduto;
  double valorUnd;
  int quantidade;
  double valorProduto;

  //construtor
  Produto(string novoNomeProduto, double novoValorUnd, int novaQuantidade);
  
  //metodos
  double calcularTotal(double valorUnd, int quantidade); 
};
#endif