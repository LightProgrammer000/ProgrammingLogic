// Inclui bibliotecas necessárias
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    int qtd, idAux = 0, qtdAbaiMed = 0;
    double med, acuSom = 0;

    // Solicita quantidade de elementos no vetor
    cout << "# Quantos elementos vai ter o vetor: ";
    cin >> qtd;

    // Declara vetores para números e elementos abaixo da média
    double vetNum[qtd], aux[qtd];

    // Lê os números e calcula a soma
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> vetNum[i];
        acuSom += vetNum[i];
    }

    // Calcula a média
    med = acuSom / qtd;

    // Identifica elementos abaixo da média
    for (int i = 0; i < qtd; i++)
    {
        if (vetNum[i] < med)
        {
            aux[idAux] = vetNum[i]; // Armazena o elemento
            idAux++;
            qtdAbaiMed++;
        }
    }

    // Exibe a média do vetor
    cout << fixed << setprecision(3);
    cout << "\n# MEDIA DO VETOR = " << med << endl << endl;

    // Exibe elementos abaixo da média
    cout << fixed << setprecision(1);
    cout << "# ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for (int i = 0; i < qtdAbaiMed; i++)
    {
        cout << "# " << aux[i] << endl;
    }

    return 0; // Retorno da função
}
