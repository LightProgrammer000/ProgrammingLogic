// Inclui bibliotecas para entrada/sa�da e formata��o
#include <iostream>
#include <iomanip>

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    // Declara vari�veis para quantidade de n�meros e soma acumulada
    int n;
    double acuSom = 0;

    // Solicita quantidade de n�meros
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> n;

    // Declara vetor de tamanho n
    double vet[n];

    // L� os n�meros e acumula a soma
    for (int i = 0; i < n; i++)
    {
        cout << "# Digite um numero: ";
        cin >> vet[i];
        acuSom += vet[i];
    }

    // Define precis�o de 2 casas decimais
    cout << fixed << setprecision(2);

    // Exibe os valores
    cout << "\n# VALORES = ";
    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " ";
    }

    // Exibe a soma e a m�dia
    cout << "\n# Soma = " << acuSom << endl;
    cout << "# Media = " << acuSom / n << endl;

    return 0;
}
