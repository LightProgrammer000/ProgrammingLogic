// Declara variáveis
int m, n;

// Lê quantidade de linhas
Console.Write("# Quantas linhas vai ter cada matriz: ");
m = int.Parse(Console.ReadLine());

// Lê quantidade de colunas
Console.Write("# Quantas colunas vai ter cada matriz: ");
n = int.Parse(Console.ReadLine());

// Declara matrizes
int[,] matA = new int[m, n];
int[,] matB = new int[m, n];

// Popula matriz A
Console.WriteLine("\n# Digite os valores da matriz A: ");
matA = popMat(matA);

// Popula matriz B
Console.WriteLine("\n# Digite os valores da matriz B: ");
matB = popMat(matB);

// Soma as matrizes
somaMatriz(matA, matB);

// Função para preencher a matriz
static int[,] popMat(int[,] mat)
{
    for (int i = 0; i < mat.GetLength(0); i++)
    {
        for (int j = 0; j < mat.GetLength(1); j++)
        {
            // Lê elemento da matriz
            Console.Write($"# Elemento [{i},{j}]: ");
            mat[i, j] = int.Parse(Console.ReadLine());
        }
    }
    return mat; // Retorna matriz preenchida
}

// Função para somar duas matrizes
static void somaMatriz(int[,] matA, int[,] matB)
{
    int[,] matC = new int[matA.GetLength(0), matA.GetLength(1)];

    Console.Write("\n# MATRIZ SOMA: ");
    for (int i = 0; i < matA.GetLength(0); i++)
    {
        Console.WriteLine("");
        for (int j = 0; j < matA.GetLength(1); j++)
        {
            // Soma elementos das matrizes
            matC[i, j] = matA[i, j] + matB[i, j];

            Console.Write($"  {matC[i, j]} "); // Exibe resultado
        }
    }
    Console.WriteLine("");
}
