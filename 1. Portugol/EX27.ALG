Algoritmo "EX04"

// Declaração das variáveis
Var
   x, y: inteiro  // Coordenadas X e Y

Inicio

   // Solicita as coordenadas X e Y
   escreval("# Digite os valores das coordenadas X e Y:")

   escreva("# X: ")
   leia(x)

   escreva("# Y: ")
   leia(y)

   // Continua enquanto X e Y forem diferentes de 0
   enquanto ((x <> 0) e (y <> 0)) faca

      // Verifica o quadrante das coordenadas
      se (x > 0) e (y > 0) entao
         escreval("* QUADRANTE Q1")
      senao
         se (x > 0) e (y < 0) entao
            escreval("* QUADRANTE Q4")
         senao
            se (x < 0) e (y < 0) entao
               escreval("* QUADRANTE Q3")
            senao
               se (x < 0) e (y > 0) entao
                  escreval("* QUADRANTE Q2")
               fimse
            fimse
         fimse
      fimse

      // Solicita novos valores de X e Y
      escreval("")
      escreval("# Digite os valores das coordenadas X e Y:")
      escreva("# X: ")
      leia(x)

      escreva("# Y: ")
      leia(y)
   fimenquanto

Fimalgoritmo
