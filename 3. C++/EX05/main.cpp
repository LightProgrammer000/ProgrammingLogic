// Inclui biblioteca de entrada e saída e manipulação de precisão
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara variáveis
    int qtd;
    double pre, din, trc = 0;

    // Solicita preço unitário
    cout << "# Preco unitario do produto: ";
    cin >> pre;

    // Solicita quantidade comprada
    cout << "# Quantidade comprada: ";
    cin >> qtd;

    // Solicita dinheiro recebido
    cout << "# Dinheiro recebido: ";
    cin >> din;

    // Calcula troco
    trc = din - pre * qtd;

    // Define precisão e exibe troco
    cout << fixed << setprecision(2) << endl;
    cout << "# Troco: " << trc << endl;

    return 0;
}
