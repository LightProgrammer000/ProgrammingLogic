#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int x, y; // Coordenadas

    cout << "# Digite os valores das coordenadas X e Y:" << endl; // Entrada

    cout << "# X: ";
    cin >> x; // Lê X

    cout << "# Y: ";
    cin >> y; // Lê Y

    while ((x != 0) && (y != 0)) // Enquanto não for (0, 0)
    {
        if ((x > 0) && (y > 0))
            cout << "* QUADRANTE Q1" << endl; // Q1

        else if ((x > 0) && (y < 0))
            cout << "* QUADRANTE Q4" << endl; // Q4

        else if ((x < 0) && (y < 0))
            cout << "* QUADRANTE Q3" << endl; // Q3

        else if ((x < 0) && (y > 0))
            cout << "* QUADRANTE Q2" << endl; // Q2

        cout << "\n# Digite os valores das coordenadas X e Y: " << endl; // Novas entradas

        cout << "# X: ";
        cin >> x; // Lê novo X

        cout << "# Y: ";
        cin >> y; // Lê novo Y
    }

    return 0; // Fim
}
