Algoritmo "EX04"

Var

   // Sinalizador para verificar se pelo menos um número par foi encontrado
   flag: logico

   // Contadores e índice auxiliar
   i, idAux, qtdPar, qtd: inteiro
   
   // Vetores para números digitados e números pares
   numVet, aux: vetor[1..6] de inteiro

Inicio

   // Inicializa variáveis
   qtdPar <- 0
   idAux <- 1
   flag <- falso

   // Solicita a quantidade de números a serem digitados
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)

   // Lê os números e verifica se são pares
   para i de 1 ate qtd faca

       escreva("# Digite um numero: ")
       leia(numVet[i])

       // Verifica se o número é par
       se (numVet[i] mod 2 = 0) entao
       
           flag <- verdadeiro

           aux[idAux] <- numVet[i]
           idAux <- idAux + 1

           qtdPar <- qtdPar + 1
       fimse
   fimpara

   // Exibe resultados se houver pelo menos um número par
   se (flag = verdadeiro) entao

       escreval("")
       escreval("# NUMEROS PARES:")

       // Exibe todos os números pares encontrados
       para i de 1 ate qtdPar faca
           escreva(aux[i], " ")
       fimpara

       escreval("")
       escreval("")
       escreval("# QUANTIDADE DE PARES =", qtdPar)
   fimse

Fimalgoritmo
