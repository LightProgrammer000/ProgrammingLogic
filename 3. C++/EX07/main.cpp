#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char * argv[])
{
    // Declara variáveis
    string nom;
    int horTra;
    double valHor, pag;

    // Solicita o nome do trabalhador
    cout << "# Nome: ";
    getline(cin, nom);

    // Solicita o valor por hora
    cout << "# Valor por hora: ";
    cin >> valHor;

    // Solicita as horas trabalhadas
    cout << "# Horas trabalhadas: ";
    cin >> horTra;

    // Calcula o pagamento total
    pag = valHor * horTra;

    // Configura a precisão para duas casas decimais
    cout << fixed << setprecision(2);

    // Exibe o pagamento devido
    cout << "# O pagamento para " << nom << " deve ser " << pag << endl;

    return 0;
}
