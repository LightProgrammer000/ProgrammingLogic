// Declara variável
int n;

// Lê a ordem da matriz
Console.Write("# Qual a ordem da matriz: ");
n = int.Parse(Console.ReadLine());

// Declara vetor e matriz
int[] aux = new int[n];
int[,] mat = new int[n, n];

// Preenche a matriz e encontra o maior elemento de cada linha
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        // Lê elemento da matriz
        Console.Write($"# Elemento [{i},{j}]: ");
        mat[i, j] = int.Parse(Console.ReadLine());

        // Atualiza o maior elemento da linha
        if ((j == 0) || (aux[i] < mat[i, j]))
        {
            aux[i] = mat[i, j];
        }
    }
}

Console.WriteLine("");
aprentacao(aux); // Chama a função para exibir os maiores elementos

// Função para exibir maiores elementos de cada linha
static void aprentacao(int[] aux)
{
    Console.WriteLine("# MAIOR ELEMENTO DE CADA LINHA: ");
    for (int i = 0; i < aux.Length; i++)
    {
        Console.WriteLine($"# Linha [{i}]: {aux[i]}"); // Exibe maior elemento da linha
    }
}
