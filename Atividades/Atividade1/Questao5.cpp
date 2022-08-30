#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int tentativas = 0, numero, entrada;
    srand(time(0));
    numero = 1 + (rand() % 100);
    std::cout << "Digite um numero: " << std::endl;
    while(entrada != numero){
        std::cin >> entrada;
        tentativas += 1;
        if(entrada > numero){
            std::cout << "Escolha um numero menor do que o escolhido." << std::endl;
        }else if(entrada < numero){
            std::cout << "Escolha um numero maior do que o escolhido." << std::endl;
        }
    }
    std::cout << "Parabens! Voce acertou apos " << tentativas << " tentativas." << std::endl;
    return 0;
}