#include <iostream>
using namespace std;

void verificaQuadrada(int linhas, int colunas){
  int i, j;
  if(linhas==colunas){
    std::cout << "Matriz quadrada!" << std::endl;
  }else{
    std::cout << "Matriz nao quadrada!" << std::endl;
  }
}


int main(){
  int i, j, linhas, colunas;
  
  std::cout << "Numero de linhas: " << std::endl;
  std::cin >> linhas;
  std::cout << "Numero de colunas: " << std::endl;
  std::cin >> colunas;
  int matriz[linhas][colunas];

  std::cout << "Matriz: " << std::endl;
  for(i=0;i<linhas;i++){
    for(j=0;j<colunas;j++){
      std::cin >> matriz[i][j];
    }
  }
  
  std::cout << "Matriz inserida: " << std::endl;
  for(i=0;i<linhas;i++){
    for(j=0;j<colunas;j++){
      std::cout << matriz[i][j] << " ";
    }
    std::cout << std::endl;
  }

  verificaQuadrada(linhas, colunas);
  return 0;
}