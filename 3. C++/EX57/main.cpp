#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara��o da vari�vel para a ordem da matriz
    int n;

    // Solicita a ordem da matriz
    cout << "# Qual a ordem da matriz: ";
    cin >> n;

    // Declara��o do vetor auxiliar e da matriz
    int aux[n], mat[n][n];

    // Preenchimento da matriz e identifica��o do maior elemento de cada linha
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Solicita o elemento da posi��o [i,j]
            cout << "# Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

            // Atualiza o maior elemento da linha se necess�rio
            if ((j == 0) || (aux[i] < mat[i][j]))
            {
                aux[i] = mat[i][j];
            }
        }
    }

    // Exibe o maior elemento de cada linha
    cout << "\n# MAIOR ELEMENTO DE CADA LINHA:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "# Linha " << i + 1 << ": " << aux[i] << endl;
    }

    return 0; // Indica que o programa terminou com sucesso
}
