Algoritmo "EX05"

// Declara vari�veis reais para pre�o, quantidade, dinheiro e total
Var
   pre, qtd, din, total: real

Inicio

   // L� o pre�o unit�rio do produto
   escreva("# Pre�o unit�rio do produto: ")
   leia(pre)

   // L� a quantidade comprada
   escreva("# Quantidade comprada: ")
   leia(qtd)

   // L� o dinheiro recebido
   escreva("# Dinheiro recebido: ")
   leia(din)

   // Calcula o valor total da compra
   total <- pre * qtd
   escreval("")

   // Verifica se o dinheiro recebido � suficiente
   se (din < total) entao
      // Exibe a mensagem de dinheiro insuficiente e o valor que falta
      escreval("* DINHEIRO INSUFICIENTE. FALTAM R$ ", (total - din):2:2)

   senao
      // Exibe o troco a ser devolvido
      escreval("* TROCO = R$ ", (din - total):2:2)
   fimse

Fimalgoritmo
