# Inicializa variáveis para o maior valor e sua posição
mai = 0
idMai = 0

# Solicita a quantidade de números
qtd = int(input("# Quantos numeros voce vai digitar: "))

# Cria vetor para os números
numVet = [0.0 for i in range(qtd)]

# Coleta os números
for i in range(qtd):
    numVet[i] = float(input("# Digite um numero: "))

# Encontra o maior valor e sua posição
for i in range(qtd):
    if i == 0 or mai < numVet[i]:
        mai = numVet[i]     # Atualiza o maior valor
        idMai = i           # Atualiza a posição

# Exibe o maior valor e sua posição
print(f"\n# MAIOR VALOR = {mai}")
print(f"# POSICAO DO MAIOR VALOR = {idMai}")
