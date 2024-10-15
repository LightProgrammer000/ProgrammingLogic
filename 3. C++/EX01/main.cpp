#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    double lar, com, val, are, pre; // Largura, comprimento, valor, �rea e pre�o

    cout << "# Digite a largura do terreno: ";
    cin >> lar; // Leitura da largura

    cout << "# Digite o comprimento do terreno: ";
    cin >> com; // Leitura do comprimento

    cout << "# Digite o valor do metro quadrado: ";
    cin >> val; // Leitura do valor do metro quadrado

    are = lar * com; // C�lculo da �rea
    pre = are * val; // C�lculo do pre�o

    cout << fixed << setprecision(2);               // Formata��o de sa�da
    cout << "# Area do terreno: " << are << endl;   // Exibi��o da �rea
    cout << "# Preco do terreno: " << pre << endl;  // Exibi��o do pre�o

    return 0;
}
