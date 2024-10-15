using System.Globalization;

// Variáveis de controle
int qtd, idAux = 0, qtdAbaiMed = 0;
double med, acuSom = 0;

CultureInfo ci = CultureInfo.InvariantCulture;

// Solicita a quantidade de elementos do vetor
Console.Write("# Quantos elementos vai ter o vetor: ");
qtd = int.Parse(Console.ReadLine());

// Declaração dos vetores
double[] aux = new double[qtd];
double[] vetNum = new double[qtd];

// Coleta os números do vetor
for (int i = 0; i < qtd; i++)
{
    Console.Write("# Digite um numero: ");
    vetNum[i] = double.Parse(Console.ReadLine(), ci);
    acuSom += vetNum[i]; // Acumula a soma dos números
}

// Calcula a média
med = acuSom / qtd;

// Verifica elementos abaixo da média
for (int i = 0; i < qtd; i++)
{
    if (vetNum[i] < med)
    {
        aux[idAux] = vetNum[i]; // Armazena elemento abaixo da média
        idAux++;
        qtdAbaiMed++;
    }
}

// Exibe a média do vetor
Console.WriteLine($"\n# MEDIA DO VETOR = {med.ToString("F3", ci)} ");

// Exibe os elementos abaixo da média
Console.WriteLine("# ELEMENTOS ABAIXO DA MEDIA: ");
for (int i = 0; i < qtdAbaiMed; i++)
{
    Console.WriteLine($"{aux[i].ToString("F1", ci)}"); // Exibe elementos
}
