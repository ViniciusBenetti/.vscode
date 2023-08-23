#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <limits>
#include <iomanip>




float primoOunao(float amostra){
    int numeroInt = static_cast<int>(amostra);
    int i,a=0;
    if(numeroInt <=1){
        std::cout << "não é primo";
        a++;
    }else {
        int raiz = sqrt(amostra);
        for(i=2;i<=raiz;i++){
            if(numeroInt % i == 0 ){
                std::cout << "não é número primo" << std::endl;
                a++;
            }

        }if(a <1){
            std::cout << "é número primo" << std::endl;
        }
    }
}

float paraBinario(float amostra){
    int inteiro = static_cast<int>(amostra); 
    int j = 0;
    char bin[10000];

    while (inteiro > 0) {
        bin[j++] = '0' + (inteiro % 2); 
        inteiro /= 2;
    }
    bin[j] = '\0'; 
    for (int i = 0, k = j - 1; i < k; ++i, --k) {
        char temp = bin[i];
        bin[i] = bin[k];
        bin[k] = temp;
    }

    std::cout << bin << std::endl;
}


std::string floatParaString(float amostra){
    std::stringstream STRamostra;
    STRamostra << amostra;
    return STRamostra.str();
    


}

void Tamanho(float amostra){
    std::string valorString = floatParaString(amostra);

    int tam = valorString.size();
    
    std::cout << "tamanho: " << tam << std::endl;
}

float Fatorial(float amostra){
    int i;
    double fat=1;

    for(i=amostra;i>1;i--){
        fat *= i;
    }
    std::cout << std::fixed << std::setprecision(2) << fat << std::endl;


}

void Conjunto(float amostra) {
    std::stringstream STRamostra;
    STRamostra << amostra;
    std::string valorString = STRamostra.str();

    if (amostra >= 0 && valorString.find(".") == std::string::npos) {
        std::cout << amostra << " é um número natural" << std::endl;
    } else if (valorString.find(".") == std::string::npos) {
        std::cout << amostra << " é um número inteiro" << std::endl;
    } else if (valorString.find(".") != std::string::npos) {
        std::cout << amostra << " é um número racional" << std::endl;
    } else if (valorString.find(".") != std::string::npos && std::isinf(amostra)) {
        std::cout << amostra << " é um número irracional" << std::endl;
    }
}


int main(){
    int tam,val,i;
    float amostra,resul;

    std::cout << "digite um valor:" << std::endl; 
    std::cin >> amostra;

    std::cout << "digite o número que você quer ver:\n1-conjunto numérico\n2-tamanho\n3-fatorial\n4-converter para binário\n5-número primo ou não\n";
    std::cin >> val;


    switch(val)
    {
    case 1:
        Conjunto(amostra);
        break;
    case 2:
        Tamanho(amostra);
        break;
    
    case 3:
        Fatorial(amostra);
        break;
    
    case 4:
        paraBinario(amostra);
        break;

    case 5:
        primoOunao(amostra);
        break;
    
    default:
        std::cout << "opção inválida\n";
        break;
    }

}
