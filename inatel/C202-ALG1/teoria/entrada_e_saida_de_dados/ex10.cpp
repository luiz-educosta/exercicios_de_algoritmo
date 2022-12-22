#include <iostream>

using namespace std;

/*Faça um programa que calcule o valor a ser pago por uma dívida em atraso. O usuário
deve informar o valor original da dívida (ex. R$ 50,00), a quantidade de dias em atraso
(ex. 35 dias) e o valor da multa por dia de atraso (ex. R$ 0,25).*/

int main(){
    double divida, multa, valor_final;
    int dias;

    cout << "Digite o valor original da dívida:\n";
    cin >> divida;

    cout << "Digite a quantidade de dias em atraso:\n";
    cin >> dias;

    cout << "Digite o valor da multa por dia de atraso:\n";
    cin >> multa;

    valor_final = divida + (dias * multa);

    cout << "Para uma dívida de R$ " << divida << " com " << dias << " dias de atraso e uma multa de R$ " << multa << " por dia, teve um total de R$ " << valor_final << "\n";
    
    return 0;

}