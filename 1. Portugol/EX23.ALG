Algoritmo "EX13"

// Declaração das variáveis
Var
   x, y: real // Coordenadas X e Y

Inicio

   // Solicita o valor de X
   escreva("# Valor de X: ")
   leia(x)

   // Solicita o valor de Y
   escreva("# Valor de Y: ")
   leia(y)

   // Verifica se está na origem
   se (x = 0) e (y = 0) entao
      escreval("Origem") // Exibe "Origem" se X e Y forem zero
   fimse

   // Verifica se está nos eixos
   se (x = 0) e (y <> 0) entao
      escreval("Eixo Y") // Exibe "Eixo Y" se estiver no eixo Y
   fimse

   se (x <> 0) e (y = 0) entao
      escreval("Eixo X") // Exibe "Eixo X" se estiver no eixo X
   senao
      // Verifica o quadrante
      se (x > 0) entao
         se (y > 0) entao
            escreval("Q1") // Exibe "Q1" para o primeiro quadrante
         senao
            escreval("Q4") // Exibe "Q4" para o quarto quadrante
         fimse
      senao
         se (x < 0) entao
            se (y > 0) entao
               escreval("Q2") // Exibe "Q2" para o segundo quadrante
            senao
               escreval("Q3") // Exibe "Q3" para o terceiro quadrante
            fimse
         fimse
      fimse
   fimse

Fimalgoritmo
