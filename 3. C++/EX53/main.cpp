#include <iostream>
#include <iomanip>

using namespace std;

// Função para verificar e imprimir lucro abaixo de 10%
void verificaLucroAbaixo10(int qtd, int prdInd[], double luc[])
{
    cout << "# Lucro abaixo de 10%: ";
    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] < 10)
        {
            cout << " " << prdInd[i];
        }
    }

    cout << endl;  // Adicionando uma nova linha após a saída
}

// Função para verificar e imprimir lucro entre 10% e 20%
void verificaLucroEntre10e20(int qtd, int prdInd[], double luc[])
{
    cout << "# Lucro entre 10% e 20%: ";
    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] >= 10 && luc[i] <= 20)
        {
            cout << " " << prdInd[i];
        }
    }

    cout << endl;  // Adicionando uma nova linha após a saída
}

// Função para verificar e imprimir lucro acima de 20%
void verificaLucroAcima20(int qtd, int prdInd[],  double luc[])
{
    cout << "# Lucro acima de 20%: ";
    for (int i = 0; i < qtd; i++)
    {
        if (luc[i] > 20)
        {
            cout << " " << prdInd[i];
        }
    }

    cout << endl;  // Adicionando uma nova linha após a saída
}

int main(int argc, char* argv[])
{
    int qtd;
    string prd;
    double preCom, preVen, totCom = 0, totVen = 0;

    cout << "# Serao digitados dados de quantos produtos: ";
    cin >> qtd;

    int prdInd[qtd];
    double luc[qtd];

    for (int i = 0; i < qtd; i++)
    {
        cout << "\n# Produto " << i + 1 << ":" << endl;
        prdInd[i] = i + 1;  // Usar i + 1 para que o índice comece em 1

        cout << "# Nome: ";
        cin.ignore(INT_MAX, '\n');  // Limpa o buffer
        getline(cin, prd);

        cout << "# Preco de compra: ";
        cin >> preCom;

        cout << "# Preco de venda: ";
        cin >> preVen;

        luc[i] = ((preVen - preCom) / preCom) * 100;

        totCom += preCom;
        totVen += preVen;
    }

    cout << "\n*** RELATORIO ***" << endl;

    // Chamadas para as funções de verificação
    verificaLucroAbaixo10(qtd, prdInd, luc);
    verificaLucroEntre10e20(qtd, prdInd, luc);
    verificaLucroAcima20(qtd, prdInd, luc);

    cout << fixed << setprecision(2);
    cout << "# Valor total de compra: " << totCom << endl;
    cout << "# Valor total de venda: " << totVen << endl;
    cout << "# Lucro total: " << (totVen - totCom) << endl;

    return 0;
}
