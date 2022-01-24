#include <iostream>

using namespace std;

/*Crie um código capaz de ler 2 valores A e B representando o tamanho de um arquivo
em kB e a velocidade de download em kB/s e calcular quanto tempo será necessário
para que o download seja concluído. O tempo necessário deve ser apresentado no
formato horas, minutos e segundos. Exemplo: p/ um tempo calculado igual 3702
segundos seu codigo deve apresentar: 1h, 1 min. e 42 seg.*/

int main(){

    int tamanho_do_arquivo, velocidade_do_download, tempo_do_download, hora, minutos, segundos;

    cout << "Digite o tamanho do arquivo em kB:\n";
    cin >> tamanho_do_arquivo;

    cout << "Digite a velocida do download em kB/s:\n";
    cin >> velocidade_do_download;

    tempo_do_download = tamanho_do_arquivo / velocidade_do_download;

    hora = tempo_do_download / 3600;
    minutos = (tempo_do_download % 3600) / 60;
    segundos = tempo_do_download % 60;

    cout << "Para um tempo de download calculado de " << tempo_do_download << " segundos, seu código deve apresentar " << hora << "h, " << minutos << "min, " << segundos << "seg.\n";
    
    return 0;
}