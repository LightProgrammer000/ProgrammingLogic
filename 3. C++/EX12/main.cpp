#include <iostream>
#include <iomanip>
#include <cmath>  // Biblioteca para fun��es matem�ticas

using namespace std;

int main (int argc, char *argv[])
{
    double a, b, c;  // Coeficientes
    double x1 = 0, x2 = 0, del = 0;  // Vari�veis de resultado

    cout << "# Coeficiente a: ";
    cin >> a;  // Entrada do coeficiente 'a'

    cout << "# Coeficiente b: ";
    cin >> b;  // Entrada do coeficiente 'b'

    cout << "# Coeficiente c: ";
    cin >> c;  // Entrada do coeficiente 'c'

    del = pow(b, 2) - 4 * a * c;  // C�lculo do discriminante

    if ((a == 0) || (del < 0))  // Verifica validade da equa��o
    {
        cout << "* Esta equacao esta invalidada ou nao possui raizes reais" << endl;
    }
    else
    {
        x1 = (-b + sqrt(del)) / (2 * a);  // C�lculo de x1
        x2 = (-b - sqrt(del)) / (2 * a);  // C�lculo de x2

        cout << fixed << setprecision(4);  // Formata sa�da
        cout << "* X1 = " << x1 << endl;  // Exibe x1
        cout << "* X2 = " << x2 << endl;  // Exibe x2
    }

    return 0;  // Fim do programa
}
