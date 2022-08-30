#include <iostream>
using namespace std;

int main() {
    int n, k, contador = 0;
    do{
        std::cout << "Valor n: " << std::endl;
        std::cin >> n;
        std::cout << "Valor k: " << std::endl;
        std::cin >> k;
        contador = n;
        for(int i = 0; i < k-1; i++){
            contador *= n;
        }
        if(k == 0){
            contador = 1;
        }
        std::cout << contador << std::endl;
    }while(k > 0);
    return 0;
}