#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int x, y; // Variáveis de entrada

    // Solicita os dois números
    cout << "# Digite dois numeros: " << endl;

    cout << "# X: ";
    cin >> x;

    cout << "# Y: ";
    cin >> y;

    // Enquanto os números forem diferentes
    while (x != y)
    {
        // Verifica a ordem
        if (x > y)
        {
            cout << "# DECRESCENTE!" << endl;
        }

        else
        {
            cout << "# CRESCENTE!" << endl;
        }

        // Solicita novos números
        cout << "\n# Digite outros dois numeros: " << endl;

        cout << "# X: ";
        cin >> x;

        cout << "# Y: ";
        cin >> y;
    }

    return 0; // Fim do programa
}
