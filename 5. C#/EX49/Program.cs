using System.Globalization;

// Variáveis de controle
int qtd, qtdPar = 0, acuSom = 0;

CultureInfo ci = CultureInfo.InvariantCulture;

// Solicita a quantidade de elementos do vetor
Console.Write("# Quantos elementos vai ter o vetor: ");
qtd = int.Parse(Console.ReadLine());

// Declaração do vetor
int[] numVet = new int[qtd];

// Coleta os números do vetor
for (int i = 0; i < numVet.Length; i++)
{
    Console.Write("# Digite um numero: ");
    numVet[i] = int.Parse(Console.ReadLine());

    // Verifica se o número é par
    if (numVet[i] % 2 == 0)
    {
        acuSom += numVet[i]; // Acumula a soma dos pares
        qtdPar++;            // Conta os números pares
    }
}

// Calcula e exibe a média dos pares
if (qtdPar > 0)
    Console.WriteLine($"# MEDIA DOS PARES = {((double)acuSom / qtdPar).ToString("F1", ci)}");
else
    Console.WriteLine("# NENHUM NUMERO PAR"); // Mensagem se não houver pares
