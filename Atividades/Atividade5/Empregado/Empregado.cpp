
#include <iostream>
#include "Empregado.hpp"
#include <string>
using namespace std;

Empregado:: Empregado(string name, double salario){
  this->name = name;
  this->salario = salario;
}
void Empregado:: setName(string n){
    this->name=n;
}
string Empregado:: getName(){
    return this->name;
}
void Empregado:: setSalario( double s){
      this->salario=s;
}  
double Empregado:: getSalario(){
  
      return this->salario;
}
void Empregado:: toString(){
  cout<<"\nNome do empregado: "<<this->name<<endl;
  cout<<"\nSalário do empregado: "<<this->salario << endl;
}




