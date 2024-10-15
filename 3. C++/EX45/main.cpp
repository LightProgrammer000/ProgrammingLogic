// Inclui biblioteca de entrada e sa�da
#include "iostream"

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    // Declara vari�veis
    bool flag = false;
    int idAux = 0, qtd, qtdPar = 0;

    // Solicita quantidade de n�meros
    cout << "# Quantos numeros voce vai digitar: ";
    cin >> qtd;

    // Vetores para armazenar n�meros e n�meros pares
    int numVet[qtd], aux[qtd];

    // L� os n�meros e identifica os pares
    for (int i = 0; i < qtd; i++)
    {
        cout << "# Digite um numero: ";
        cin >> numVet[i];

        if (numVet[i] % 2 == 0)
        {
            flag = true; // Indica que h� pares

            aux[idAux] = numVet[i]; // Armazena pares
            idAux++;
            qtdPar++;
        }
    }

    // Exibe n�meros pares e a quantidade
    if (flag == true)
    {
        cout << "\n# NUMEROS PARES:" << endl;

        for (int i = 0; i < qtdPar; i++)
        {
            cout << " " << aux[i];
        }

        cout << "\n\n# QUANTIDADE DE PARES = " << qtdPar << endl;
    }

    return 0;
}
