#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int n1, n2, aux;  // N�meros inteiros e auxiliar

    // Solicita dois n�meros inteiros
    cout << "# Digite dois numeros inteiros" << endl;

    // Primeiro n�mero
    cout << "# N1: ";
    cin >> n1;

    // Segundo n�mero
    cout << "# N2: ";
    cin >> n2;

    // Ordena n1 e n2
    if (n1 < n2)
    {
        aux = n2;
        n2 = n1;
        n1 = aux;
    }

    // Verifica se n1 � m�ltiplo de n2
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
