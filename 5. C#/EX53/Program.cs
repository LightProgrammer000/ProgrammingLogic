using System.Globalization;

int qtd;
string prd;
bool flag1 = false, flag2 = false, flag3 = false;
double preCom, preVen, totCom = 0, totVen = 0;

CultureInfo ci = CultureInfo.InvariantCulture;

Console.Write("# Serao digitados dados de quantos produtos: ");
qtd = int.Parse(Console.ReadLine());

double[] luc = new double[qtd];
string[] prdInd = new string[qtd];  // Armazena os nomes dos produtos

for (int i = 0; i < qtd; i++)
{
    Console.WriteLine($"\n# Produto {i + 1}: ");

    Console.Write("# Nome: ");
    prd = Console.ReadLine();
    prdInd[i] = prd;  // Armazena o nome do produto

    Console.Write($"# Preco de compra: ");
    preCom = double.Parse(Console.ReadLine(), ci);

    Console.Write("# Preco de venda: ");
    preVen = double.Parse(Console.ReadLine(), ci);

    luc[i] = ((preVen - preCom) / preCom) * 100;
    totCom += preCom;
    totVen += preVen;
}

Console.WriteLine("\n*** RELATORIO ***");
analise(luc, ref flag1, ref flag2, ref flag3);

// Exibe produtos com lucro abaixo de 10%
if (flag1)
{
    Console.Write("\n# Lucro abaixo de 10%: ");
    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] < 10)
        {
            Console.Write($" {prdInd[i]}");  // Exibe o nome do produto
        }
    }
}

// Exibe produtos com lucro entre 10% e 20%
if (flag2)
{
    Console.Write("\n# Lucro entre 10% e 20%: ");
    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] >= 10 && luc[i] <= 20)
        {
            Console.Write($" {prdInd[i]}");  // Exibe o nome do produto
        }
    }
}

// Exibe produtos com lucro acima de 20%
if (flag3)
{
    Console.Write("\n# Lucro acima de 20%: ");
    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] > 20)
        {
            Console.Write($" {prdInd[i]}");  // Exibe o nome do produto
        }
    }
}

// Exibe os totais de compra, venda e lucro
Console.WriteLine($"\n# Valor total de compra: {totCom.ToString("F2", ci)}");
Console.WriteLine($"# Valor total de venda: {totVen.ToString("F2", ci)}");
Console.WriteLine($"# Lucro total: {(totVen - totCom).ToString("F2", ci)}");

// Função para analisar os percentuais de lucro e ajustar os flags
static void analise(double[] luc, ref bool flag1, ref bool flag2, ref bool flag3)
{
    for (int i = 0; i < luc.Length; i++)
    {
        if (luc[i] < 10)
            flag1 = true;
        
        else if (luc[i] >= 10 && luc[i] <= 20)
            flag2 = true;

        else if (luc[i] > 20)
            flag3 = true;
    }
}
