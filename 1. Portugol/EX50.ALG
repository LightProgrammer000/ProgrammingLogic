Algoritmo "EX09"

// Variáveis
Var
   auxNom: caractere
   i, qtd, mai: inteiro
   vetNom: vetor[1..5] de caractere
   vetIda: vetor[1..5] de inteiro

Inicio

   // Inicializa maior idade
   mai <- 0

   // Entrada de dados
   escreva("# Quantas pessoas voce vai digitar: ")
   leia(qtd)

   // Processa dados de cada pessoa
   para i de 1 ate qtd faca
       escreval("")
       escreval("# Dados da ", i, "a pessoa:")

       escreva("# Nome: ")
       leia(vetNom[i])

       escreva("# Idade: ")
       leia(vetIda[i])

       // Verifica maior idade
       se (i = 1) ou (mai < vetIda[i]) entao
           mai <- vetIda[i]
           auxNom <- vetNom[i]
       fimse
   fimpara

   // Exibe a pessoa mais velha
   escreval("# PESSOA MAIS VELHA: ", auxNom)

Fimalgoritmo
