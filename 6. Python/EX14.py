# Preço base do pagamento
pag = 50

# Lê a quantidade de minutos
min = int(input("# Digite a quantidade de minutos: "))

# Calcula valor adicional se os minutos excederem 100
if min > 100:
    pag += (min - 100) * 2

# Exibe o valor a pagar
print(f"* Valor a pagar: R$ {pag:.2f}")
