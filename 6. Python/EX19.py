# Inicializa valor
val = 0

# Entrada do código e quantidade
cod = int(input("# Código do produto comprado: "))
qtd = int(input("# Quantidade comprada: "))

# Define o preço baseado no código do produto
if cod == 1:
    val = 5.00

elif cod == 2:
    val = 3.50

elif cod == 3:
    val = 4.80

elif cod == 4:
    val = 8.90

elif cod == 5:
    val = 7.32

# Calcula e exibe o valor total
print(f"* Valor a pagar: R$ {(val * qtd):.2f}")