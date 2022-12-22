#include <iostream>

using namespace std;

/*Faça um código que peça a entrada de um número inteiro e mostre na tela o dobro
desse valor de entrada.*/

int main(){

    int num, dobro;

    cout << "Digite um número inteiro:\n";

    cin >> num;

    dobro = num * 2;

    cout << "O dobro do " << num << " é " << dobro << ".\n";
    
    return 0;
}