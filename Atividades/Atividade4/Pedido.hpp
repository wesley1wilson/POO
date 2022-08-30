#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Produto.hpp"
using namespace std;

class Pedido{
  public:
    //construtor
    Pedido();

    //atributos
    Cliente cliente;
    string data;
    string hora;
    double valorTotal;
    string listaProduto[2];
    double valorProduto;

    //metodos
    void setCliente(Cliente novoCliente);
    void setData(string novaData);
    void setHora(string novaHora);
    Cliente getCliente();
    string getData();
    string getHora();
    double getValorTotal();
    double somadorValor(double n1,double n2);
    Produto getListaProduto();
};
#endif