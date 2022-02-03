#include <iostream>

using namespace std;

/*Faça um código onde o usuário entre com seu peso e sua altura. Deve-se calcular o imc
da pessoa de acordo com a seguinte fórmula:

IMC = peso/(altura * altura)

Depois deve-se mostrar a classificação da pessoa de acordo com a seguinte tabela:
____________________________________
|     IMC     |    CLASSIFICAÇÃO   |
|-------------|--------------------|
|    < 18,5   |   Abaixo do Peso   |
| 18,6 à 24,9 |      Saudável      |
| 25,0 à 29,9 |   Peso em Excesso  |
| 30,0 à 34,9 |  Obesidade Grau I  | 
| 35,0 à 39,9 |  Obesidade Grau II |
|    >=40,0   | Obesidade Grau III |
------------------------------------
*/

int main(){

    double peso, altura, imc;

    cout << "Digite o seu peso: " << endl;
    cin >> peso;

    cout << "Digite a sua altura: " << endl;
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Seu IMC é de " << imc << endl;

    if ( imc < 18.5 ){
        cout << "Você está Abaixo do Peso!" << endl;
    }
    else if ( imc > 18.6 && imc < 24.9 ){
        cout << "Você está Saudável!" << endl;
    }
    else if ( imc > 25 && imc < 29.9 ) {
        cout << "Você está com peso em Excesso!" << endl;
    }
    else if ( imc > 30 && imc < 34.9){
        cout << "Você está com Obesidade Grau I" << endl;
    } 
    else if ( imc > 35 && imc < 39.9 ){
        cout << "Você está com Obesidade Grau II (severa)" << endl;
    }
    else{
        cout << "Você esta com Obesidade Grau III (mórbida)" << endl;
    } 

    return 0;
}