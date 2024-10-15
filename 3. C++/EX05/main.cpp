// Inclui biblioteca de entrada e sa�da e manipula��o de precis�o
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara vari�veis
    int qtd;
    double pre, din, trc = 0;

    // Solicita pre�o unit�rio
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

    // Define precis�o e exibe troco
    cout << fixed << setprecision(2) << endl;
    cout << "# Troco: " << trc << endl;

    return 0;
}
