Algoritmo "EX01"

// Declara��o das vari�veis
Var
   x, y: inteiro

Inicio
   // Solicita ao usu�rio dois n�meros
   escreval("# Digite dois numeros: ")

   escreva("# X: ")
   leia(x)

   escreva("# Y: ")
   leia(y)

   // Continua enquanto os n�meros forem diferentes
   enquanto (x <> y) faca

      // Verifica se X � maior que Y
      se (x > y) entao
         escreval("# DECRESCENTE!")
      senao
         // Caso contr�rio, imprime que � crescente
         escreval("# CRESCENTE!")
      fimse

      escreval("")

      // Solicita novos n�meros
      escreval("# Digite outros dois numeros: ")

      escreva("# X: ")
      leia(x)

      escreva("# Y: ")
      leia(y)

   fimenquanto

Fimalgoritmo
