Algoritmo "EX07"

// Declaração das variáveis
Var
   z: logico
   n, som, i: inteiro
   
Inicio

   // Inicializa contador e soma
   i <- 0
   som <- 0

   // Inicializa o loop principal
   z <- verdadeiro

   // Loop principal
   enquanto (z = verdadeiro) faca

      // Solicita um número
      escreva("# Digite um numero inteiro: ")
      leia(n)

      // Termina o loop se o número for 0
      se (n = 0) entao
         z <- falso
      senao
      
         // Soma os próximos 5 números pares
         enquanto i < 5 faca
            se (n mod 2 = 0) entao
               som <- som + n
               i <- i + 1
            fimse
            n <- n + 1
         fimenquanto
      fimse

      // Exibe a soma
      escreval("# SOMA: ", som)

      // Reseta contador e soma
      i <- 0
      som <- 0
   fimenquanto

Fimalgoritmo
