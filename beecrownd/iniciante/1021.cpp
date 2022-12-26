#include <iostream>
#include <iomanip>

using namespace std;

/*

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
Entrada

O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída

Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
.*/

int main(){

    double num;
    int auxNota, auxMoeda;
    int moeda, intNum; // variáveis para utilizar as casas decimais

    cin >> num;

    //utilizando as parte decimais para ver as moedas a serem utilizadas
    intNum = int(num);
    moeda = (num - intNum) * 100; // convertendo para decimal , pois "%" só pode ser com inteiro

    cout << "NOTAS:" << endl;
    cout << int(num/100) << " nota(s) de R$ 100.00" << endl;

    auxNota = int(num) % 100;
    cout << auxNota/50 << " nota(s) de R$ 50.00" << endl;

    auxNota = auxNota % 50; 
    cout << auxNota/20 << " nota(s) de R$ 20.00" << endl;

    auxNota = auxNota % 20;
    cout << auxNota/10 << " nota(s) de R$ 10.00" << endl;

    auxNota = auxNota % 10;
    cout << auxNota/5 << " nota(s) de R$ 5.00" << endl;

    auxNota = auxNota % 5;
    cout << auxNota/2 << " nota(s) de R$ 2.00" << endl;
    
    cout << "MOEDAS:" << endl;

    auxMoeda = auxNota % 2;
    cout << auxMoeda << " moeda(s) de R$ 1.00" << endl;

    auxMoeda = moeda / 50;
    cout << auxMoeda << " moeda(s) de R$ 0.50" << endl;
    
    auxMoeda = moeda % 50;

    cout << auxMoeda/25 << " moeda(s) de R$ 0.25" << endl;

    auxMoeda = auxMoeda % 25;
    cout << auxMoeda/10 << " moeda(s) de R$ 0.10" << endl;
    
    auxMoeda = auxMoeda % 10;
    cout << auxMoeda/5 << " moeda(s) de R$ 0.05" << endl;

    auxMoeda = auxMoeda % 5;
    cout << auxMoeda << " moeda(s) de R$ 0.01" << endl;

    //100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
    
    return 0;
}