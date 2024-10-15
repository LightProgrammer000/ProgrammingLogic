// Variável para quantidade de elementos
int qtd;

// Solicita a quantidade de valores para os vetores
Console.Write("# Quantos valores vai ter cada vetor: ");
qtd = int.Parse(Console.ReadLine());

// Declaração dos vetores
double[] vetA = new double[qtd];
double[] vetB = new double[qtd];
double[] vetC = new double[qtd];

// Coleta os valores do vetor A
Console.WriteLine("\n# Digite os valores do vetor A: ");
for (int i = 0; i < qtd; i++)
{
    Console.Write($"# Valor[{i + 1}]: ");
    vetA[i] = int.Parse(Console.ReadLine());
}

// Coleta os valores do vetor B
Console.WriteLine("\n# Digite os valores do vetor B: ");
for (int i = 0; i < qtd; i++)
{
    Console.Write($"# Valor[{i + 1}]: ");
    vetB[i] = int.Parse(Console.ReadLine());
}

// Exibe o vetor resultante
Console.WriteLine("\n# VETOR RESULTANTE: ");
for (int i = 0; i < qtd; i++)
{
    vetC[i] = vetA[i] + vetB[i];        // Soma os valores dos vetores A e B
    Console.WriteLine($"-> {vetC[i]}"); // Exibe resultado
}
