#include <iostream>

using namespace std;

/*Faça um programa onde o usuário entre com 3 notas e exiba na saída a soma delas.*/

int main(){
    
    float nt1, nt2, nt3, soma;
    
    cout << "Digite a primeira nota:\n";
    cin >> nt1;

    cout << "Digite a segunda nota:\n";
    cin >> nt2;

    cout << "Digite a terceira nota:\n";
    cin >> nt3;

    soma = nt1 + nt2 + nt3;

    cout << "A soma de " << nt1 << " + " << nt2 << " + " << nt3 << " é " << soma << ".\n";

    return 0;
}