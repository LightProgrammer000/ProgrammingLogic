# Inicializa contadores
idAux = 0
qtdPar = 0
flag = False

# Solicita a quantidade de números
qtd = int(input("# Quantos numeros voce vai digitar: "))

# Cria vetores para os números e os pares
aux = [0 for i in range(qtd)]
numVet = [0 for i in range(qtd)]

# Coleta os números
for i in range(qtd):
    numVet[i] = int(input("# Digite um numero: "))

    # Verifica se é par
    if numVet[i] % 2 == 0:
        aux[idAux] = numVet[i]  # Armazena par
        idAux += 1              # Incrementa índice
        qtdPar += 1             # Conta pares
        flag = True             # Indica que há pares

# Exibe os pares, se existirem
if flag:
    print("\n# NUMEROS PARES:")
    for i in range(idAux):
        print(f" {aux[i]}", end="")
    print(f"\n\n# QUANTIDADE DE PARES = {qtdPar}")