Algoritmo "EX10"

// Declara��o das vari�veis
Var
   seg, min, hor: inteiro  // Segundos, minutos e horas

Inicio

   // L� a dura��o em segundos
   escreva("# Digite a duracao em segundos: ")
   leia(seg)

   // Converte segundos em minutos e segundos restantes
   min <- seg \ 60
   seg <- seg % 60

   // Converte minutos em horas e minutos restantes
   hor <- min \ 60
   min <- min % 60

   // Exibe o resultado no formato H:M:S
   escreval(hor, ":", min, ":", seg)

Fimalgoritmo
