#include <iostream>

using namespace std;

/*Faça um programa onde o usuário entre com sua idade e seu nome (nessa ordem) e exiba na saída seu nome e sua idade daqui a exatos 2 anos, nessa ordem.*/

int main(){
    int idade, anos;
    char nome[20];

    cout << "Digite sua idade:\n";
    cin >> idade;
    cin.ignore();

    anos = idade + 2;
    
    cout << "Digite seu nome:\n";
    cin.getline(nome, 20);

    cout << "Seu nome é " << nome << " e sua idade daqui a dois anos é " << anos << ".\n";

    return 0;
}