Algoritmo "EX07"

// Declara��o das vari�veis
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

      // Solicita um n�mero
      escreva("# Digite um numero inteiro: ")
      leia(n)

      // Termina o loop se o n�mero for 0
      se (n = 0) entao
         z <- falso
      senao
      
         // Soma os pr�ximos 5 n�meros pares
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
