#include <iostream>
#include <string>
#include "Endereco.hpp"

using namespace std;

Endereco::Endereco(){
  this->rua = "";
  this->bairro = "";
  this->num = "";
  this->ponto = "";
}

void Endereco::setRua(string novaRua){
  this->rua = novaRua;
}

void Endereco::setNum(string novoNum){
  this->num = novoNum;
}

void Endereco::setBairro(string novoBairro){
  this->bairro = novoBairro;
}

void Endereco::setPonto(string novoPonto){
  this->ponto = novoPonto;
}

string Endereco::getRua(){
  return this->rua;
}

string Endereco::getNum(){
  return this->num;
}

string Endereco::getBairro(){
  return this->bairro;
}

string Endereco::getPonto(){
  return this->ponto;
}