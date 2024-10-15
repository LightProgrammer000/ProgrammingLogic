#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declaração das variáveis
    int m, n;
    double acuSom = 0;

    // Solicita a quantidade de linhas da matriz
    cout << "# Qual a quantidade de linhas da matriz: ";
    cin >> m;

    // Solicita a quantidade de colunas da matriz
    cout << "# Qual a quantidade de colunas da matriz: ";
    cin >> n;

    // Declaração da matriz e do vetor auxiliar
    double mat[m][n], aux[m];

    // Preenchimento da matriz
    for (int i = 0; i < m; i++)
    {
        // Solicita os elementos da linha i
        cout << "\n# Digite os elementos da " << i+1 << "a. linha: " << endl;

        for (int j = 0; j < n; j++)
        {
            // Solicita o elemento da posição [i,j]
            cout << "# Elemento: ";
            cin >> mat[i][j];

            // Acumula a soma dos elementos da linha
            acuSom += mat[i][j];
        }

        // Armazena a soma acumulada no vetor auxiliar
        aux[i] = acuSom;
        acuSom = 0; // Reseta o acumulador para a próxima linha
    }

    // Exibe o vetor gerado
    cout << "\n# Vetor Gerado: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << " " << aux[i] << endl;
    }

    return 0;
}
