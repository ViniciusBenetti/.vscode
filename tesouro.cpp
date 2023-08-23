#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <chrono>


int main(){
    int x=1,y=1,i;
    char xs[5],ys[5];
    char coord[10];

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator(seed);

    std::uniform_int_distribution<int> distribuition(-999, 999);

    int x_1 = distribuition(generator);
    //std::cout << x_1 << std::endl; 
    int y_1 = distribuition(generator);
    //std::cout << y_1 << std::endl; 


    std:: cout << "bem vindos ao jogo do tesouro,objetivo: encontrar as coordenadas do tesouro" << std::endl;
    for(i=1;i<20;i++){
    std:: cout << "tentativa " << i << " restam " << 20-i << std::endl;
    std:: cout << "digite um valor inteiro para x de -999 ate 999" << std::endl;
    std:: cin >> x;
    std:: cout << "digite um valor inteiro para y de -999 ate 999" << std::endl;
    std:: cin >> y;

    if(i == 19){
        std::cout << "suas tentativas acabaram! você perdeu" << std::endl;
        std:: cout << "as coordenadas eram x:" << x_1 << " y:" << y_1 << std::endl;
    }

    if(x_1 == x && y_1 == y){
        std::cout<< "você ganhou o jogo com " << i << " tentativas, parabens" << std:: endl;
        break;
    
    }
    if (x == x_1){
        std::cout << "voce acertou a coordenada x" << std::endl;   
    } else if (std::abs(x_1 - x) < 15) {
        std::cout << "a coordenada x esta  muito perto" << std::endl;
    } else if (std::abs(x_1 - x) < 100) {
        std::cout << "a coordenada x esta perto" << std::endl;
    } else if (std::abs(x_1 - x) < 500) {
        std::cout << "a coordenada x esta longe" << std::endl;
    } else {
        std::cout << "a coordenada x esta muito longe" << std::endl;
    }

      if (y == y_1){
        std::cout << "voce acertou a coordenada y" << std::endl;   
    } else if (std::abs(y_1 - y) < 15) {
        std::cout << "a coordenada y esta muito perto" << std::endl;
    } else if (std::abs(y_1 - y) < 100) {
        std::cout << "a coordenada y esta perto" << std::endl;
    } else if (std::abs(y_1 - y) < 500) {
        std::cout << "a coordenada y esta longe" << std::endl;
    } else {
        std::cout << "a coordenada y esta muito longe" << std::endl;
    }
 }
}

   