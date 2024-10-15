#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int x; // Entrada para o valor de X

    // Lê o valor de X
    cout << "# Digite o valor de X: ";
    cin >> x;

    // Itera até X, mostrando os valores ímpares
    for (int i = 0; i < x; i++)
    {
        if (i % 2 != 0)
        {
            cout << "# X: " << i << endl;
        }
    }

    return 0; // Fim
}
