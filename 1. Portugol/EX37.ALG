Algoritmo "EX13"

// Variáveis para casos, iteração e notas
Var
   qtd, i, j: inteiro
   som, n: real

Inicio

   // Lê a quantidade de casos a serem processados
   escreva("# Quantos casos voce vai digitar: ")
   leia(qtd)

   // Loop para processar cada caso
   para i de 1 ate qtd faca

      // Reseta a soma para cada caso
      som <- 0

      // Loop para processar 3 notas
      para j de 1 ate 3 faca

         // Solicita e lê a nota
         escreva("# Nota", j, ": ")
         leia(n)

         // Aplica pesos conforme a nota
         se (j = 1) entao
            som <- som + n * 2
         senao
            se (j = 2) entao
               som <- som + n * 3
            senao
               som <- som + n * 5
            fimse
         fimse
      fimpara

      // Calcula e exibe a média ponderada
      escreval("# Media = ", (som/10):1:1)

      // Linha em branco para separar casos
      escreval("")
   fimpara

Fimalgoritmo
