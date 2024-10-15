#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara��o das vari�veis
    int qtd, qtdNeg = 0, idAux = 0;

    // Solicita a ordem da matriz
    cout << "# Qual a ordem da matriz: ";
    cin >> qtd;

    // Declara��o do vetor auxiliar e da matriz
    int aux[qtd], mat[qtd][qtd];

    // Preenchimento da matriz
    for (int i = 0; i < qtd; i++)
    {
        for (int j = 0; j < qtd; j++)
        {
            // Solicita o elemento da posi��o [i,j]
            cout << "# Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

            // Conta os n�meros negativos
            if (mat[i][j] < 0)
            {
                qtdNeg++;
            }

            // Armazena os elementos da diagonal principal
            if (i == j)
            {
                aux[idAux] = mat[i][j];
                idAux++;
            }
        }
    }

    // Exibe a diagonal principal
    cout << "\n# DIAGONAL PRINCIPAL: ";

    for (int i = 0; i < idAux; i++)
    {
        cout << " " << aux[i];
    }

    // Exibe a quantidade de n�meros negativos
    cout << "\n\n# QUANTIDADE DE NEGATIVOS = " << qtdNeg << endl;

    return 0;
}
