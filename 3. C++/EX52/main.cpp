// Inclui bibliotecas necess�rias
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

// Fun��o principal
int main (int argc, char *argv[])
{
    char sex; // G�nero da pessoa
    int qtd, qtdF = 0, qtdM = 0; // Quantidades de pessoas e g�neros
    double mai = 0, men = 0, acuAltM = 0; // Alturas

    // Solicita a quantidade de pessoas
    cout << "# Quantas pessoas serao digitadas: ";
    cin >> qtd;

    double vetAlt[qtd]; // Vetor para alturas

    // L� dados de cada pessoa
    for (int i = 0; i < qtd; i++)
    {
        cout << "\n# Altura da " << i + 1 << "a pessoa: ";
        cin >> vetAlt[i];

        // Inicializa maior e menor altura
        if (i == 0)
        {
            mai = vetAlt[i];
            men = vetAlt[i];
        }

        // Atualiza maior altura
        mai = (mai < vetAlt[i]) ? vetAlt[i] : mai;

        // Atualiza menor altura
        men = (men > vetAlt[i]) ? vetAlt[i] : men;

        // L� g�nero da pessoa
        cout << "# Genero da " << i + 1 << "a pessoa: ";
        cin >> sex;
        sex = toupper(sex); // Converte para mai�sculo

        // Contabiliza alturas e g�neros
        if (sex == 'F')
        {
            acuAltM += vetAlt[i]; // Acumula altura das mulheres
            qtdF++;
        }

        else if (sex == 'M')
        {
            qtdM++; // Conta homens
        }

        else
        {
            cout << "* Sexo invalido !" << endl; // Valida g�nero
            i--; // Repete a entrada
        }
    }

    // Exibe resultados
    cout << fixed << setprecision(2) << endl;
    cout << "# Menor altura = " << men << endl;
    cout << "# Maior altura = " << mai << endl;

    // Calcula m�dia das alturas das mulheres
    if (qtdF > 0)
    {
        cout << "# Media das alturas das mulheres = " << ((double) acuAltM / qtdF) << endl;
    }

    else
    {
        cout << "# Nao ha mulheres para calcular a media" << endl;
    }

    cout << "# Numero de homens = " << qtdM << endl; // Exibe n�mero de homens

    return 0; // Retorno da fun��o
}
