#include <iostream>
#include <iomanip>

using namespace std;

/*Faça um programa onde o usuário entre com 3 notas e exiba na saída a soma delas.
Complemente o programa anterior exibindo a média aritmética das notas com precisão de 3 casas decimais.*/

int main(){

    float nt1, nt2, nt3, media;
    
    cout << "Digite a primeira nota:\n";
    cin >> nt1;

    cout << "Digite a segunda nota:\n";
    cin >> nt2;

    cout << "Digite a terceira nota:\n";
    cin >> nt3;

    media = (nt1 + nt2 + nt3)/3;

    cout << "A soma de " << nt1 << " + " << nt2 << " + " << nt3 << " é " << fixed << setprecision(3) << media << ".\n";

    return 0;
}