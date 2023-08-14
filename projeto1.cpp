#include <iostream>

float area(float largura, float comprimento){ 

    return largura * comprimento;

}
int main(){
    float a,b;



    std::cout << "digite a largura:\n";
    std::cin >> a;
    std::cout << "digite o comprimento:\n";
    std::cin >> b;
    std::cout << "area: "<< area(a,b) << std::endl;

}

