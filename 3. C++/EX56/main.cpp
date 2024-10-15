#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argcv[])
{
    // Inicializa��o das vari�veis
    int idAux = 0, m, n;

    // Solicita a quantidade de linhas da matriz
    cout << "# Qual a quantidade de linhas da matriz: ";
    cin >> m;

    // Solicita a quantidade de colunas da matriz
    cout << "# Qual a quantidade de colunas da matriz: ";
    cin >> n;

    // Declara��o do vetor auxiliar e da matriz
    int aux[m], mat[m][n];

    // Preenchimento da matriz e identifica��o de valores negativos
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Solicita o elemento da posi��o [i,j]
            cout << "# Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

            // Armazena valores negativos no vetor auxiliar
            if (mat[i][j] < 0)
            {
                aux[idAux] = mat[i][j];
                idAux++;
            }
        }
    }

    // Exibe os valores negativos encontrados
    cout << "\n# VALORES NEGATIVOS: " << endl;
    for (int i = 0; i < idAux; i++)
    {
        cout << "# " << aux[i] << endl;
    }

    return 0;
}
