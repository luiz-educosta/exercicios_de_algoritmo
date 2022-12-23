/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia =
Entrada

O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.
Saída

Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    
    double x1, x2, y1, y2;
    double dist;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    dist =  sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2));

    cout << fixed << setprecision(4);

    cout << dist << endl;
 
    return 0;
}