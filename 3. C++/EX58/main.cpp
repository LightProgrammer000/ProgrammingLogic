#include <iostream>
#include <iomanip>

using namespace std;
const int MAX = 100;

void numMat(int mat[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "# Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void somMat(int mat1[MAX][MAX], int mat2[MAX][MAX], int mat3[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void apresMat(int mat[MAX][MAX], int m, int n)
{
    cout << "\n# MATRIZ SOMA: ";
    for (int i = 0; i < m; i++)
    {
        cout << endl;

        for (int j = 0; j < n; j++)
        {
            cout << " " << mat[i][j];
        }
    }
}

int main (int argc, char *argv[])
{
    int m, n;

    cout << "# Quantas linhas vai ter cada matriz: ";
    cin >> m;

    cout << "# Quantas colunas vai ter cada matriz: ";
    cin >> n;

    int matA[MAX][MAX], matB[MAX][MAX], matC[MAX][MAX];

    cout << "\n# Digite os valores da matriz A: " << endl;
    numMat(matA, m, n);

    cout << "\n# Digite os valores da matriz B: " << endl;
    numMat(matB, m, n);

    somMat(matA, matB, matC, m, n);
    apresMat(matC, m, n);

    return 0;
}
