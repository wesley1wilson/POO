#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, delta, x1, x2;
    std::cout << "Digite o valor A: " << std::endl;
    std::cin >> a;
    std::cout << "Digite o valor B: " << std::endl;
    std::cin >> b;
    std::cout << "Digite o valor C: " << std::endl;
    std::cin >> c;
    delta = (pow(b,2)-4*a*c);
    std::cout << "Delta: " << delta << std::endl;
    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);
    std::cout << "x' = " << x1 << std::endl;
    std::cout << "x'' = " << x2 << std::endl;
    return 0;
}