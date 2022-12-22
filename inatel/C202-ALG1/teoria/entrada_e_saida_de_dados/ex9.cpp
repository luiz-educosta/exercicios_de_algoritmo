#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*Dado o raio R de uma esfera, escreva um código capaz de calcular o volume da esfera
e exibir com precisão de 4 casas decimais. Volume da esfera = (4 * π * R³)/3
3.*/

int main(){
    
    double r, volume, PI = 3.14159;

    cout << "Digite o raio desejado para a esfera:\n";
    cin >> r;

    volume = (4 * PI * pow(r,3))/3;
    
    cout << "O volume da esfera é de " << fixed << setprecision(4) << volume << "\n";

    return 0;
}