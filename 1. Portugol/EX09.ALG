Algoritmo "EX09"

// Declaração das variáveis
Var
   areQua, areTri, areTra, a, b, c: real  // Áreas e medidas

Inicio

   // Lê a medida A
   escreva("# Digite a medida A: ")
   leia(a)

   // Lê a medida B
   escreva("# Digite a medida B: ")
   leia(b)

   // Lê a medida C
   escreva("# Digite a medida C: ")
   leia(c)

   // Calcula a área do quadrado
   areQua <- exp(a, 2)

   // Calcula a área do triângulo
   areTri <- (a * b) / 2

   // Calcula a área do trapézio
   areTra <- ((a + b) * c) / 2

   // Exibe as áreas formatadas
   escreval()
   escreval("* AREA DO QUADRADO = ", areQua:1:4)
   escreval("* AREA DO TRIANGULO = ", areTri:1:4)
   escreval("* AREA DO TRAPEZIO = ", areTra:1:4)

Fimalgoritmo
