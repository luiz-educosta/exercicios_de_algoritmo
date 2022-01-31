#include <iostream>
#include <cmath>

using namespace std;

/*1) Faça um programa onde o usuário entre com 2 números reais e exiba, na saída, a raiz quadrada da multiplicação deles.*/

int main(){
    float num1, num2, raiz;

    cout << "Digite o primiro número real:\n";
    cin >> num1;

    cout << "Digite o segundo número real:\n";
    cin >> num2;

    raiz = sqrt((num1 * num2));

    cout << "A raiz quadrada da multiplicação de " << num1 << " * " << num2 << " é " << raiz << "\n";

    return 0;
}