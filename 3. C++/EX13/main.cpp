#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    // Variáveis
    int n1, n2, n3, menor = 0;

    // Entrada de valores
    cout << "# Primeiro valor: ";
    cin >> n1;
    menor = n1;

    cout << "# Segundo valor: ";
    cin >> n2;

    cout << "# Terceiro valor: ";
    cin >> n3;

    // Verifica empate
    if ((n1 == n2) && (n1 == n3))
    {
        cout << "# Empate: " << n1 << endl;
    }

    else
    {
        // Atribui menor valor
        if (menor > n2)
        {
            menor = n2;
        }
        if (menor > n3)
        {
            menor = n3;
        }

        // Exibe o menor valor
        cout << "# Menor: " << menor << endl;
    }

    return 0;
}
