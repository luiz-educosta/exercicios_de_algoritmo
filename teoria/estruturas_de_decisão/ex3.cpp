#include <iostream>

using namespace std;

/*Crie um programa capaz de ler o nome e idade de duas pessoas e dizer o nome da
pessoa mais velha.*/

int main(){

    char nome1[20], nome2[20];
    int idade1, idade2;

    cout << "Digite o nome e a idade da primeira pessoa:" << endl;
    cin.getline(nome1, 20);
    cin >> idade1;

    cin.ignore();

    cout << "Digite o nome e a idade da segunda pessoa:" << endl;
    cin.getline(nome2, 20);
    cin >> idade2;

    if (idade1 < idade2){
        cout << "A pessoa com o nome " << nome2 << " é mais velha!" << endl;
    }
    
    else if (idade1 > idade2){
        cout << "A pessoa com o nome " << nome1 << " é mais velha!" << endl;
    }

    else{
        cout << "Os dois tem a mesma idade!" << endl;
    }
    return 0;
} 