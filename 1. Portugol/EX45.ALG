Algoritmo "EX04"

Var

   // Sinalizador para verificar se pelo menos um n�mero par foi encontrado
   flag: logico

   // Contadores e �ndice auxiliar
   i, idAux, qtdPar, qtd: inteiro
   
   // Vetores para n�meros digitados e n�meros pares
   numVet, aux: vetor[1..6] de inteiro

Inicio

   // Inicializa vari�veis
   qtdPar <- 0
   idAux <- 1
   flag <- falso

   // Solicita a quantidade de n�meros a serem digitados
   escreva("# Quantos numeros voce vai digitar: ")
   leia(qtd)

   // L� os n�meros e verifica se s�o pares
   para i de 1 ate qtd faca

       escreva("# Digite um numero: ")
       leia(numVet[i])

       // Verifica se o n�mero � par
       se (numVet[i] mod 2 = 0) entao
       
           flag <- verdadeiro

           aux[idAux] <- numVet[i]
           idAux <- idAux + 1

           qtdPar <- qtdPar + 1
       fimse
   fimpara

   // Exibe resultados se houver pelo menos um n�mero par
   se (flag = verdadeiro) entao

       escreval("")
       escreval("# NUMEROS PARES:")

       // Exibe todos os n�meros pares encontrados
       para i de 1 ate qtdPar faca
           escreva(aux[i], " ")
       fimpara

       escreval("")
       escreval("")
       escreval("# QUANTIDADE DE PARES =", qtdPar)
   fimse

Fimalgoritmo
