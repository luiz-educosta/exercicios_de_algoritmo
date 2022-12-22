#include <iostream>
#include <iomanip>

using namespace std;

/*Faça um código que tenha a entrada de 3 valores reais (A, B e C) e mostre na saída o
resultado de (A+B)/C com 4 casas decimais.*/

int main() {

    double A, B, C, res;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    res = (A + B)/C;

    cout << "A soma de (" << A << " + " << B << ")/" << C << " é " << fixed << setprecision(4) << res << ".\n";

    return 0;
}