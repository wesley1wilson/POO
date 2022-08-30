#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int numero;
    std::cout << "Digite um numero:" << std::endl;
    std::cin >> numero;
    std::cout << "A raiz do numero " << numero << " eh " << sqrt(numero) << std::endl;
    return 0;
}