#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
    double aum = 0, salAtu; // Aumento e salário atual
    string per; // Porcentagem do aumento

    cout << "# Digite o salario da pessoa: "; // Solicita salário
    cin >> salAtu; // Lê salário

    // Calcula aumento com base no salário
    if (salAtu > 8000)
    {
        per = "5"; // Porcentagem 5%
        aum = 0.05 * salAtu; // Aumento
    }
    else if (salAtu > 3000)
    {
        per = "10"; // Porcentagem 10%
        aum = 0.10 * salAtu; // Aumento
    }
    else if (salAtu > 1000)
    {
        per = "15"; // Porcentagem 15%
        aum = 0.15 * salAtu; // Aumento
    }
    else
    {
        per = "20"; // Porcentagem 20%
        aum = 0.20 * salAtu; // Aumento
    }

    cout << fixed << setprecision(2); // Formatação
    cout << "# Novo salario: R$ " << (salAtu + aum) << endl; // Novo salário
    cout << "# Aumento: R$ " << aum << endl; // Valor do aumento
    cout << "# Porcentagem = " << per << " %" << endl; // Exibe porcentagem

    return 0; // Fim
}
