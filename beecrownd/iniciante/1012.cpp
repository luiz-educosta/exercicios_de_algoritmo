/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.
Saída

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    
    double A, B, C;
    double pi = 3.14159;
    double tri, cir, trap, qua, ret;


    cin >> A >> B >> C;

    tri = (A * C) /2;
    cir = pi * (pow(C, 2));
    trap = ((A + B) * C) / 2;
    qua = B * B;
    ret = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << trap << endl;
    cout << "QUADRADO: " << qua << endl;
    cout << "RETANGULO: " << ret << endl;
    
    return 0;
}