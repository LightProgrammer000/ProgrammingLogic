Algoritmo "EX04"

// Declara vari�veis inteiras para minutos e valor a pagar
Var
   min, pag: inteiro

Inicio

   // Valor base da cobran�a
   pag <- 50

   // L� a quantidade de minutos
   escreva("# Digite a quantidade de minutos: ")
   leia(min)

   // Calcula valor adicional se minutos > 100
   se (min > 100) entao
      pag <- pag + (min - 100) * 2
   fimse

   // Exibe o valor a pagar com duas casas decimais
   escreval("* Valor a pagar: R$ ", pag:2:2)

Fimalgoritmo
