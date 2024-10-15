#include <stdio.h>

int main (int argc, char *argv[])
{
    int pass; // Variável para a senha

    printf("# Digite a senha: ");
    scanf("%d", &pass); // Entrada da senha

    while (pass != 2002) // Enquanto a senha estiver incorreta
    {
        printf("* Senha invalida! Tente novamente: ");
        scanf("%d", &pass); // Solicita nova entrada
    }

    printf("\n# Acesso permitido!"); // Mensagem de sucesso
    putchar('\n'); // Nova linha

    return 0; // Fim
}
