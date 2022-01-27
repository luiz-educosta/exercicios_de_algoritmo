#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para
calcular seu rendimento, ela deverá fornecer o valor constante da aplicação mensal, a
taxa e o número de meses. Sabendo-se que a fórmula usada para este cálculo é:
sn = (1+j) * ((((((1+j)^n)-1))/j)*p)
onde:
n ​ = Nº de Meses
j ​ = Taxa de Juros Mensal
p ​ = Valor do Depósito Regular
Sn ​= Valor Obtido ao Final


*/

int main(){
    double j, p, sn;
    int n;

    cout << "Digite o número de meses:\n";
    cin >> n;

    cout << "Digite a taxa de juros mensal:\n";
    cin >> j;

    cout << "Digite o valor do depósito regular\n";
    cin >> p;

    sn = (1+j) * ((pow(1+j,n))-1) * p/j;


    cout << "O Valor obtido no final foi de R$ " << fixed << setprecision(2) << sn << "\n";

    return 0;
}