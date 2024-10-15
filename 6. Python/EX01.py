# Largura do terreno
lar = float(input("# Digite a largura do terreno: "))

# Comprimento do terreno
com = float(input("# Digite o comprimento do terreno: "))

# Valor do metro quadrado
val = float(input("# Digite o valor do metro quadrado: "))

# Área do terreno
are = lar * com

# Preço do terreno
pre = are * val

# Exibe a área
print(f"\n# Area do terreno: {are:.2f}")

# Exibe o preço
print(f"# Preco do terreno: {pre:.2f}")
