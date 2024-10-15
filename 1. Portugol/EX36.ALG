Algoritmo "EX12"

// Variáveis para iteração e armazenamento dos números
Var
   i, n, qtd: inteiro

Inicio

   // Lê a quantidade de números a serem digitados
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)
   escreval("")

   // Loop para processar a quantidade fornecida
   para i de 1 ate qtd faca

      // Lê o número fornecido
      escreva("# Digite um numero: ")
      leia(n)

      // Verifica se o número é positivo
      se (n > 0) entao

         // Verifica se o número é par
         se (n mod 2 = 0) entao
            escreval("# PAR POSITIVO")
         senao
            escreval("# IMPAR POSITIVO")
         fimse

      senao
      
         // Verifica se o número é negativo
         se (n < 0) entao

            // Verifica se o número é par
            se (n mod 2 = 0) entao
               escreval("# PAR NEGATIVO")
            senao
               escreval("# IMPAR NEGATIVO")
            fimse
         senao
            escreval("# NULO")
         fimse
      fimse

      escreval("")
   fimpara

Fimalgoritmo
