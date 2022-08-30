#include <iostream>
#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

using namespace std;

Vendedor::Vendedor(string n, double  s, double pc):Empregado(n,s){
    this->percentualCom = pc;
  
}

double Vendedor:: calcularSalario(){
    double salF= (this->salario * ((this->percentualCom/100)+1));
    return salF;
}
  
void Vendedor:: toString(){
    cout<<"\nNome do vendedor: "<< getName()<<endl;
    cout<<"\nSalario final do vendedor "<< getName()<<" acrescido da comissão: "<<calcularSalario()<<endl;
}
      


