Algoritmo "EX12"

// Vari�veis para itera��o e armazenamento dos n�meros
Var
   i, n, qtd: inteiro

Inicio

   // L� a quantidade de n�meros a serem digitados
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)
   escreval("")

   // Loop para processar a quantidade fornecida
   para i de 1 ate qtd faca

      // L� o n�mero fornecido
      escreva("# Digite um numero: ")
      leia(n)

      // Verifica se o n�mero � positivo
      se (n > 0) entao

         // Verifica se o n�mero � par
         se (n mod 2 = 0) entao
            escreval("# PAR POSITIVO")
         senao
            escreval("# IMPAR POSITIVO")
         fimse

      senao
      
         // Verifica se o n�mero � negativo
         se (n < 0) entao

            // Verifica se o n�mero � par
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
