// Declaração de variáveis
int qtd, idAux = 0, qtdNeg = 0;

// Solicita a ordem da matriz ao usuário
Console.Write("# Qual a ordem da matriz: ");
qtd = int.Parse(Console.ReadLine());

// Declaração dos arrays 'aux' e 'mat'
int[] aux = new int[qtd];
int[,] mat = new int[qtd, qtd];

// Loop para percorrer a matriz
for (int i = 0; i < qtd; i++)
{
    for (int j = 0; j < qtd; j++)
    {
        // Solicita o elemento da matriz
        Console.Write($"# Elemento [{i},{j}]: ");
        mat[i, j] = int.Parse(Console.ReadLine());

        // Incrementa a quantidade de números negativos
        if (mat[i, j] < 0)
        {
            qtdNeg++;
        }

        // Armazena o valor da diagonal principal
        if (i == j)
        {
            aux[idAux] = mat[i, j];
            idAux++;
        }
    }
}

// Exibe os valores da diagonal principal
Console.WriteLine("\n# DIAGONAL PRINCIPAL:");

for (int i = 0; i < idAux; i++)
{
    // Exibe o valor de cada elemento da diagonal principal
    Console.Write($" {aux[i]}");
}

// Exibe a quantidade total de números negativos
Console.WriteLine($"\n\n# QUANTIDADE DE NEGATIVOS = {qtdNeg}");