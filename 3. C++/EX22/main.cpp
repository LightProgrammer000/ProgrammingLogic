#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int temp = 0, horIni, horFin; // Variáveis

    // Hora inicial
    cout << "# Hora inicial: ";
    cin >> horIni;

    // Hora final
    cout << "# Hora final: ";
    cin >> horFin;

    // Cálculo do tempo
    if (horFin > horIni)
    {
        temp = horFin - horIni;
    }
    else
    {
        temp = (24 + horFin) - horIni;
    }

    // Verifica validade
    if ((temp >= 1) && (temp <= 24))
    {
        cout << "# O JOGO DUROU, " << temp << " HORA(S)" << endl;
    }
    else
    {
        cout << "# Tempo Invalido !" << endl;
    }

    return 0; // Fim
}
