#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int x; // Entrada para o valor de X

    // L� o valor de X
    cout << "# Digite o valor de X: ";
    cin >> x;

    // Itera at� X, mostrando os valores �mpares
    for (int i = 0; i < x; i++)
    {
        if (i % 2 != 0)
        {
            cout << "# X: " << i << endl;
        }
    }

    return 0; // Fim
}
