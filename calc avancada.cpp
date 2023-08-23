#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getPrecedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/' || op == '%')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

string applyOperation(double a, double b, char op) {
    if (op == '+')
        return to_string(a + b);
    if (op == '-')
        return to_string(a - b);
    if (op == '*')
        return to_string(a * b);
    if (op == '/')
        return to_string(a / b);
    if (op == '%')
        return to_string(fmod(a, b));
    if (op == '^')
        return to_string(pow(a, b));
    return "";
}

string Calcular(string vlue) {
    double resultado = 0;
    char operacao = '+';
    size_t pos = 0;

    while (pos < vlue.length()) {
        size_t nextPos = vlue.find_first_of("+-*/%^", pos);
        string token = vlue.substr(pos, nextPos - pos);
        if (!token.empty()) {
            double valor = stod(token);

            if (operacao == 'R') {
                resultado = sqrt(resultado);
            } else if (getPrecedence(operacao) >= getPrecedence(vlue[nextPos])) {
                resultado = stod(applyOperation(resultado, valor, operacao));
            } else {
                resultado = valor;
            }
        }

        if (nextPos == string::npos) {
            break;
        }

        operacao = vlue[nextPos];
        pos = nextPos + 1;
    }

    cout << "Resultado: " << resultado << endl;
    return to_string(resultado);
}

int main() {
    int i;
    string vlue, valores, opr;
    char operacoes;

    for (i = 0; i < 100; i++) {
        cout << "Digite um valor" << endl;
        cin >> valores;
        vlue.append(valores);

        cout << "Digite uma operacao" << endl;
        cin >> operacoes;

        if (operacoes == '=') {
            Calcular(vlue);
            break;
        } else if (operacoes == '+') {
            vlue += "+";
        } else if (operacoes == '-') {
            vlue += "-";
        } else if (operacoes == 'x') {
            vlue += "*";
        } else if (operacoes == '/') {
            vlue += "/";
        } else if (operacoes == '%') {
            vlue += "%";
        } else if (operacoes == '^') {
            vlue += "^";
        } else if (operacoes == 'R') {
            vlue += "R";
        }
    }

    return 0;
    
}
