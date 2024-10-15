// Inclui bibliotecas necessárias
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    int qtd;

    // Solicita quantidade de valores para os vetores
    cout << "# Quantos valores vai ter cada vetor: ";
    cin >> qtd;

    // Declara vetores A, B e C
    double vetA[qtd], vetB[qtd], vetC[qtd];

    // Lê valores do vetor A
    cout << "\n# Digite os valores do vetor A: " << endl;
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Valor[" << i << "]: ";
        cin >> vetA[i];
    }

    // Lê valores do vetor B
    cout << "\n# Digite os valores do vetor B: " << endl;
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Valor[" << i << "]: ";
        cin >> vetB[i];
    }

    // Calcula e exibe o vetor resultante
    cout << "\n# VETOR RESULTANTE: " << endl;
    for (int i = 0; i < qtd; i++)
    {
        vetC[i] = vetA[i] + vetB[i]; // Soma os valores
        cout << "# Valor[" << i << "]: " << vetC[i] << endl;
    }

    return 0; // Retorno da função
}
