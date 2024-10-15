# Preço unitário do produto
pre = float(input("# Preco unitario do produto: "))

# Quantidade comprada
qtd = int(input("# Quantidade comprada: "))

# Dinheiro recebido
din = float(input(f"# Dinheiro recebido: "))

# Cálculo do troco
trc = din - pre * qtd

# Exibe o troco
print(f"# Troco: {trc:.2f}")
