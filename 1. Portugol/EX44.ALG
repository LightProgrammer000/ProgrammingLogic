Algoritmo "EX03"

// Variáveis para armazenar dados e contadores
Var
   acuAlt: real
   idAux, i, qtd, contIda: inteiro
   vetIda: vetor[1..5] de inteiro
   vetAlt: vetor[1..5] de real
   vetNom, aux: vetor[1..5] de caractere

Inicio

   // Inicializa acumulador de altura e contadores
   acuAlt <- 0
   contIda <- 0
   idAux <- 1

   // Solicita a quantidade de pessoas e valida o valor
   escreva("# Quantas pessoas serao digitadas: ")
   leia(qtd)

   // Garante que a quantidade de pessoas esteja entre 1 e 5
   enquanto (qtd < 1) ou (qtd > 5) faca
       escreval("# Valor maximo de 5 pessoas")
       escreva("# Quantas pessoas serao digitadas: ")
       leia(qtd)
   fimenquanto

   // Lê o nome, idade e altura de cada pessoa
   para i de 1 ate qtd faca

       escreval("")
       escreval("# Dados da", i, "a pessoa:")
       escreva("# Nome: ")
       leia(vetNom[i])

       escreva("# Idade: ")
       leia(vetIda[i])

       escreva("# Altura: ")
       leia(vetAlt[i])

       // Acumula a altura
       acuAlt <- acuAlt + vetAlt[i]
   fimpara

   // Verifica se a pessoa tem menos de 16 anos e armazena o nome
   para i de 1 ate qtd faca

       se (vetIda[i] < 16) entao
           contIda <- contIda + 1

           aux[idAux] <- vetNom[i]
           idAux <- idAux + 1
       fimse
   fimpara

   // Calcula e exibe a altura média e percentual de pessoas com menos de 16 anos
   escreval("")
   escreval("# Altura media: ", (acuAlt/qtd):1:2)
   escreval("# Pessoas com menos de 16 anos: ", ((contIda/qtd) * 100):1:1, "%")

   // Exibe os nomes das pessoas com menos de 16 anos
   para i de 1 ate contIda faca
       escreval(aux[i])
   fimpara

Fimalgoritmo
