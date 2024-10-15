Algoritmo "EX11"

// Variáveis para contagem e armazenamento
Var
   i, n, qtd, den, for: inteiro

Inicio

   // Contadores inicializados
   den <- 0
   for <- 0

   // Lê a quantidade de números
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)

   // Itera conforme a quantidade fornecida
   para i de 1 ate qtd faca

      // Lê o número fornecido
      escreva("# Digite um numero: ")
      leia(n)

      // Verifica o intervalo do número
      se (n >= 10) e (n <= 20) entao
         den <- den + 1  // Dentro do intervalo
      senao
         for <- for + 1  // Fora do intervalo
      fimse

   fimpara

   // Exibe resultados
   escreval("")
   escreval("#", den, " DENTRO")
   escreval("#", for, " FORA")

Fimalgoritmo
