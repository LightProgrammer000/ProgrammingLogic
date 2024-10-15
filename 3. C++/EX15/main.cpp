#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    double pre, qtd, din, tot = 0;  // Preço, quantidade, dinheiro e total

    cout << fixed << setprecision(2);  // Formata saída

    // Preço unitário
    cout << "# Preco unitario do produto: ";
    cin >> pre;

    // Quantidade
    cout << "# Quantidade comprada: ";
    cin >> qtd;

    // Dinheiro recebido
    cout << "# Dinheiro recebido: ";
    cin >> din;

    // Total da compra
    tot = pre * qtd;

    // Verifica se o dinheiro é suficiente
    if (din < tot)
    {
        // Dinheiro insuficiente
        cout << "* DINHEIRO INSUFICIENTE. FALTAM R$ " << tot - din << endl;
    }
    else
    {
        // Exibe troco
        cout << "* TROCO = R$ " << din - tot << endl;
    }

    return 0;  // Fim
}
