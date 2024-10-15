Algoritmo "EX16.1"

Var
   tip: caractere
   i, n, qtd, tot: inteiro
   qtdRat, qtdSap, qtdCoe: inteiro

Inicio

   // Inicializa variáveis
   i <- 0
   n <- 0
   qtd <- 0
   tot <- 0
   qtdRat <- 0
   qtdSap <- 0
   qtdCoe <- 0

   // Solicita o número de casos de teste
   escreva("# Quantos casos de teste serao digitados: ")
   leia(n)

   // Processa os casos se o número for válido
   se (n > 0) entao
      enquanto (i < n) faca

         // Solicita a quantidade de cobaias
         escreval("")
         escreva("# Quantidade de cobaias: ")
         leia(qtd)
		 
         // Solicita o tipo de cobaia e converte para maiúsculo
         escreva("# Tipo de cobaia: ")
         leia(tip)
         tip <- maiusc(tip)

         // Atualiza a quantidade por tipo de cobaia
         escolha (tip)

            caso "R"
               qtdRat <- qtdRat + qtd  // Atualiza a quantidade de ratos

            caso "S"
               qtdSap <- qtdSap + qtd  // Atualiza a quantidade de sapos

            caso "C"
               qtdCoe <- qtdCoe + qtd  // Atualiza a quantidade de coelhos

            outrocaso

               // Mensagem para opção inválida
               escreva("# Opcao invalida !")
               escreval("")
               i <- i - 1  // Não conta iteração inválida

         fimescolha

         i <- i + 1  // Avança para o próximo caso
      fimenquanto

	  tot <- qtdRat + qtdSap + qtdCoe  // Corrige o total final

   senao
      // Mensagem de erro para número inválido de casos
      escreval("# Numeros de casos invalidos !")
   fimse

   // Exibe o relatório final se houver cobaias
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
      // Mensagem de erro para quantidade inválida de cobaias
      escreval("# Quantidade invalida !")
   fimse

Fimalgoritmo
