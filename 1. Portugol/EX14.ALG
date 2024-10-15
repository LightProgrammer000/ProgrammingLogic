Algoritmo "EX04"

// Declara variáveis inteiras para minutos e valor a pagar
Var
   min, pag: inteiro

Inicio

   // Valor base da cobrança
   pag <- 50

   // Lê a quantidade de minutos
   escreva("# Digite a quantidade de minutos: ")
   leia(min)

   // Calcula valor adicional se minutos > 100
   se (min > 100) entao
      pag <- pag + (min - 100) * 2
   fimse

   // Exibe o valor a pagar com duas casas decimais
   escreval("* Valor a pagar: R$ ", pag:2:2)

Fimalgoritmo
