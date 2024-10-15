#include <stdio.h>
#include "dados.h" // Inclui o arquivo de cabeçalho personalizado

int main (int argc, char *argv[])
{
    char nom[50];       // Nome do trabalhador
    int horTra;         // Horas trabalhadas
    double valHor, pag; // Valor por hora e pagamento total

    // Solicita o nome
    printf("# Nome: ");
    ler_texto(nom, 50);

    // Solicita o valor por hora trabalhada
    printf("# Valor por hora: ");
    scanf("%lf", &valHor);

    // Solicita o número de horas trabalhadas
    printf("# Horas trabalhadas: ");
    scanf("%d", &horTra);

    // Calcula o pagamento total
    pag = valHor * horTra;

    // Exibe o pagamento com duas casas decimais
    printf("\n# O pagamento para %s deve ser R$ %.2lf\n", nom, pag);

    return 0;
}
