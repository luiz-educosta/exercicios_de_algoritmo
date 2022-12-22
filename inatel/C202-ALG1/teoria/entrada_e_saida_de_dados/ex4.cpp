#include <iostream>
#include <iomanip>

using namespace std;

/*Faça um código que entre com dois valores reais, some-os e mostre o resultado na
saída com duas casas decimais.*/

int main(){

    float num1, num2, soma;

    cout << "Digite o primeiro numero:\n";

    cin >> num1;

    cout << "Digite o segundo numero:\n";

    cin >> num2;

    soma = num1 + num2;

    cout << "A soma de " << num1 << " + " << num2 << " é " << fixed << setprecision(2) << soma << ".\n";

    return 0;
}