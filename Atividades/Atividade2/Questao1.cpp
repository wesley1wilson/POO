#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

//Função para levar os dados na ordem dos numeros gerados
array<int,5> embaralhe(int lista[5], int random[5]){
  std::array<int,5> novaLista;
  std::cout << "Nova lista: " << std::endl;
  for(int i=0;i<5;i++){
    novaLista[i] = lista[random[i]];
    std::cout << novaLista[i];
    if(i==4){
      std::cout << std::endl;
    }else{
      std::cout << " - ";
    }
  }
  return novaLista;
}

int main() {
  int random[5], i, j, repeticoes, lista[5];
  srand(time(0));

  //Entrada de dados
  for(i=0;i<5;i++){
    std::cin >> lista[i];
  }

  //Lista original
  std::cout << "Lista original: " << std::endl;
  for(i=0;i<5;i++){
    std::cout << lista[i];
    if(i==4){
      std::cout << std::endl;
    }else{
      std::cout << " - ";
    }
  }
  
  //Gerando uma sequencia de 5 numeros sem repeticoes
  do{
    repeticoes = 0;
    for(i = 0; i < 5; i++){
      random[i] = rand() % 5;
    } 
    for(i=0;i<5;i++){
      for(j=0;j<5;j++){
        if(i==j){
          continue;
        }else{
          if(random[i] == random[j]){
            repeticoes += 1;
          }
        }
      }
    }
    }while(repeticoes > 0);

  //Funcao embaralhar
  embaralhe(lista, random);
  return 0;
}