#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    double n1, n2, som = 0;  // Variáveis

    cout << "# Digite a primeira nota: ";
    cin >> n1;  // Entrada da primeira nota

    cout << "# Digite a segunda nota: ";
    cin >> n2;  // Entrada da segunda nota

    som = n1 + n2;  // Soma das notas

    cout << "* NOTA FINAL = " << som << endl;  // Exibe a nota final

    if (som < 60)  // Verifica se reprovou
    {
        cout << "# REPROVADO" << endl;  // Exibe "Reprovado"
    }

    return 0;  // Fim do programa
}
