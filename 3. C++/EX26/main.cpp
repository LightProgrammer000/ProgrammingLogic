#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int pass; // Vari�vel para a senha

    cout << "# Digite a senha: "; // Solicita a senha
    cin >> pass; // L� a senha

    // Loop at� a senha ser correta
    while (pass != 2002)
    {
        cout << "# Senha invalida! Tente novamente: "; // Mensagem de erro
        cin >> pass; // L� a nova senha
    }

    cout << "# Acesso permitido!" << endl; // Acesso concedido

    return 0; // Fim do programa
}
