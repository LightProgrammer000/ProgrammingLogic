#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    int minu, pag = 50;  // Minutos e valor base

    // Solicita a quantidade de minutos
    cout << "# Digite a quantidade de minutos: ";
    cin >> minu;

    // Calcula o valor extra se minutos excederem 100
    if (minu > 100)
    {
        pag += (minu - 100) * 2;  // Adiciona custo extra
    }

    // Verifica se a entrada é válida
    else if (minu < 0)
    {
        cout << "# Minutos nao podem ser negativos." << endl;

        return 0;  // Sai em caso de erro
    }

    // Exibe o valor a pagar
    cout << fixed << setprecision(2) << endl;
    cout << "* Valor a pagar: R$ " << pag << endl;

    return 0;  // Fim do programa
}
