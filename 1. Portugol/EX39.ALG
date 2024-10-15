Algoritmo "EX15"

// Função que calcula o fatorial de um número
funcao fatorial (n: inteiro): inteiro
Var
   i: inteiro
   fat: inteiro

inicio

   // Inicializa o fatorial
   fat <- 1

   // Calcula o fatorial
   para i de 1 ate n faca
      fat <- fat * i
   fimpara

   // Retorna o fatorial
   retorne fat
fimfuncao

///// PROGRAMA PRINCIPAL /////
Var
   n: inteiro

Inicio

   // Solicita o valor de N
   escreva("# Digite o valor de N: ")
   leia(n)

   // Verifica se N é <= 15
   se (n <= 15) entao

      // Exibe o fatorial
      escreval("# Fatorial = ", fatorial(n))
   senao

      // Mensagem para valores > 15
      escreval("# Digite valores abaixo de 15")
   fimse

Fimalgoritmo
