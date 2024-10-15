// Inclui bibliotecas para entrada/saída e formatação
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    // Declara variáveis para quantidade de números e soma acumulada
    int n;
    double acuSom = 0;

    // Solicita quantidade de números
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> n;

    // Declara vetor de tamanho n
    double vet[n];

    // Lê os números e acumula a soma
    for (int i = 0; i < n; i++)
    {
        cout << "# Digite um numero: ";
        cin >> vet[i];
        acuSom += vet[i];
    }

    // Define precisão de 2 casas decimais
    cout << fixed << setprecision(2);

    // Exibe os valores
    cout << "\n# VALORES = ";
    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " ";
    }

    // Exibe a soma e a média
    cout << "\n# Soma = " << acuSom << endl;
    cout << "# Media = " << acuSom / n << endl;

    return 0;
}
