Algoritmo "EX14"

// Variáveis para iteração e cálculo
Var
   i, n: inteiro
   num, den: real

Inicio

   // Inicializa 'n'
   n <- 0

   // Solicita quantidade de casos até ser > 0
   enquanto (n <= 0) faca
      escreva("# Quantos casos voce vai digitar: ")
      leia(n)
   fimenquanto

   // Processa 'n' casos
   para i de 1 ate n faca

      // Lê numerador
      escreva("# Entre com o numerador: ")
      leia(num)

      // Lê denominador
      escreva("# Entre com o denominador: ")
      leia(den)

      // Verifica se denominador é diferente de zero
      se (den <> 0) entao

         // Imprime resultado da divisão
         escreval("* DIVISAO = ", (num / den):1:2)
         escreval("")
      senao

         // Mensagem de erro para divisão impossível
         escreval("* DIVISAO IMPOSSIVEL")
         escreval("")
      fimse

   fimpara

Fimalgoritmo
