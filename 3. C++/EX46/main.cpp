// Inclui bibliotecas necess�rias
#include <iostream>
#include <iomanip>

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    // Declara vari�veis
    int idMai = 0, qtd;
    double mai = 0;

    // Solicita quantidade de n�meros
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // Vetor para armazenar os n�meros
    double numVet[qtd];

    // L� os n�meros
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> numVet[i];
    }

    // Identifica o maior valor e sua posi��o
    for (int i = 0; i < qtd; i++)
    {
        if ( (i == 0) || (mai < numVet[i]))
        {
            mai = numVet[i]; // Atualiza maior valor
            idMai = i;       // Atualiza posi��o do maior
        }
    }

    // Exibe maior valor e sua posi��o
    cout << fixed << setprecision(1);
    cout << "\n# MAIOR VALOR = " << mai << endl;
    cout << "# POSICAO DO MAIOR VALOR = " << idMai << endl;

    return 0; // Retorno da fun��o
}
