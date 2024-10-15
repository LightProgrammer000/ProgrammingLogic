// Inclui a biblioteca de entrada e saída
#include <iostream>

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    // Solicita a quantidade de números
    int n;
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> n;

    // Declara vetor com tamanho informado
    int vet[n];

    // Limita a quantidade de números a 10
    while (n > 10)
    {
        cout << "# Maximo ate 10 numeros" << endl;
        cout << "# Quantos numeros voce vai digitar: ";
        cin >> n;
    }

    // Lê os números
    for (int i = 0; i < n; i++)
    {
        cout << "# Digite um numero: ";
        cin >> vet[i];
    }

    // Exibe os números negativos
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
