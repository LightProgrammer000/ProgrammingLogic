#include <stdio.h>

int main (int argc, char *argv[])
{
    double x, y; // Declaração das variáveis para coordenadas X e Y

    // Solicita o valor de X
    printf("# Valor de X: ");
    scanf("%lf", &x);

    // Solicita o valor de Y
    printf("# Valor de Y: ");
    scanf("%lf", &y);

    // Verifica se está na origem
    if ((x == 0) && (y == 0))
    {
        printf("# Origem"); // Exibe "Origem"
    }

    // Verifica se está no eixo Y
    if ((x == 0) && (y != 0))
    {
        printf("Eixo Y"); // Exibe "Eixo Y"
    }

    // Verifica se está no eixo X
    if ((x != 0) && (y == 0))
    {
        printf("Eixo X"); // Exibe "Eixo X"
    }

    else // Se não estiver nos eixos
    {
        // Verifica o quadrante com base nas coordenadas
        if (x > 0)
        {
            if (y > 0)
            {
                printf("Q1"); // Exibe "Q1" para o primeiro quadrante
            }

            else
            {
                printf("Q4"); // Exibe "Q4" para o quarto quadrante
            }
        }
        else
        {
            if (x < 0)
            {
                if (y > 0)
                {
                    printf("Q2"); // Exibe "Q2" para o segundo quadrante
                }

                else
                {
                    printf("Q3"); // Exibe "Q3" para o terceiro quadrante
                }
            }
        }
    }

    return 0; // Finaliza o programa
}
