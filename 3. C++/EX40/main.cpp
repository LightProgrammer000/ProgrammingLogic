#include <iostream> // Entrada e sa�da
#include <iomanip>  // Formata��o
#include <cctype>   // Manipula��o de caracteres

using namespace std;

int main (int argc, char *argv[])
{
    char tip; // Tipo de cobaia
    int n, qtd; // Casos e quantidade
    int qtdRat = 0, qtdSap = 0, qtdCoe = 0, tot = 0; // Contadores

    cout << "# Quantos casos de teste serao digitados: ";
    cin >> n; // L� o n�mero de casos

    if (n > 0)   // Caso v�lido
    {
        for (int i = 0; i < n; i++)   // Loop pelos casos
        {
            cout << "\n# Quantidade de cobaias: ";
            cin >> qtd; // L� quantidade

            cout << "# Tipo de cobaia: ";
            cin >> tip; // L� tipo
            tip = toupper(tip); // Converte para mai�sculo

            if (tip == 'R')
                qtdRat += qtd; // Ratos

            else if (tip == 'S')
                qtdSap += qtd; // Sapos

            else if (tip == 'C')
                qtdCoe += qtd; // Coelhos
        }

        tot = qtdRat + qtdSap + qtdCoe; // Calcula total
    }

    else
    {
        cout << "# Numeros de casos invalidos !" << endl; // Mensagem de erro
    }

    if (tot > 0)   // Se houver cobaias
    {
        cout << fixed << setprecision(2) << endl;
        cout << "*** RELATORIO FINAL ***" << endl;
        cout << "# Total: " << tot << endl;
        cout << "# Total de coelhos: " << qtdCoe << endl;
        cout << "# Total de ratos: " << qtdRat << endl;
        cout << "# Total de sapos: " << qtdSap << endl;
        cout << "# Percentual de coelhos: " << (((double) qtdCoe / tot) * 100) << " %" << endl;
        cout << "# Percentual de ratos: " << (((double) qtdRat / tot)* 100) << " %" << endl;
        cout << "# Percentual de sapos: " << (((double) qtdSap / tot) * 100) <<  " %" << endl;
    }

    else
    {
        cout << "# Quantidade invalida !" << endl; // Mensagem de erro
    }

    return 0; // Fim
}
