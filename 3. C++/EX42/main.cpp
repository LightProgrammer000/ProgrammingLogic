// Inclui a biblioteca de entrada e sa�da
#include <iostream>

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    // Solicita a quantidade de n�meros
    int n;
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> n;

    // Declara vetor com tamanho informado
    int vet[n];

    // Limita a quantidade de n�meros a 10
    while (n > 10)
    {
        cout << "# Maximo ate 10 numeros" << endl;
        cout << "# Quantos numeros voce vai digitar: ";
        cin >> n;
    }

    // L� os n�meros
    for (int i = 0; i < n; i++)
    {
        cout << "# Digite um numero: ";
        cin >> vet[i];
    }

    // Exibe os n�meros negativos
    cout << "\n# Numeros negativos" << endl;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            cout << "* " << vet[i] << endl;
        }
    }

    return 0;
}
