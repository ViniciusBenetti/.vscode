#include <iostream>
#include <cmath>
#include <string>

void Converter(char antes[5],char depois[5], char numero[99]){
    float result;

    
    
    if(antes[0] == 'k' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1] ){

        if(depois[0] == 'h'){
            result = std::stof(numero) * 10;

        }else if(depois[1] == 'a'){
            result = std::stof(numero) * 100;

        }else if(depois[1] == '\O'){
            result = std::stof(numero) * 1000;

        }else if (depois[0] == 'd'){
            result = std::stof(numero) * 10000;

        }else if(depois[0] == 'c'){
            result = std::stof(numero) * 100000;

        }else if (depois[0] == 'm'){
            result = std::stof(numero) * 1000000;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }
    }else if(antes[0] == 'h' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1]){

        if(depois[0] == 'k'){
            result = std::stof(numero) / 10;
        }else if(depois[1] == 'a'){
            result = std::stof(numero) * 10;

        }else if(depois[1] == '\O'){
            result = std::stof(numero) * 100;

        }else if(depois[1] == 'd'){
            result = std::stof(numero) * 1000;

        }else if(depois[1] == 'c'){
            result = std::stof(numero) * 10000;

        }else if(depois[1] == 'm'){
            result = std::stof(numero) * 100000;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }
    }else if(antes[0] == 'a' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1]){

        if(depois[0] == 'k'){
            result = std::stof(numero) / 100;
        }else if(depois[1] == 'h'){
            result = std::stof(numero) / 10;

        }else if(depois[1] == '\O'){
            result = std::stof(numero) * 10;

        }else if(depois[1] == 'd'){
            result = std::stof(numero) * 100;

        }else if(depois[1] == 'c'){
            result = std::stof(numero) * 1000;

        }else if(depois[1] == 'm'){
            result = std::stof(numero) * 10000;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }

    }else if(antes[0] == '\O' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1]){

        if(depois[0] == 'k'){
            result = std::stof(numero) / 1000;
        }else if(depois[1] == 'h'){
            result = std::stof(numero) / 100;

        }else if(depois[1] == 'a'){
            result = std::stof(numero) / 10;

        }else if(depois[1] == 'd'){
            result = std::stof(numero) * 10;

        }else if(depois[1] == 'c'){
            result = std::stof(numero) * 100;

        }else if(depois[1] == 'm'){
            result = std::stof(numero) * 1000;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }       
    }else if(antes[0] == 'd' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1]){

        if(depois[0] == 'k'){
            result = std::stof(numero) / 10000;
        }else if(depois[1] == 'h'){
            result = std::stof(numero) / 1000;

        }else if(depois[1] == 'a'){
            result = std::stof(numero) / 100;

        }else if(depois[1] == '\O'){
            result = std::stof(numero) / 10;

        }else if(depois[1] == 'c'){
            result = std::stof(numero) * 10;

        }else if(depois[1] == 'm'){
            result = std::stof(numero) * 100;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }
    }else if(antes[0] == 'c' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1]){

        if(depois[0] == 'k'){
            result = std::stof(numero) / 100000;
        }else if(depois[1] == 'h'){
            result = std::stof(numero) / 10000;

        }else if(depois[1] == 'a'){
            result = std::stof(numero) / 1000;

        }else if(depois[1] == '\O'){
            result = std::stof(numero) / 100;

        }else if(depois[1] == 'd'){
            result = std::stof(numero) / 10;

        }else if(depois[1] == 'm'){
            result = std::stof(numero) * 10;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }
    }else if(antes[0] == 'c' && antes[sizeof(antes)/ sizeof(antes[0])-1] == depois[sizeof(depois)/ sizeof(depois[0])-1]){

        if(depois[0] == 'k'){
            result = std::stof(numero) / 1000000;
        }else if(depois[1] == 'h'){
            result = std::stof(numero) / 100000;

        }else if(depois[1] == 'a'){
            result = std::stof(numero) / 10000;

        }else if(depois[1] == '\O'){
            result = std::stof(numero) / 1000;

        }else if(depois[1] == 'd'){
            result = std::stof(numero) / 010;

        }else if(depois[1] == 'c'){
            result = std::stof(numero) / 10;

        }else{
            std::cout << "unidade  final inválida ou igual a inicial" << std::endl;
        }
    }std::cout << result << std::endl;
}
int main(){
    char uinicial[5],ufinal[5],valor[99];

    std::cout << "digite  a unidade inicial" << std::endl; 
    std::cin >> uinicial;

    std::cout<< "digite a unidade final" << std:: endl;
    std::cin >> ufinal;

    std::cout << "digite o valor" << std::endl;
    std::cin >> valor; 

    Converter(uinicial, ufinal,valor);

}
