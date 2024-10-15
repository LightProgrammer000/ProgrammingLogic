#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int qtd, acuSom = 0; // Declara qtd e acuSom

    // Solicita a ordem da matriz
    cout << "# Qual a ordem da matriz: ";
    cin >> qtd;

    // Declara matriz quadrada
    int mat[qtd][qtd];

    // Preenche a matriz
    for (int i = 0; i < qtd; i++)
    {
        for (int j = 0; j < qtd; j++)
        {
            // Solicita elemento
            cout << "# Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

            // Soma elementos acima da diagonal principal
            if (i < j)
            {
                acuSom += mat[i][j];
            }
        }
    }

    // Exibe a soma
    cout << "\n# SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << acuSom << endl;

    return 0; // Finaliza o programa
}
