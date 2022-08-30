#include <iostream>
using namespace std;

int filtra_menores(int valor) {
  int tamanho, num, contador = 0;
  std::cout << "Insira o tamanho da lista: " << std::endl;
  std::cin >> tamanho;
  int lista[tamanho][2];
  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < 2; j++) {
      std::cin >> num;
      if (num < valor) {
        lista[i][j] = -1;
        if (j == 1 && lista[i][0] == -1) {
          lista[i][j] = -1;
        } else {
          contador += 1;
        }
      } else {
        lista[i][j] = num;
      }
    }
  }

  std::cout << "Contador: " << contador << std::endl;
  std::cout << "Lista filtrada: " << std::endl;
  int lista_filtrada[tamanho - contador][2], d = 0;
  for (int i = 0; i < tamanho; i++) {
    if (lista[i][0] >= valor && lista[i][1] >= valor) {
      lista_filtrada[d][0] = lista[i][0];
      lista_filtrada[d][1] = lista[i][1];
      d += 1;
    } else {
      continue;
    }
  }
  for (int i = 0; i < tamanho - contador; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << lista_filtrada[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}

int main() {
  int valor;
  std::cout << "Valor de referencia: " << std::endl;
  std::cin >> valor;
  filtra_menores(valor);
  return 0;
}