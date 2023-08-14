#include <iostream>
#include <string>


int main(){
    char valor1[9],valor2[9],operacao;
    float result;
    

    std::cout << "digite o primeiro valor: ";
    std::cin >> valor1;
    float valorum = std::stof(valor1);
    std::cout << "digite o segundo valor";
    std::cin>> valor2;
    float valordois = std::stof(valor2);
    std::cout << "digite a operação(+,-,x,/)";
    std::cin >> operacao; 

    if(operacao == '+'){
       result = valorum + valordois; 

    }else if(operacao == '-'){
       result = valorum + valordois; 

    } else if(operacao == 'x'){
       result = valorum * valordois;


    }else if(operacao == '/'){
        result = valorum / valordois;
    }
    std::cout << "resultado: " << result << std::endl;
}