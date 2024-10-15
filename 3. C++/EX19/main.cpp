#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int cod, qtd;           // Código do produto e quantidade
    double val = 0;        // Valor do produto

    // Solicita o código do produto
    cout << "# Codigo do produto comprado: ";
    cin >> cod;

    // Solicita a quantidade comprada
    cout << "# Quantidade comprada: ";
    cin >> qtd;

    // Define o valor do produto com base no código
    if (cod == 1)
    {
        val = 5.00;
    }

    else if (cod == 2)
    {
        val = 3.50;
    }

    else if (cod == 3)
    {
        val = 4.80;
    }

    else if (cod == 4)
    {
        val = 8.90;
    }

    else if (cod == 5)
    {
        val = 7.32;
    }

    else
    {
        cout << "# Codigo Invalido!" << endl; // Código inválido
        return 1; // Encerra o programa com erro
    }

    // Exibe o valor a pagar
    cout << fixed << setprecision(2) << endl;
    cout << "* Valor a pagar: R$ " << val * qtd << endl;

    return 0; // Fim
}
