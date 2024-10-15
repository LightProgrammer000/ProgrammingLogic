// Importa funções matemáticas e a cultura para formatação
using static System.Math;
using System.Globalization;

int n, qtd, idAux = 0;
double acuSomPos = 0;

CultureInfo ci = CultureInfo.InvariantCulture;

// Lê a ordem da matriz
Console.Write("# Qual a ordem da matriz: ");
qtd = int.Parse(Console.ReadLine());

// Declara os vetores e matrizes
double[] aux = new double[qtd];
double[,] mat = new double[qtd, qtd];
double[,] matAlt = new double[qtd, qtd];

// Preenche a matriz e realiza cálculos
for (int i = 0; i < qtd; i++)
{
    for (int j = 0; j < qtd; j++)
    {
        // Lê elemento da matriz
        Console.Write($"# Elemento [{i},{j}]: ");
        mat[i, j] = double.Parse(Console.ReadLine(), ci);

        // Soma dos positivos
        if (mat[i, j] > 0)
            acuSomPos += mat[i, j];

        // Substitui negativos por seu quadrado
        if (mat[i, j] < 0)
            matAlt[i, j] = Pow(mat[i, j], 2);
        else
            matAlt[i, j] = mat[i, j];

        // Armazena a diagonal principal
        if (i == j)
        {
            aux[idAux] = mat[i, j];
            idAux++;
        }
    }
}

// Exibe a soma dos positivos
Console.WriteLine($"\n# SOMA DOS POSITIVOS: {acuSomPos}");

// Exibe uma linha específica da matriz
Console.Write("\n# Escolha uma linha: ");
n = int.Parse(Console.ReadLine());
Console.Write("# LINHA ESCOLHIDA: ");
for (int j = 0; j < qtd; j++)
{
    Console.Write($" {mat[n, j].ToString("F1", ci)} ");
}

// Exibe uma coluna específica da matriz
Console.Write("\n\n# Escolha uma coluna: ");
n = int.Parse(Console.ReadLine());
Console.Write("# COLUNA ESCOLHIDA: ");
for (int i = 0; i < qtd; i++)
{
    Console.Write($" {mat[i, n].ToString("F1", ci)} ");
}

// Exibe a diagonal principal
Console.Write("\n\n# DIAGONAL PRINCIPAL: ");
for (int i = 0; i < idAux; i++)
{
    Console.Write($" {aux[i].ToString("F1", ci)} ");
}

// Exibe a matriz alterada
Console.Write("\n\n# MATRIZ ALTERADA: ");
for (int i = 0; i < qtd; i++)
{
    Console.WriteLine("");
    for (int j = 0; j < qtd; j++)
    {
        Console.Write($" {matAlt[i, j].ToString("F1", ci)} ");
    }
}
Console.WriteLine("");
