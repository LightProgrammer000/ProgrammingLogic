Algoritmo "EX12"

// Declaracao das variaveis
Var
   horIni, horFin, temp: inteiro // Hora inicial, hora final e tempo de jogo

Inicio

   // Solicita a hora inicial
   escreva("# Hora inicial: ")
   leia(horIni)

   // Solicita a hora final
   escreva("# Hora final: ")
   leia(horFin)

   // Calcula o tempo de jogo
   se (horFin > horIni) entao
      temp <- horFin - horIni
   senao
      temp <- (24 + horFin) - horIni
   fimse

   // Verifica se o tempo calculado é válido
   se ((temp >= 1) e (temp <= 24)) entao
      escreval("# O JOGO DUROU ", temp, " HORA(S)")
   senao
      escreval("# Tempo invalido !")
   fimse

Fimalgoritmo
