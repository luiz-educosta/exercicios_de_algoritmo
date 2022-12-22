#include <iostream>

using namespace std;

/*Faça um código onde o usuário entre com sua idade e seja mostrado na tela se a pessoa é ou não maior de idade.*/

int main(){

    int idade;

    cout << "Digite a sua idade:" << endl;
    cin >> idade;

    if (idade > 18){
        cout << "A pessoa é maior de idade!" << endl;
    }else{
        cout << "A pessoa não é maior de idade!" << endl;
    }

        

    return 0;

}