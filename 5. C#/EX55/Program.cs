// Importa formatação numérica
using System.Globalization;

// Declara variáveis
int m, n;
double acuSom = 0;

CultureInfo ci = CultureInfo.InvariantCulture;

// Lê quantidade de linhas
Console.Write("# Qual a quantidade de linhas da matriz: ");
m = int.Parse(Console.ReadLine());

// Lê quantidade de colunas
Console.Write("# Qual a quantidade de colunas da matriz: ");
n = int.Parse(Console.ReadLine());

// Declara vetor e matriz
double[] aux = new double[m];
double[,] mat = new double[m, n];

// Preenche a matriz
for (int i = 0; i < m; i++)
{
    // Lê elementos da linha
    Console.WriteLine($"\n# Digite os elementos da {i + 1}a. linha: ");

    for (int j = 0; j < n; j++)
    {
        // Lê elemento
        Console.Write("# Elemento: ");
        mat[i, j] = double.Parse(Console.ReadLine(), ci);
        acuSom += mat[i, j]; // Soma os valores
    }

    aux[i] = acuSom; // Armazena soma
    acuSom = 0;      // Reseta soma
}

// Exibe vetor gerado
Console.WriteLine("\n# VETOR GERADO:");
for (int i = 0; i < m; i++)
    Console.WriteLine($"{aux[i].ToString("F1", ci)}"); // Exibe valor formatado
