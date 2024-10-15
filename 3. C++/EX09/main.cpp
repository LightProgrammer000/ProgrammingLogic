#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (int argc, char *argv[])
{
    // Declara vari�veis para as medidas
    double a, b, c;
    double areQua = 0, areTri = 0, areTra = 0;

    // Solicita a medida A
    cout << "# Digite a medida A: ";
    cin >> a;

    // Solicita a medida B
    cout << "# Digite a medida B: ";
    cin >> b;

    // Solicita a medida C
    cout << "# Digite a medida C: ";
    cin >> c;

    // Calcula a �rea do quadrado
    areQua = pow(a, 2);
    // Calcula a �rea do tri�ngulo
    areTri = (a * b) / 2;
    // Calcula a �rea do trap�zio
    areTra = ((a + b) * c) / 2;

    // Define a precis�o da sa�da para 4 casas decimais
    cout << fixed << setprecision(4);
    // Exibe as �reas calculadas
    cout << "\n* AREA DO QUADRADO =  " << areQua << endl;
    cout << "* AREA DO TRIANGULO = " << areTri << endl;
    cout << "* AREA DO TRAPEZIO =  " << areTra << endl;

    return 0;
}
