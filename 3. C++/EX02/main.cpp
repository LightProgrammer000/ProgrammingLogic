#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (int argc, char *argv[])
{
    double bas, alt, are, per, dia; // Base, altura, área, perímetro, diagonal

    cout << "# Base do retangulo: ";
    cin >> bas; // Leitura base

    cout << "# Altura do retangulo: ";
    cin >> alt; // Leitura altura

    are = bas * alt; // Área
    per = 2 * (bas + alt); // Perímetro
    dia = sqrt(bas * bas + alt * alt); // Diagonal

    cout << fixed << setprecision(4) << endl;
    cout << "# AREA = " << are << endl; // Mostra área
    cout << "# PERIMETRO = " << per << endl; // Mostra perímetro
    cout << "# DIAGONAL = " << dia << endl; // Mostra diagonal

    return 0;
}
