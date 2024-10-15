#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    double mai = 0, d2, d3;

    cout << "# Digite as tres distancias" << endl;

    cout << "* D1: ";
    cin >> mai;

    cout << "* D2: ";
    cin >> d2;

    cout << "* D3: ";
    cin >> d3;

    if (mai < d2)
    {
        mai = d2;
    }

    if (mai < d3)
    {
        mai = d3;
    }

    cout << fixed << setprecision(2) << endl;
    cout << "* MAIOR DISTANCIA = " << mai << endl;

    return 0;
}
