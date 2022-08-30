#include <iostream>
#include <string>
#include "Ingresso.hpp"


using namespace std;

Ingresso:: Ingresso(double v){
  this->valor=v;
  
}
void Ingresso:: toString(){
    cout<<"\n\n-------------------------------------------------------------------------------------------\n\n"<<endl;
    cout<<"Valor do Ingresso: "<<this->valor<<endl;
  
    
}
void Ingresso:: setValor(double v){
  this->valor=v;
}
double Ingresso:: getValor(){
    return this->valor;
}




