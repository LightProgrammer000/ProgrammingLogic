 Algoritmo "EX08"

// Variáveis
Var
   qtd, qtdPar, i, AcuSom: inteiro
   numVet: vetor[1..6] de inteiro

Inicio

   // Inicializações
   AcuSom <- 0
   qtdPar <- 0

   // Entrada de dados
   escreva("# Quantos elementos vai ter o vetor: ")
   leia(qtd)

   // Processa o vetor
   para i de 1 ate qtd faca
       escreva("# Digite um numero: ")
       leia(numVet[i])

       // Soma se for par
       se (numVet[i] % 2 = 0) entao
           AcuSom <- AcuSom + numVet[i]
           qtdPar <- qtdPar + 1
       fimse
   fimpara

   escreval("")

   // Exibe o resultado
   se (qtdPar > 0) entao
       escreval("# MEDIA DOS PARES = ", (AcuSom/qtdPar):1:1)
   senao
       escreval("# NENHUM NUMERO PAR")
   fimse

Fimalgoritmo
