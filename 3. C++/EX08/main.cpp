#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara variáveis
    int dist;
    double comGas, conMed = 0;

    // Solicita a distância percorrida
    cout << "# Distancia percorrida: ";
    cin >> dist;

    // Solicita o combustível gasto
    cout << "# Combustivel gasto: ";
    cin >> comGas;

    // Calcula o consumo médio
    conMed = dist / comGas;  // Não é necessário casting aqui

    // Exibe o consumo médio com 3 casas decimais
    cout << fixed << setprecision(3);
    cout << "# Consumo medio = " << conMed << endl;

    return 0;
}
