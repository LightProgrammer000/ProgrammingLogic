Algoritmo "EX02"

// Declara��o das vari�veis
Var
   bas, alt, area, perimetro, diagonal: real

Inicio

   // L� a base do ret�ngulo
   escreva("# Base do retangulo: ")
   leia(bas)

   // L� a altura do ret�ngulo
   escreva("# Altura do retangulo: ")
   leia(alt)

   // Calcula a �rea do ret�ngulo
   area <- bas * alt

   // Calcula o per�metro do ret�ngulo
   perimetro <- 2 * (bas + alt)

   // Calcula a diagonal usando o Teorema de Pit�goras
   diagonal <- raizq(bas * bas + alt * alt)

   // Exibe a �rea
   escreval("# Area: ", area:10:4)

   // Exibe o per�metro
   escreval("# Perimetro: ", perimetro:10:4)

   // Exibe a diagonal
   escreval("# Diagonal: ", diagonal:10:4)

Fimalgoritmo
