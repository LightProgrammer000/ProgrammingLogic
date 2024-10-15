#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    double lar, com, val, are, pre; // Largura, comprimento, valor, área e preço

    cout << "# Digite a largura do terreno: ";
    cin >> lar; // Leitura da largura

    cout << "# Digite o comprimento do terreno: ";
    cin >> com; // Leitura do comprimento

    cout << "# Digite o valor do metro quadrado: ";
    cin >> val; // Leitura do valor do metro quadrado

    are = lar * com; // Cálculo da área
    pre = are * val; // Cálculo do preço

    cout << fixed << setprecision(2);               // Formatação de saída
    cout << "# Area do terreno: " << are << endl;   // Exibição da área
    cout << "# Preco do terreno: " << pre << endl;  // Exibição do preço

    return 0;
}
