#include <iostream>
#include <iomanip>

using namespace std;

/*Faça um código que seja possível entrar com um valor inteiro e que mostre na tela a
metade desse número com 1 casa decimal.*/

int main(){

    int num;
   
    cout << "Digite um numero inteiro:\n";

    cin >> num;

    cout << "A metade desse número é " << fixed << setprecision(1) << num / 2.0 << ".\n";

    return 0;
}