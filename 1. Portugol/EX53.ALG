Algoritmo "EX12"

// Variáveis
Var
   i, qtd: inteiro
   prd: caractere
   flag1, flag2, flag3: logico
   preCom, preVen, totCom, totVen: real

   luc: vetor[1..4] de real
   prdInd: vetor[1..4] de inteiro

Inicio

   // Inicializa variáveis
   totCom <- 0
   totVen <- 0
   flag1 <- falso
   flag2 <- falso
   flag3 <- falso

   // Entrada de dados
   escreva("# Serao digitados dados de quantos produtos: ")
   leia(qtd)

   // Processa cada produto
   para i de 1 ate qtd faca
       escreval("")
       escreval("# Produto ", i, ":")
       escreva("# Nome: ")
       leia(prd)
       prdInd[i] <- i

       escreva("# Preco de compra: ")
       leia(preCom)

       escreva("# Preco de venda: ")
       leia(preVen)

       // Calcula lucro percentual
       luc[i] <- ((preVen - preCom) / preCom) * 100

       // Acumula totais
       totCom <- totCom + preCom
       totVen <- totVen + preVen
   fimpara

   // Exibe relatório
   escreval("")
   escreval("*** RELATORIO ***")

   // Verifica faixas de lucro
   para i de 1 ate qtd faca
       se (luc[i] < 10) entao
           flag1 <- verdadeiro
       senao
           se ((luc[i] >= 10) e (luc[i] <= 20)) entao
               flag2 <- verdadeiro
           senao
               se (luc[i] > 20) entao
                   flag3 <- verdadeiro
               fimse
           fimse
       fimse
   fimpara

   // Exibe lucro abaixo de 10%
   se (flag1 = verdadeiro) entao
       escreval("")
       escreva("# Lucro abaixo de 10%: ")
       para i de 1 ate qtd faca
           se (luc[i] < 10) entao
               escreva(prdInd[i], " ")
           fimse
       fimpara
   fimse

   // Exibe lucro entre 10% e 20%
   se (flag2 = verdadeiro) entao
       escreval("")
       escreva("# Lucro entre 10% e 20%: ")
       para i de 1 ate qtd faca
           se ((luc[i] >= 10) e (luc[i] <= 20)) entao
               escreva(prdInd[i], " ")
           fimse
       fimpara
   fimse

   // Exibe lucro acima de 20%
   se (flag3 = verdadeiro) entao
       escreval("")
       escreva("# Lucro acima de 20%: ")
       para i de 1 ate qtd faca
           se (luc[i] > 20) entao
               escreva(prdInd[i], " ")
           fimse
       fimpara
   fimse

   // Exibe totais e lucro
   escreval("")
   escreval("# Valor total de compra: ", totCom:2:2)
   escreval("# Valor total de venda: ", totVen:2:2)
   escreval("# Lucro total: ", (totVen - totCom):1:2)

Fimalgoritmo
