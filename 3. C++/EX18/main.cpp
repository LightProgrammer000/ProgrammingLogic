#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main (int argc, char *argv[])
{
    char opc;
    double fah, cel;

    cout << "# Voce vai digitar a temperatura em qual escala (C/F): ";
    cin >> opc;
    opc = toupper(opc);

    if (opc == 'F')
    {
        cout << "# Digite a temperatura em Fahrenheit: ";
        cin >> fah;

        cel = 5/9 * (fah - 32);
        cout << "# Temperatura equivalente em Celsius: " << cel << endl;
    }

    else if (opc == 'C')
    {
        cout << "# Digite a temperatura em Celsius: ";
        cin >> cel;

        fah = (9 * cel) / 5 + 32;
        cout << "# Temperatura equivalente em Fahrenheit: " << fah << endl;
    }

    else
    {
        cout << "# Opcao invalida!" << endl;
    }

    return 0;
}
