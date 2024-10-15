#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    double x, y; // Variáveis de entrada

    // Solicita o valor de X
    cout << "# Valor de X: ";
    cin >> x;

    // Solicita o valor de Y
    cout << "# Valor de Y: ";
    cin >> y;

    // Verifica se está na origem
    if ((x == 0) && (y == 0))
    {
        cout << "Origem" << endl;
    }

    // Verifica se está no eixo Y
    if ((x == 0) && (y != 0))
    {
        cout << "Eixo Y" << endl;
    }

    // Verifica se está no eixo X
    if ((x != 0) && (y == 0))
    {
        cout << "Eixo X" << endl;
    }

    else
    {
        // Determina o quadrante
        if (x > 0)
        {
            cout << (y > 0 ? "Q1" : "Q4") << endl;
        }

        else if (x < 0)
        {
            cout << (y > 0 ? "Q2" : "Q3") << endl;
        }
    }

    return 0; // Fim do programa
}
