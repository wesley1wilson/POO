#include <iostream>
#include <string>
#include "Ingresso.hpp"
using namespace std;

class IngressoVIP : public Ingresso {
  private:
    //Variavel
    double valorAdicional;

  public:
    //Construtor
    IngressoVIP(double valor, double valorAdicional);

    //Metodos
    double getValor();
    double getValorAdicional();
    void setValor(double valor);
    void setValorAdicional(double valorAdicional);
    void toString();


};