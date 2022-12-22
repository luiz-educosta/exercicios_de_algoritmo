#include <iostream>

using namespace std;

/*Escreva um código em que o usuário possa entrar com seu nome e data de nascimento e obter como resposta qual o seu signo do zodíaco. Utiliza a imagem abaixo para maiores referências
 - Aquário: 20 de Janeiro - 18 e Fevereiro;
 - Peixes: 19 de Fevereiro - 20 de Março;
 - Áries: 21 de Março - 19 de Abril;
 - Touro: 20 de Abril - 20 de Maio;
 - Gêmeos: 21 de Maio - 20 de Junho;
 - Câncer: 21 de Junho - 22 de Julho;
 - Leão: 23 de Julho - 22 de Agosto;
 - Virgem: 23 de Agosto - 22 de Setembro;
 - Libra: 23 de Setembro - 22 de Outubro;
 - Escorpião: 2 de Outubro - 21 de Novembro;
 - Sagitário: 22 de Novembro - 21 de Dezembro;
 - Capricórnio: 22 de Dezembro - 19 de Janeiro;
 */

int main(){

    char nome[20];
    int dia, mes, ano;

    cout << "Digite o seu nome:" << endl;
    cin.getline(nome, 20);

    cout << "Digite sua data de aniversário:" << endl;
    cout << "Dia [DD]:";
    cin >> dia;
    cout << "Mês [M] (Janeiro = 1, Fevereiro = 2, ...):";
    cin >> mes;
    cout << "Ano [AAAA]:";
    cin >> ano;

    //Aquário: 20 de Janeiro - 18 e Fevereiro
    if((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)){
        cout << "Signo: Aquário!" << endl;
    }
    
    //Peixes: 19 de Fevereiro - 20 de Março;
    else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)){
        cout << "Signo: Peixes!" << endl;
    }

    //Áries: 21 de Março - 19 de Abril;
    else if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)){
        cout << "Signo: Áries!" << endl;
    }

    //Touro: 20 de Abril - 20 de Maio;
    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)){
        cout << "Signo: Touro!" << endl;
    }

    //Gêmeos: 21 de Maio - 20 de Janeiro;
    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)){
        cout << "Signo: Gêmeos!" << endl;
    }

    //Câncer: 21 de Junho - 22 de Julho;
    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)){
        cout << "Signo: Câncer!" << endl;
    }

    //Leão: 23 de Julho - 22 de Agosto;
    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)){
        cout << "Signo: Leão!" << endl;
    }

    //Virgem: 23 de Agosto - 22 de Setembro;
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)){
        cout << "Signo: Virgem!" << endl;
    }

    //Libra: 23 de Setembro - 22 de Outubro;
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)){
        cout << "Signo: Libra!" << endl;
    }

    //Escorpião: 23 de Outubro - 21 de Novembro;
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)){
        cout << "Signo: Escorpião!" << endl;
    }

    //Sagitário: 22 de Novembro - 21 de Dezembro;
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)){
        cout << "Signo: Sagitário!" << endl;
    }

    //Capricórnio: 22 de Dezembro - 19 de Janeiro;
    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 01)){
        cout << "Signo: Capricórnio!" << endl;
    }
    
    else{
        cout << "Você digitou dia e/ou mês errado!" << endl;
    }

    return 0;
}