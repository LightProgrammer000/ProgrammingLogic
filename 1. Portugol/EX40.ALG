Algoritmo "EX16.0"
// Vari�veis para contagem e tipo de cobaia
Var
   tip: caractere
   i, n, qtd, tot: inteiro
   qtdRat, qtdSap, qtdCoe: inteiro

Inicio

   // Inicializa vari�veis
   n <- 0
   qtd <- 0
   tot <- 0
   qtdRat <- 0
   qtdSap <- 0
   qtdCoe <- 0

   // Solicita o n�mero de casos de teste
   escreva("# Quantos casos de teste serao digitados: ")
   leia(n)

   // Processa os casos se o n�mero for v�lido
   se (n > 0) entao
      para i de 1 ate n faca
         escreval("")

         // Solicita a quantidade de cobaias
         escreva("# Quantidade de cobaias: ")
         leia(qtd)

         // Solicita o tipo de cobaia e converte para mai�sculo
         escreva("# Tipo de cobaia: ")
         leia(tip)
         tip <- maiusc(tip)

         // Atualiza a quantidade total por tipo de cobaia
         se (tip = "R") entao
            qtdRat <- qtdRat + qtd
         senao
            se (tip = "S") entao
               qtdSap <- qtdSap + qtd
            senao
                 se (tip = "C") entao
                    qtdCoe <- qtdCoe + qtd
                 fimse
            fimse
         fimse
      fimpara

      tot <- qtdRat + qtdSap + qtdCoe

   senao
      // Exibe mensagem de erro se o n�mero de casos for inv�lido
      escreval("# Numeros de casos invalidos !")
   fimse

   // Exibe o relat�rio final se houver cobaias
   se (tot > 0) entao
      escreval("")
      escreval("*** RELATORIO FINAL ***")
      escreval("# Total: ", tot)
      escreval("# Total de coelhos: ", qtdCoe)
      escreval("# Total de ratos: ", qtdRat)
      escreval("# Total de sapos: ", qtdSap)
      escreval("# Percentual de coelhos: ", ((qtdCoe / tot)* 100):1:2)
      escreval("# Percentual de ratos: ", ((qtdRat / tot)* 100):1:2)
      escreval("# Percentual de sapos: ", ((qtdSap / tot)* 100):1:2)

   senao
      // Exibe mensagem de erro se a quantidade de cobaias for inv�lida
      escreval("# Quantidade invalida !")
   fimse

Fimalgoritmo
