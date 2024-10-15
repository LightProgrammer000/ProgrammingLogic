# Solicita as horas de início e fim do jogo
horIni = int(input("# Hora inicial: "))
horFin = int(input("# Hora final: "))

# Calcula a duração do jogo
if horFin > horIni:
    temp = horFin - horIni
else:
    temp = (24 + horFin) - horIni

# Exibe a duração do jogo
print(f"# O JOGO DUROU {temp} HORA(S)")
