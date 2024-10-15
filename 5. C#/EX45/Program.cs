// Variáveis de controle
bool flag = false;
int idAux = 0, qtdPar = 0, qtd;

// Solicita a quantidade de números a serem digitados
Console.Write("# Quantos numeros voce vai digitar: ");
qtd = int.Parse(Console.ReadLine());

// Vetores para armazenar números e pares
int[] numVet = new int[qtd];
int[] aux = new int[qtd];

// Coleta os números digitados
for (int i = 0; i < qtd; i++)
{
    Console.Write("# Digite um numero: ");
    numVet[i] = int.Parse(Console.ReadLine());

    // Verifica se o número é par
    if (numVet[i] % 2 == 0)
    {
        aux[idAux] = numVet[i]; // Armazena número par
        idAux++;
        qtdPar++;
        flag = true; // Indica que há pares
    }
}

// Se houver números pares, exibe-os
if (flag)
{
    Console.Write("\n# NUMEROS PARES: \n");

    for (int i = 0; i < idAux; i++)
    {
        Console.Write($"  {aux[i]}"); // Exibe pares
    }

    // Exibe a quantidade de números pares
    Console.WriteLine($"\n\n# QUANTIDADE DE PARES = {qtdPar}");
}
