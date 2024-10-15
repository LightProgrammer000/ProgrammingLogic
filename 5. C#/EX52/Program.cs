using System.Globalization;

char sex;
int qtd, qtdF = 0, qtdM = 0;
double mai = 0, men = 0, acuAltM = 0;

CultureInfo ci = CultureInfo.InvariantCulture;

// Solicita a quantidade de pessoas
Console.Write("# Quantas pessoas serao digitadas: ");
qtd = int.Parse(Console.ReadLine());

double[] vetAlt = new double[qtd];

// Coleta dados das pessoas
for (int i = 0; i < qtd; i++)
{
    Console.Write($"\n# Altura da {i + 1}a pessoa: ");
    vetAlt[i] = double.Parse(Console.ReadLine(), ci);

    // Inicializa menor e maior altura
    if (i == 0)
    {
        mai = vetAlt[i];
        men = vetAlt[i];
    }

    // Atualiza maior e menor altura
    if (mai < vetAlt[i]) mai = vetAlt[i];
    if (men > vetAlt[i]) men = vetAlt[i];

    Console.Write($"# Genero da {i + 1}a pessoa: ");
    sex = Console.ReadLine().ToUpper()[0];

    // Acumula altura e contagem conforme gênero
    if (sex == 'F')
    {
        acuAltM += vetAlt[i];
        qtdF++;
    }
    else
        qtdM++;
}

// Exibe resultados
Console.WriteLine($"\n# Menor altura = {men.ToString("F2", ci)}");
Console.WriteLine($"# Maior altura = {mai.ToString("F2", ci)}");

if (qtdF > 0)
    Console.WriteLine($"# Media das alturas das mulheres = {(acuAltM / qtdF).ToString("F2", ci)}");
else
    Console.WriteLine("# Nao ha mulheres para calcular a media");

Console.WriteLine($"# Numero de homens = {qtdM}");
