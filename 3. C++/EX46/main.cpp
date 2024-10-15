// Inclui bibliotecas necessárias
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main (int argc, char *argv[])
{
    // Declara variáveis
    int idMai = 0, qtd;
    double mai = 0;

    // Solicita quantidade de números
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // Vetor para armazenar os números
    double numVet[qtd];

    // Lê os números
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> numVet[i];
    }

    // Identifica o maior valor e sua posição
    for (int i = 0; i < qtd; i++)
    {
        if ( (i == 0) || (mai < numVet[i]))
        {
            mai = numVet[i]; // Atualiza maior valor
            idMai = i;       // Atualiza posição do maior
        }
    }

    // Exibe maior valor e sua posição
    cout << fixed << setprecision(1);
    cout << "\n# MAIOR VALOR = " << mai << endl;
    cout << "# POSICAO DO MAIOR VALOR = " << idMai << endl;

    return 0; // Retorno da função
}
