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


Para formatar a sa�da no estilo 00:00:00 no seu programa, voc� pode usar a fun��o setw() da biblioteca <iomanip>, que define uma largura m�nima de campo para a impress�o de n�meros, e setfill() para preencher com zeros os espa�os vazios.

Aqui est� a vers�o ajustada do seu c�digo:

cpp
Copiar c�digo
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int seg, minu = 0, hor = 0;

    // Solicita ao usu�rio a dura��o em segundos
    cout << "# Digite a duracao em segundos: ";
    cin >> seg;

    // Calcula minutos e segundos restantes
    minu = seg / 60;
    seg = seg % 60;

    // Calcula horas e minutos restantes
    hor = minu / 60;
    minu = minu % 60;

    // Configura a precis�o e formato de sa�da 00:00:00
    cout << setfill('0') << setw(2) << hor << ":"
         << setfill('0') << setw(2) << minu << ":"
         << setfill('0') << setw(2) << seg << endl;

    return 0;
}
