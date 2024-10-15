// Inclui bibliotecas necessárias
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main (int argc, char * argv[])
{
    int qtd, qtdPar = 0, acuSom = 0;

    // Solicita a quantidade de elementos do vetor
    cout << "# Quantos elementos vai ter o vetor: ";
    cin >> qtd;

    int numVet[qtd];

    // Lê os números e calcula soma dos pares
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> numVet[i];

        // Verifica se o número é par
        if (numVet[i] % 2 == 0)
        {
            acuSom += numVet[i]; // Acumula a soma
            qtdPar++; // Conta os números pares
        }
    }

    // Exibe a média dos pares se houver algum
    if (qtdPar > 0)
    {
        cout << fixed << setprecision(1)
             << "# MEDIA DOS PARES = " << (double) acuSom/qtdPar << endl;
    }
    else
    {
        cout << "# NENHUM NUMERO PAR" << endl; // Mensagem caso não haja pares
    }

    return 0; // Retorno da função
}
