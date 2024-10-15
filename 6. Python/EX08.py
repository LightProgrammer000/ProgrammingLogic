# Solicita a distância percorrida
dist = float(input("# Distancia percorrida: "))

# Solicita o combustível gasto
comGas = float(input("# Combustivel gasto: "))

# Calcula o consumo médio
conMed = dist / comGas

# Exibe o consumo médio formatado com três casas decimais
print(f"# Consumo medio = {conMed:.3f}")
