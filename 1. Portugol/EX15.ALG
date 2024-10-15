Algoritmo "EX05"

// Declara variáveis reais para preço, quantidade, dinheiro e total
Var
   pre, qtd, din, total: real

Inicio

   // Lê o preço unitário do produto
   escreva("# Preço unitário do produto: ")
   leia(pre)

   // Lê a quantidade comprada
   escreva("# Quantidade comprada: ")
   leia(qtd)

   // Lê o dinheiro recebido
   escreva("# Dinheiro recebido: ")
   leia(din)

   // Calcula o valor total da compra
   total <- pre * qtd
   escreval("")

   // Verifica se o dinheiro recebido é suficiente
   se (din < total) entao
      // Exibe a mensagem de dinheiro insuficiente e o valor que falta
      escreval("* DINHEIRO INSUFICIENTE. FALTAM R$ ", (total - din):2:2)

   senao
      // Exibe o troco a ser devolvido
      escreval("* TROCO = R$ ", (din - total):2:2)
   fimse

Fimalgoritmo
