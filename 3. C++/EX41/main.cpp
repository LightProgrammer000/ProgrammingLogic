#include <iostream> // Entrada e sa�da
#include <iomanip>  // Formata��o
#include <cctype>   // Manipula��o de caracteres

using namespace std;

int main (int argc, char *argv[])
{
    char tip; // Tipo de cobaia
    int i = 0, n, qtd; // Contadores
    int qtdRat = 0, qtdSap = 0, qtdCoe = 0, tot = 0; // Contadores de cada tipo

    cout << "# Quantos casos de teste serao digitados: ";
    cin >> n; // L� casos

    if (n > 0)   // Casos v�lidos
    {
        while (i < n)   // Loop pelos casos
        {
            cout << "\n# Quantidade de cobaias: ";
            cin >> qtd; // L� quantidade

            cout << "# Tipo de cobaia: ";
            cin >> tip; // L� tipo
            tip = toupper(tip); // Mai�sculo

            switch (tip)   // Avalia tipo
            {
                case 'R':
                    qtdRat += qtd;
                    break; // Ratos

                case 'S':
                    qtdSap += qtd;
                    break; // Sapos

                case 'C':
                    qtdCoe += qtd;
                    break; // Coelhos

                default:
                    cout << "# Opcao invalida !" << endl; // Erro
                    i--; // Corrige contador
            }

            i++; // Incrementa contador
        }

        tot = qtdRat + qtdSap + qtdCoe; // Total
    }
    else
    {
        cout << "# Numeros de casos invalidos !" << endl; // Erro
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
        cout << "# Percentual de ratos: " << (((double) qtdRat / tot) * 100) << " %" << endl;
        cout << "# Percentual de sapos: " << (((double) qtdSap / tot) * 100) <<  " %" << endl;
    }
    else
    {
        cout << "# Quantidade invalida !" << endl; // Erro
    }

    return 0; // Fim
}
