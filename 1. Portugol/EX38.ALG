Algoritmo "EX14"

// Vari�veis para itera��o e c�lculo
Var
   i, n: inteiro
   num, den: real

Inicio

   // Inicializa 'n'
   n <- 0

   // Solicita quantidade de casos at� ser > 0
   enquanto (n <= 0) faca
      escreva("# Quantos casos voce vai digitar: ")
      leia(n)
   fimenquanto

   // Processa 'n' casos
   para i de 1 ate n faca

      // L� numerador
      escreva("# Entre com o numerador: ")
      leia(num)

      // L� denominador
      escreva("# Entre com o denominador: ")
      leia(den)

      // Verifica se denominador � diferente de zero
      se (den <> 0) entao

         // Imprime resultado da divis�o
         escreval("* DIVISAO = ", (num / den):1:2)
         escreval("")
      senao

         // Mensagem de erro para divis�o imposs�vel
         escreval("* DIVISAO IMPOSSIVEL")
         escreval("")
      fimse

   fimpara

Fimalgoritmo
