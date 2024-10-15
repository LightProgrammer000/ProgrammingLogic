Algoritmo "EX01"

// Declaração das variáveis
Var
   x, y: inteiro

Inicio
   // Solicita ao usuário dois números
   escreval("# Digite dois numeros: ")

   escreva("# X: ")
   leia(x)

   escreva("# Y: ")
   leia(y)

   // Continua enquanto os números forem diferentes
   enquanto (x <> y) faca

      // Verifica se X é maior que Y
      se (x > y) entao
         escreval("# DECRESCENTE!")
      senao
         // Caso contrário, imprime que é crescente
         escreval("# CRESCENTE!")
      fimse

      escreval("")

      // Solicita novos números
      escreval("# Digite outros dois numeros: ")

      escreva("# X: ")
      leia(x)

      escreva("# Y: ")
      leia(y)

   fimenquanto

Fimalgoritmo
