#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (int argc, char *argv[])
{
    // Declaração das variáveis necessárias
    int n, qtd, idAux = 0;
    double acumSomPos = 0;

    // Solicita a ordem da matriz
    cout << "# Qual a ordem da matriz: ";
    cin >> qtd;

    // Declaração das matrizes e do vetor auxiliar
    double aux[qtd];
    double mat[qtd][qtd], matAlt[qtd][qtd];

    // Preenchimento da matriz
    for (int i = 0; i < qtd; i++)
    {
        for (int j = 0; j < qtd; j++)
        {
            // Recebe o valor do elemento da matriz
            cout << "# Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

            // Soma dos elementos positivos
            if (mat[i][j] > 0)
            {
                acumSomPos += mat[i][j];
            }

            // Eleva ao quadrado os negativos para a matriz alterada
            if (mat[i][j] < 0)
            {
                matAlt[i][j] = pow(mat[i][j], 2);
            }
            else
            {
                matAlt[i][j] = mat[i][j]; // Mantém o valor caso não seja negativo
            }

            // Armazena os elementos da diagonal principal no vetor auxiliar
            if (i == j)
            {
                aux[idAux] = mat[i][j];
                idAux++;
            }
        }
    }

    // Exibe a soma dos elementos positivos
    cout << fixed << setprecision(1) << endl;
    cout << "# SOMA DOS POSITIVOS: " << acumSomPos << endl;

    // Solicita uma linha e exibe os elementos dessa linha
    cout << "\n# Escolha uma linha: ";
    cin >> n;

    cout << "# LINHA ESCOLHIDA: ";
    for (int j = 0; j < qtd; j++)
    {
        cout << " " << mat[n][j];
    }

    // Solicita uma coluna e exibe os elementos dessa coluna
    cout << "\n\n# Escolha uma coluna: ";
    cin >> n;

    cout << "# COLUNA ESCOLHIDA: ";
    for (int i = 0; i < qtd; i++)
    {
        cout << " " << mat[i][n];
    }
    cout << endl;

    // Exibe a diagonal principal
    cout << "\n# DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < idAux; i++)
    {
        cout << " " << aux[i];
    }

    // Exibe a matriz alterada (com negativos ao quadrado)
    cout << "\n\n# MATRIZ ALTERADA: ";
    for (int i = 0; i < qtd; i ++)
    {
        putchar('\n');
        for (int j = 0; j < qtd; j++)
        {
            cout << " " << matAlt[i][j];
        }
    }

    cout << endl;
    return 0;
}
