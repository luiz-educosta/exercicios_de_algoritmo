#include <iostream>

using namespace std;

/*Faça um código onde seja possível entrar com o primeiro nome do usuário e printar na
tela uma mensagem de boas vindas com o nome da pessoa. Exemplo: Se a pessoa
entrar com o nome “Fulano”, a saída deverá ser “Seja bem-vindo, Fulano”.*/

int main(){

    char nome[20];

    cout << "Digite seu nome:\n";

    cin >> nome;

    cout << "Seja bem vindo " << nome << "!\n";

    return 0;
}