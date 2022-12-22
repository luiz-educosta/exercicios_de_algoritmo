#include <iostream>

using namespace std;

/*Faça um código que peça a entrada da idade da pessoa e depois do nome inteiro dela.
Ao final mostre a mensagem “Ola, <nome>! Sua idade foi registrada: <idade> anos.”. O
escrito <nome> representa o nome da pessoa e <idade> representa sua idade.*/

int main(){
    int idade;

    char nome[100];

    cout << "Digite a sua idade:\n";
    cin >> idade;
    cin.ignore();

    cout << "Digite o seu nome completo:\n";
    cin.getline(nome, 100);
    
    cout << "Olá, " << nome << "! Sua idade foi registrada: " << idade << " anos.\n";

    return 0;
}