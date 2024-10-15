// Inclui bibliotecas necess�rias
#include <iostream>
#include <iomanip>

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    int qtd, idAux = 0, qtdAbaiMed = 0;
    double med, acuSom = 0;

    // Solicita quantidade de elementos no vetor
    cout << "# Quantos elementos vai ter o vetor: ";
    cin >> qtd;

    // Declara vetores para n�meros e elementos abaixo da m�dia
    double vetNum[qtd], aux[qtd];

    // L� os n�meros e calcula a soma
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> vetNum[i];
        acuSom += vetNum[i];
    }

    // Calcula a m�dia
    med = acuSom / qtd;

    // Identifica elementos abaixo da m�dia
    for (int i = 0; i < qtd; i++)
    {
        if (vetNum[i] < med)
        {
            aux[idAux] = vetNum[i]; // Armazena o elemento
            idAux++;
            qtdAbaiMed++;
        }
    }

    // Exibe a m�dia do vetor
    cout << fixed << setprecision(3);
    cout << "\n# MEDIA DO VETOR = " << med << endl << endl;

    // Exibe elementos abaixo da m�dia
    cout << fixed << setprecision(1);
    cout << "# ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for (int i = 0; i < qtdAbaiMed; i++)
    {
        cout << "# " << aux[i] << endl;
    }

    return 0; // Retorno da fun��o
}
