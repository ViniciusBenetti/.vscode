#include <iostream>


int main(){
    double i,j; 

    std::cout << "qual tabuada você quer ver?" << std::endl;
    std::cin >> i; 

    for(j=0;j<=10;j++){
        std::cout << j << " X " << i << " = " << j*i << std::endl;

        
    }
}