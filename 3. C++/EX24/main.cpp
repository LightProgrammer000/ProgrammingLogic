#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int x, y; // Vari�veis de entrada

    // Solicita os dois n�meros
    cout << "# Digite dois numeros: " << endl;

    cout << "# X: ";
    cin >> x;

    cout << "# Y: ";
    cin >> y;

    // Enquanto os n�meros forem diferentes
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

        // Solicita novos n�meros
        cout << "\n# Digite outros dois numeros: " << endl;

        cout << "# X: ";
        cin >> x;

        cout << "# Y: ";
        cin >> y;
    }

    return 0; // Fim do programa
}
