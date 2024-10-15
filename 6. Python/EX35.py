# Inicializa contadores
fora = 0
dentro = 0

# Solicita a quantidade de números a serem digitados
qtd = int(input("# Quantos numeros voce vai digitar: "))

# Loop para leitura dos números
for i in range(qtd):
    n = int(input("# Digite um numero: "))

    # Verifica se o número está entre 10 e 20
    if 20 >= n >= 10:
        dentro += 1  # Conta como dentro
    else:
        fora += 1    # Conta como fora

# Exibe resultados
print(f"# {dentro} DENTRO")
print(f"# {fora} FORA")
