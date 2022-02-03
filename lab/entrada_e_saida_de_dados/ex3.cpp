#include <iostream>

using namespace std;

/*3) Faça um programa que leia o nome de uma primeira pessoa e a idade dela, nesta ordem. Depois, leia o nome de uma segunda pessoa e a idade dela, nesta ordem. Mostre na saída a idade e o nome da segunda pessoa e a idade e o nome da primeira pessoa, nesta ordem.*/

int main(){

    char nome1[20], nome2[20];
    int idade1, idade2;

    cout << "Digite o nome da primeira pessoa:\n";
    cin.getline(nome1, 20);

    cout << "Digite a idade de " << nome1 << ":\n";
    cin >> idade1;
    cin.ignore();

    cout << "Digite o nome da segunda pessoa:\n";
    cin.getline(nome2, 20);

    cout << "Digite a idade de " << nome2 << ":\n";
    cin >> idade2;
    cin.ignore();

    cout << "A idade de " << idade2 << " é de " << nome2 << ".\n";
    cout << "A idade de " << idade1 << " é de " << nome1 << ".\n";

    return 0;
}