#include <iostream>
#include <cctype>


int main(){
float a,b;

while((a>=0 && a <=10) && (b>=0 && b<=10)){

    std::cout << "nota 1:" << std::endl;
    std::cin >> a;
    std::cout << "nota 2:" << std::endl; 
    std::cin >> b;
    if((a <0 || a >10) || (b <0 || b >10)){
        std::cout << "digite uma nota entre 0 e 10";
        break;
    }
    float media = (a+b)/2;

    if(media >=0 && media <4 ){

        std::cout << "media abaixo de 4, reprovado. " << media << std:: endl;
    }else if(media >=4 && media <6 ){

        std::cout << "media maior que quatro e menor que 6, recuperação. " << media << std::endl;
    }else{

        std::cout << "média acima de 6, aprovado. " << media <<  std::endl;
    }
    break;



}



}