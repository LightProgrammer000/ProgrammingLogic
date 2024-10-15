// Importa namespace para formatação
using System.Globalization;

// Variáveis para acumular altura e contadores
double acuAlt = 0;
int idAux = 0, qtd, contIda = 0;

// Define cultura para formatação
CultureInfo ci = CultureInfo.InvariantCulture;

// Solicita a quantidade de pessoas
Console.Write("# Quantas pessoas serao digitadas: ");
qtd = int.Parse(Console.ReadLine());

// Valida a quantidade de pessoas
while (qtd < 1 || qtd > 5)
{
    Console.WriteLine("# Valor maximo de 5 pessoas");
    
    Console.Write("# Quantas pessoas serao digitadas: ");
    qtd = int.Parse(Console.ReadLine());
}

// Vetores para armazenar dados
int[] vetIda = new int[qtd]; // Idades
double[] vetAlt = new double[qtd]; // Alturas
string[] vetNom = new string[qtd]; // Nomes
string[] aux = new string[qtd]; // Nomes com menos de 16 anos

// Coleta dados das pessoas
for (int i = 0; i < qtd; i++)
{
    Console.WriteLine($"\n# Dados da {i + 1}a pessoa:");
    
    Console.Write("# Nome: ");
    vetNom[i] = Console.ReadLine();
    
    Console.Write("# Idade: ");
    vetIda[i] = int.Parse(Console.ReadLine());
    
    Console.Write("# Altura: ");
    vetAlt[i] = double.Parse(Console.ReadLine(), ci);
    acuAlt += vetAlt[i]; // Acumula altura
}

// Identifica pessoas com menos de 16 anos
for (int i = 0; i < qtd; i++)
{
    if (vetIda[i] < 16)
    {
        aux[idAux] = vetNom[i]; // Armazena o nome
        idAux++;
        contIda++;
    }
}

// Exibe a altura média
Console.WriteLine($"\n# Altura media: {(acuAlt / qtd).ToString("F2", ci)}");

// Exibe porcentagem de pessoas com menos de 16 anos
Console.WriteLine($"# Pessoas com menos de 16 anos: {((double)contIda / qtd * 100).ToString("F1", ci)} %");

// Exibe nomes das pessoas com menos de 16 anos
for (int i = 0; i < idAux; i++)
{
    Console.WriteLine(aux[i]);
}
