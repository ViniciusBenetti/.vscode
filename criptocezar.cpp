#include <iostream>
#include <string>
using namespace std;

string Criptografar(string palavra, int C) {
    string alfa = "abcdefghijklmnopqrstuvwxyz";

    for (size_t i = 0; i < palavra.size(); i++) {
        size_t pos = alfa.find(palavra[i]);
        
        if (pos != string::npos) {
            size_t newPos = (pos + C) % alfa.size();
            palavra[i] = alfa[newPos];
        }
    }

    return palavra;
}

int main() {
    string palavra;
    int C;

    cout << "Digite a mensagem que vai deslocar" << endl;
    cin >> palavra;
    cout << "Digite o valor de deslocamento" << endl;
    cin >> C;

    string mensagemCriptografada = Criptografar(palavra, C);

    cout << "Mensagem criptografada: " << mensagemCriptografada << endl;

    return 0;
}
