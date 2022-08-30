#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <string>
using namespace std;

class Endereco{

  private:
      //atributos
      string rua;
      string num;
      string bairro;
      string ponto;
     
  public:
    //construtor
    Endereco();
    //metodos 
    void setRua(string novaRua);
    void setNum(string novoNum);
    void setBairro(string novoBairro);
    void setPonto(string novoPonto);
    string getRua();
    string getNum();
    string getBairro();
    string getPonto();
};
#endif