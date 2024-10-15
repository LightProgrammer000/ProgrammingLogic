# Inicializa variáveis
som = 0
aux = 0

# Solicita dois números
print("# Digite dois numeros:\n")

# Lê os números
n1 = int(input("# Digite N1: "))
n2 = int(input("# Digite N2: "))

# Ordena n1 e n2
if n1 > n2:
    aux = n1    # Armazena n1
    n1 = n2     # Troca n1 por n2
    n2 = aux    # Atribui aux a n2

# Soma ímpares entre n1 e n2
for i in range(n1 + 1, n2):
    if i % 2 != 0:      # Verifica ímpar
        som += i        # Adiciona à soma

# Exibe a soma
print(f"# Soma dos Impares = {som}")
