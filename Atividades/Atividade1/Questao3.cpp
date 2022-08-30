#include <iostream>
using namespace std;

int main() {
    int valores[5], contPos = 0, pos = 0, contNeg = 0, neg = 0, mediaPos = 0, mediaNeg = 0;
    
    for(int i = 0; i < 5; i++){
        std::cout << "Digite o " << i+1 << " valor:" << std::endl;
        std::cin >> valores[i];
        if(valores[i] > 0){
            contPos += valores[i];
            pos += 1;
        }else if(valores[i] < 0){
            contNeg += valores[i];
            neg += 1;
        }
    }
    std::cout << "Possuem " << pos << " valores positivos." << std::endl;
    std::cout << "Possuem " << neg << " valores negativos." << std::endl;

    for(int elemento : valores){
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    if(contPos > 0){
        mediaPos = contPos/pos;}
    if(contNeg > 0){
        mediaNeg = contNeg/neg;}
    std::cout << "Media dos numeros positivos: " << contPos << std::endl;
    std::cout << "Media dos numeros negativos: " << contNeg << std::endl;
    return 0;
}