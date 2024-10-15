// Lê a ordem da matriz
int qtd = ordemMatriz();

// Declara a matriz
int[,] mat = new int[qtd, qtd];

// Exibe a soma dos elementos acima da diagonal principal
Console.WriteLine($"\n# SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {analiseMatriz(mat)}");

// Função para obter a ordem da matriz
static int ordemMatriz()
{
    while (true)
    {
        try
        {
            // Lê e retorna a ordem da matriz
            Console.Write("\n# Qual a ordem da matriz: ");
            return int.Parse(Console.ReadLine());
        }
        catch (FormatException e)
        {
            // Mensagem de erro em caso de entrada inválida
            Console.WriteLine("# Numero invalido !");
        }
    }
}

// Função para analisar a matriz e calcular a soma
static int analiseMatriz(int[,] mat)
{
    int soma = 0;

    // Percorre a matriz
    for (int i = 0; i < mat.GetLength(0); i++)
    {
        for (int j = 0; j < mat.GetLength(0); j++)
        {
            // Lê elemento da matriz
            Console.Write($"# Elemento [{i},{j}]: ");
            mat[i, j] = int.Parse(Console.ReadLine());

            // Soma elementos acima da diagonal principal
            if (i < j)
            {
                soma += mat[i, j];
            }
        }
    }

    return soma; // Retorna a soma calculada
}
