#include <iostream>
using namespace std;

int mapeia(int tamanho, int chaves[tamanho],int valores[tamanho]){
  int i, j;
  std::cout << "Chaves:  ";
  for(i=0;i<tamanho;i++){
    std::cout << chaves[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Valores: ";
  for(i=0;i<tamanho;i++){
    std::cout << valores[i] << " ";
  }
  std::cout << std::endl;

  for(i=0;i<tamanho;i++){
    std::cout << chaves[i] << ",";
    std::cout << valores[i] << "  ";
  }
  return 0;
}

int main() {
  int tamanho, i, j;
  std::cout << "Digite o tamanho das listas: " << std::endl;
  std::cin >> tamanho;
  int chaves[tamanho], valores[tamanho];

  std::cout << "Chaves: " << std::endl;
  for(i=0;i<tamanho;i++){
    std::cin >> chaves[i];
  }

  std::cout << "Valores: " << std::endl;
  for(i=0;i<tamanho;i++){
    std::cin >> valores[i];
  }

  mapeia(tamanho, chaves, valores);
  
  return 0;
}