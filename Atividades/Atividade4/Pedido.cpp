#include <iostream>
#include "Cliente.hpp"
#include "Pedido.hpp"
#include "Produto.hpp"
using namespace std;


Pedido:: Pedido(){
  this->data = "";
  this->hora= "";
  this->valorTotal = 0.0;
}

void Pedido::setCliente(Cliente novoCliente){
  this->cliente = novoCliente;
}

void Pedido::setData(string novaData){
  this->data = novaData;
}

void Pedido::setHora(string novaHora){
  this->hora = novaHora;
}

Cliente Pedido::getCliente(){
  return this->cliente;
}

string Pedido::getData(){
  return this->data;
}

string Pedido::getHora(){
  return this->hora;
}

double Pedido::somadorValor(double n1,double n2){
  this->valorTotal= n1 +=n2 ;
  return this-> valorTotal;
  }


