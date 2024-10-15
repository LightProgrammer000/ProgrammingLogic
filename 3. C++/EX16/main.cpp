#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double gli;  // Medida da glicose

    // Solicita a medida da glicose
    cout << "# Digite a medida da glicose: ";
    cin >> gli;

    // Classificação de glicose
    if (gli <= 100)
    {
        cout << "* Classificacao: normal" << endl;
    }

    else if (gli <= 140)
    {
        cout << "* Classificacao: elevado" << endl;
    }

    else
    {
        cout << "* Classificacao: diabetes" << endl;
    }

    return 0;
}
