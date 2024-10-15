# Solicita três distâncias
print("# Digite as três distâncias")

maior = float(input("* D1: "))
d2 = float(input("* D2: "))
d3 = float(input("* D3: "))

# Verifica qual é a maior distância
if maior < d2:
    maior = d2

if maior < d3:
    maior = d3

# Exibe o maior valor
print(f"* MAIOR DISTANCIA = {maior:.2f}")
