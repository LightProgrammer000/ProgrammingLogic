#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    char sex;                               // G�nero da pessoa
    int qtd, qtdF = 0, qtdM = 0;            // Contadores de g�neros
    double mai = 0, men = 0, acuAltM = 0;   // Alturas

    printf("# Quantas pessoas serao digitadas: ");
    scanf("%d", &qtd);
    putchar('\n');

    double vetAlt[qtd]; // Vetor para alturas

    for (int i = 0; i < qtd; i++)
    {
        printf("# Altura da %da pessoa: ", i + 1);
        scanf("%lf", &vetAlt[i]);

        // Inicializa a altura m�nima e m�xima
        if (i == 0)
        {
            mai = vetAlt[i];
            men = vetAlt[i];
        }

        // Atualiza altura m�xima
        if (mai < vetAlt[i])
        {
            mai = vetAlt[i];
        }

        // Atualiza altura m�nima
        if (men > vetAlt[i])
        {
            men = vetAlt[i];
        }

        printf("# Genero da %da pessoa: ", i + 1);
        getchar();
        scanf("%c", &sex);  // L� o g�nero
        sex = toupper(sex); // Converte para mai�sculo

        // Contagem de g�neros e soma das alturas femininas
        if (sex == 'F')
        {
            acuAltM += vetAlt[i];
            qtdF++;
        }
        else
        {
            qtdM++;
        }

        putchar('\n');
    }

    // Exibe resultados
    printf("\n# Menor altura = %.2lf", men);
    printf("\n# Maior altura = %.2lf", mai);

    // C�lculo da m�dia das alturas femininas
    if (qtdF > 0)
    {
        printf("\n# Media das alturas das mulheres = %.2lf", (acuAltM / qtdF));
    }

    else
    {
        printf("\n# Nao ha mulheres para calcular a media");
    }

    printf("\n# Numero de homens = %d\n", qtdM);

    return 0;
}
