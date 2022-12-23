/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
Entrada

O arquivo de entrada contém um valor inteiro N.
Saída

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    int horas, min, seg, resto;

    cin >> n;
    horas = n / 3600;
    resto = n % 3600;
    min = resto / 60;
    seg = resto % 60;
    cout << horas << ":" << min << ":" << seg << endl;

    return 0;
}