#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (int argc, char *argv[])
{
    double bas, alt, are, per, dia; // Base, altura, �rea, per�metro, diagonal

    cout << "# Base do retangulo: ";
    cin >> bas; // Leitura base

    cout << "# Altura do retangulo: ";
    cin >> alt; // Leitura altura

    are = bas * alt; // �rea
    per = 2 * (bas + alt); // Per�metro
    dia = sqrt(bas * bas + alt * alt); // Diagonal

    cout << fixed << setprecision(4) << endl;
    cout << "# AREA = " << are << endl; // Mostra �rea
    cout << "# PERIMETRO = " << per << endl; // Mostra per�metro
    cout << "# DIAGONAL = " << dia << endl; // Mostra diagonal

    return 0;
}
