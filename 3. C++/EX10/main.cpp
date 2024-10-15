#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int seg, minu = 0, hor = 0;

    cout << "# Digite a duracao em segundos: ";
    cin >> seg;

    minu = seg / 60;
    seg = seg % 60;

    hor = minu / 60;
    minu = minu % 60;


Para formatar a saída no estilo 00:00:00 no seu programa, você pode usar a função setw() da biblioteca <iomanip>, que define uma largura mínima de campo para a impressão de números, e setfill() para preencher com zeros os espaços vazios.

Aqui está a versão ajustada do seu código:

cpp
Copiar código
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int seg, minu = 0, hor = 0;

    // Solicita ao usuário a duração em segundos
    cout << "# Digite a duracao em segundos: ";
    cin >> seg;

    // Calcula minutos e segundos restantes
    minu = seg / 60;
    seg = seg % 60;

    // Calcula horas e minutos restantes
    hor = minu / 60;
    minu = minu % 60;

    // Configura a precisão e formato de saída 00:00:00
    cout << setfill('0') << setw(2) << hor << ":"
         << setfill('0') << setw(2) << minu << ":"
         << setfill('0') << setw(2) << seg << endl;

    return 0;
}
