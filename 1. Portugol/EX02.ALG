Algoritmo "EX02"

// Declaração das variáveis
Var
   bas, alt, area, perimetro, diagonal: real

Inicio

   // Lê a base do retângulo
   escreva("# Base do retangulo: ")
   leia(bas)

   // Lê a altura do retângulo
   escreva("# Altura do retangulo: ")
   leia(alt)

   // Calcula a área do retângulo
   area <- bas * alt

   // Calcula o perímetro do retângulo
   perimetro <- 2 * (bas + alt)

   // Calcula a diagonal usando o Teorema de Pitágoras
   diagonal <- raizq(bas * bas + alt * alt)

   // Exibe a área
   escreval("# Area: ", area:10:4)

   // Exibe o perímetro
   escreval("# Perimetro: ", perimetro:10:4)

   // Exibe a diagonal
   escreval("# Diagonal: ", diagonal:10:4)

Fimalgoritmo
