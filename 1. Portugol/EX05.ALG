Algoritmo "EX05"

// Declaração das variáveis
Var
   qtd: inteiro            // Quantidade de produtos
   pre, din, trc: real     // Preço unitário, dinheiro recebido e troco

Inicio

   // Lê o preço unitário do produto
   escreva("# Preco unitario do produto: ")
   leia(pre)

   // Lê a quantidade de produtos
   escreva("# Quantidade comprada: ")
   leia(qtd)

   // Lê o dinheiro recebido
   escreva("# Dinheiro recebido: ")
   leia(din)

   // Calcula o troco
   trc <- (din - pre * qtd)

   // Exibe o troco
   escreval("")
   escreval("# Troco: ", trc:5:2)

Fimalgoritmo
