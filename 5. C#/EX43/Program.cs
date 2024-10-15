// Importa namespaces necessários
using System;
using System.Globalization;

// Declaração de variáveis
int n;
double acuSom = 0;

// Define cultura para formatação numérica
CultureInfo ci = CultureInfo.InvariantCulture;

// Solicita ao usuário a quantidade de números a serem digitados
Console.Write("# Quantos numeros voce vai digitar: ");
n = int.Parse(Console.ReadLine());

// Declaração do vetor com o tamanho da quantidade de números
double[] vet = new double[n];

// Loop para entrada dos números
for (int i = 0; i < n; i++)
{
    Console.Write("# Digite um numero: ");

    // Lê e armazena o número no vetor, aplicando a cultura definida
    vet[i] = double.Parse(Console.ReadLine(), ci);

    // Acumula a soma dos números
    acuSom += vet[i];
}

// Exibe os valores digitados
Console.Write("\n# VALORES = ");
for (int i = 0; i < n; i++)
{
    // Formata os números para duas casas decimais
    Console.Write($"{vet[i].ToString("F2", ci)} ");
}

// Exibe a soma e a média dos valores
Console.WriteLine($"\n# SOMA = {acuSom.ToString("F2", ci)}");
Console.WriteLine($"# MEDIA = {(acuSom / n).ToString("F2", ci)}");
