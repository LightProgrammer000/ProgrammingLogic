# Solicita a duração em segundos
seg = int(input("# Digite a duracao em segundos: "))

# Converte segundos em minutos
min = seg // 60
seg = seg % 60

# Converte minutos em horas
hor = min // 60
min = min % 60

# Imprime o resultado no formato HH:MM:SS
print(f"{hor:02d}:{min:02d}:{seg}")
