#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n1, n2, aux;  // Números inteiros e auxiliar

    // Solicita dois números inteiros
    cout << "# Digite dois numeros inteiros" << endl;

    // Primeiro número
    cout << "# N1: ";
    cin >> n1;

    // Segundo número
    cout << "# N2: ";
    cin >> n2;

    // Ordena n1 e n2
    if (n1 < n2)
    {
        aux = n2;
        n2 = n1;
        n1 = aux;
    }

    // Verifica se n1 é múltiplo de n2
    if (n1 % n2 == 0)
    {
        cout << "# Sao multiplos" << endl;
    }
    else
    {
        cout << "# Nao sao multiplos" << endl;
    }

    return 0;  // Fim
}
