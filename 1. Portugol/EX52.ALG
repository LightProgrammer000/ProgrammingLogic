Algoritmo "EX11"

// Variáveis
Var
   i, qtd, qtdF, qtdM: inteiro
   mai, men, acuAltM: real
   sex: caractere
   vetAlt: vetor[1..5] de real

Inicio

   // Inicializa contadores
   qtdF <- 0
   qtdM <- 0
   acuAltM <- 0

   // Entrada da quantidade de pessoas
   escreva("# Quantas pessoas serao digitadas: ")
   leia(qtd)

   // Processa as alturas e gêneros
   para i de 1 ate qtd faca
       escreval("")
       escreva("# Altura da", i, "a pessoa: ")
       leia(vetAlt[i])

       // Define altura mínima e máxima
       se (i = 1) entao
           mai <- vetAlt[i]
           men <- vetAlt[i]
       fimse

       // Atualiza mínimo e máximo
       se (mai < vetAlt[i]) entao
           mai <- vetAlt[i]
       fimse

       se (men > vetAlt[i]) entao
           men <- vetAlt[i]
       fimse

       // Entrada do gênero
       escreva("# Genero da", i, "a pessoa: ")
       leia(sex)
       sex <- maiusc(sex)

       // Acumula altura e conta gêneros
       se (sex = "F") entao
           acuAltM <- acuAltM + vetAlt[i]
           qtdF <- qtdF + 1
       senao
           qtdM <- qtdM + 1
       fimse
   fimpara

   // Exibe resultados
   escreval("")
   escreval("# Menor altura = ", men:1:2)
   escreval("# Maior altura = ", mai:1:2)

   se (qtdF > 0) entao
      escreval("# Media das alturas das mulheres = ", (acuAltM/qtdF):1:2)
   senao
       escreval("# Nao ha mulheres para calcular a media")
   fimse

   escreval("# Numero de homens = ", qtdM)

Fimalgoritmo
