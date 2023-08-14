#include <iostream>
using namespace std;


void validarsenha(string senha){
    int i,j,k,l;
    string caracteres_sp = "!@#$%¨&*()_-+/?;:<>}{][,.^`";
    string num = "0123456789";
    string mai = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string min = "abcdefghijklmnopqrstuvwxyz";
    int a=0,b=0,c=0,d=0;


    for(i=0;i<caracteres_sp.size();i++){
        if(senha.find(caracteres_sp[i]) <=26 && senha.size()>=8 && senha.size() <=20){
            a += 1;
            break;
            //cout << senha.find(caracteres[i]); 
    }
    }
    for(j=0;j<num.size();j++){
        if(senha.find(num[j]) <=9 && senha.size()>=8 && senha.size() <=20){
            b += 1;
            break;
        }
    }
    for(k=0;k<mai.size();k++){
        if(senha.find(mai[k]) <=25 && senha.size()>=8 && senha.size() <=20){
            c += 1;
            break;
        }

    }
    for(l=0;l<min.size();l++){
        if(senha.find(min[l]) <=25 && senha.size()>=8 && senha.size() <=20){
            d += 1;
            break;
        }

    }

    if( a ==1 && b ==1 && c ==1 && d == 1){
        cout << "senha valida" << endl;
    }
    else {
        cout << "senha invalida" << endl;
    }
    
}

int main(){
    string senhauser;

    cout << "insira uma senha:\n";
    cin >> senhauser;
    validarsenha(senhauser);
}