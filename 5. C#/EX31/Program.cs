using System;

namespace EX31
{
    class EX31
    {
        static void Main(String[] args)
        {
            // Inicializa as variáveis de controle e soma
            int i = 0, som = 0, n;
            bool z = true;

            // Loop principal que continua até z ser falso
            while (z)
            {
                // Solicita um número inteiro do usuário
                Console.Write("# Digite um numero inteiro: ");
                n = int.Parse(Console.ReadLine());

                // Se o número for 0, termina o loop
                if (n == 0)
                {
                    z = false;
                }
                else
                {
                    // Soma os próximos 5 números pares
                    while (i < 5)
                    {
                        // Verifica se o número é par
                        if (n % 2 == 0)
                        {
                            som += n;
                            i++;
                        }
                        n++; // Incrementa o número para testar o próximo
                    }
                }

                // Exibe a soma
                Console.WriteLine($"# SOMA: {som}\n");

                // Reseta as variáveis para a próxima iteração
                i = 0;
                som = 0;
            }
        }
    }
}
