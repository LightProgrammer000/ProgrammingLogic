Algoritmo "EX05"

// Declara��o das vari�veis
Var
   qtd: inteiro            // Quantidade de produtos
   pre, din, trc: real     // Pre�o unit�rio, dinheiro recebido e troco

Inicio

   // L� o pre�o unit�rio do produto
   escreva("# Preco unitario do produto: ")
   leia(pre)

   // L� a quantidade de produtos
   escreva("# Quantidade comprada: ")
   leia(qtd)

   // L� o dinheiro recebido
   escreva("# Dinheiro recebido: ")
   leia(din)

   // Calcula o troco
   trc <- (din - pre * qtd)

   // Exibe o troco
   escreval("")
   escreval("# Troco: ", trc:5:2)

Fimalgoritmo
