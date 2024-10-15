Algoritmo "EX02"

// Declaração das variáveis
Var
   ida, som, i: inteiro  // Contadores e acumuladores

Inicio
   // Inicializa variáveis
   i <- 0
   ida <- 0
   som <- 0

   // Solicita idades ao usuário
   escreval("# Digite as idades: ")

   // Continua enquanto a idade for maior ou igual a zero
   enquanto (ida >= 0) faca
      escreva("# Idade: ")
      leia(ida)

      // Verifica se a idade é negativa
      se (ida < 0) entao
      
         // Se nenhuma idade foi digitada, exibe mensagem de erro
         se (i = 0) entao
            escreval("# IMPOSSIVEL CALCULAR")
         fimse
      senao
      
         // Acumula a idade e incrementa o contador
         som <- som + ida
         i <- i + 1
      fimse
   fimenquanto

   // Calcula e exibe a média se houver idades válidas
   se (i > 0) entao
      escreval("# Media: ", (som / i):1:2)
   fimse

Fimalgoritmo
