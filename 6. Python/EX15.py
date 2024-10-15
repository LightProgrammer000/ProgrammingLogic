# Lê o preço unitário do produto
pre = float(input("# Preço unitario do produto: "))

# Lê a quantidade comprada
qtd = int(input("# Quantidade comprada: "))

# Lê o dinheiro recebido
din = float(input("# Dinheiro recebido: "))

# Calcula o total da compra
total = pre * qtd

# Verifica se o dinheiro recebido é suficiente
if din < total:

    # Exibe mensagem de falta de dinheiro
    print(f"* DINHEIRO INSUFICIENTE. FALTAM R$ {total - din:.2f}")

else:
    # Exibe o troco
    print(f"* TROCO = R$ {(din - total):.2f}")
