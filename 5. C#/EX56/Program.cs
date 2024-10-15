// Declara variáveis
int idAux = 0, m, n;

// Lê quantidade de linhas
Console.Write("# Qual a quantidade de linhas da matriz: ");
m = int.Parse(Console.ReadLine());

// Lê quantidade de colunas
Console.Write("# Qual a quantidade de colunas da matriz: ");
n = int.Parse(Console.ReadLine());

// Declara vetor e matriz
int[] aux = new int[n];
int[,] mat = new int[m, n];

// Chama função de análise da matriz
analise(ref aux, ref mat, ref idAux, m, n);

// Chama função para exibir valores negativos
valNeg(idAux, aux);

// Função para analisar a matriz
static void analise(ref int[] aux, ref int[,] mat, ref int idAux, int m, int n)
{
    // Percorre a matriz
    for (int i = 0; i < m; i++)
    {
        Console.WriteLine("");
        for (int j = 0; j < n; j++)
        {
            // Lê elemento da matriz
            Console.Write($"# Elemento [{i},{j}]: ");
            mat[i, j] = int.Parse(Console.ReadLine());

            // Armazena valor negativo
            if (mat[i, j] < 0)
            {
                aux[idAux] = mat[i, j];
                idAux++;
            }
        }
    }
}

// Função para exibir valores negativos
static void valNeg(int idAux, int[] aux)
{
    Console.WriteLine("# VALORES NEGATIVOS: ");

    // Exibe cada valor negativo
    for (int i = 0; i < idAux; i++)
    {
        Console.WriteLine($"# {aux[i]}");
    }
}
