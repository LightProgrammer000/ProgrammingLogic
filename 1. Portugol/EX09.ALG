Algoritmo "EX09"

// Declara��o das vari�veis
Var
   areQua, areTri, areTra, a, b, c: real  // �reas e medidas

Inicio

   // L� a medida A
   escreva("# Digite a medida A: ")
   leia(a)

   // L� a medida B
   escreva("# Digite a medida B: ")
   leia(b)

   // L� a medida C
   escreva("# Digite a medida C: ")
   leia(c)

   // Calcula a �rea do quadrado
   areQua <- exp(a, 2)

   // Calcula a �rea do tri�ngulo
   areTri <- (a * b) / 2

   // Calcula a �rea do trap�zio
   areTra <- ((a + b) * c) / 2

   // Exibe as �reas formatadas
   escreval()
   escreval("* AREA DO QUADRADO = ", areQua:1:4)
   escreval("* AREA DO TRIANGULO = ", areTri:1:4)
   escreval("* AREA DO TRAPEZIO = ", areTra:1:4)

Fimalgoritmo
