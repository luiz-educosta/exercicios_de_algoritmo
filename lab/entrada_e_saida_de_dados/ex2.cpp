#include <iostream>
#include <iomanip>

using namespace std;

/*2) Faça um programa onde o usuário entre com o valor do raio de um círculo, e mostre na saída o perímetro da circunferência do mesmo. Dados: P = 2*pi*r. pi = 3.14159;*/

int main(){
    float p, r, pi = 3.14159;

    cout << "Digite o valor do raio de um círculo:\n";
    cin >> r;

    p = 2 * pi * r;

    cout << "O perímetro da circunferência é de " << p << ".\n";

    return 0;
}