#include <iostream>

using namespace std;

/*Crie um programa capaz de ler as notas N1, N2, N3, e N4 de um aluno e dizer se ele foi aprovado (nota final maior ou igual a 60) , reprovado (nota final abaixo de 30) ou ficou de NP3 (nota final maior ou igual a 30 e menor que 60). Para calcular a nota final utilize a seguinte fórmula: 0.25 * N1 + 0.45 * N2 + 0.1 * N3 + 0.2 * N4*/

int main(){

    double N1, N2, N3, N4, NF;

    cout << "Digite a N1:" << endl;
    cin >> N1;

    cout << "Digite a N2:" << endl;
    cin >> N2;

    cout << "Digite a N3:" << endl;
    cin >> N3;

    cout << "Digite a N4:" << endl;
    cin >> N4;

    NF = 0.25 * N1 + 0.45 * N2 + 0.1 * N3 + 0.2 * N4;

    cout << "A nota final foi " << NF << " pontos." << endl;

    if(NF >= 60){
        cout << "Parabéns, você foi APROVADO!" << endl;
    }

    else if(NF >= 30 && NF < 60){
        cout << "Você esta de NP3!!!" << endl;
    } 
    else {
        cout << "Você foi REPROVADO!" << endl;
    }
    return 0;
}