using System;

namespace EX26
{
    class EX26
    {
        static void Main(String[] args)
        {
            int pass;

            // Solicita a senha
            Console.Write("# Digite a senha: ");
            pass = int.Parse(Console.ReadLine());

            // Loop até a senha correta
            while (pass != 2002)
            {
                Console.Write("# Senha invalida! Tente novamente: ");
                pass = int.Parse(Console.ReadLine());
            }

            // Acesso permitido
            Console.WriteLine("# Acesso permitido!");
        }
    }
}
