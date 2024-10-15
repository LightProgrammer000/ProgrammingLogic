Algoritmo "EX10"

// Variáveis
Var
   not1, not2: real
   i, qtd: inteiro
   vetMed: vetor[1..4] de real
   vetNom: vetor[1..4] de caractere

Inicio

   // Entrada da quantidade de alunos
   escreva("# Quantos alunos serao digitados: ")
   leia(qtd)

   // Entrada dos nomes e notas
   para i de 1 ate qtd faca
       escreval("")
       escreva("# Digite nome: ")
       leia(vetNom[i])

       escreva("# Digite 1a nota do", i, "o aluno: ")
       leia(not1)

       escreva("# Digite 2a nota do", i, "o aluno: ")
       leia(not2)

       // Calcula a média
       vetMed[i] <- (not1 + not2) / 2
   fimpara

   // Exibe aprovados
   escreval("")
   escreval("* Alunos aprovados:")
   para i de 1 ate qtd faca
       se (vetMed[i] >= 6.0) entao
           escreval(vetNom[i])
       fimse
   fimpara

Fimalgoritmo
