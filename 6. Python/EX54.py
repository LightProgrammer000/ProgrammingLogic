# Inicializa variáveis auxiliares
idAux = 0
qtdNeg = 0

# Recebe a ordem da matriz
qtd = int(input("# Qual a ordem da matriz: "))

# Cria um vetor auxiliar e uma matriz quadrada com zeros
aux = [0 for i in range(qtd)]
mat = [[0 for i in range(qtd)] for i in range(qtd)]

# Percorre a matriz para preencher os elementos
for i in range(qtd):
    for j in range(qtd):

        # Recebe o valor do elemento da matriz
        mat[i][j] = int(input(f"# Elemento [{i},{j}]: "))

        # Verifica se o valor é negativo e incrementa o contador
        if mat[i][j] < 0:
            qtdNeg += 1

        # Armazena os elementos da diagonal principal no vetor auxiliar
        if i == j:
            aux[idAux] = mat[i][j]
            idAux += 1

# Exibe a diagonal principal da matriz
print("\n# DIAGONAL PRINCIPAL: ")
for i in range(idAux):
    print(f"{aux[i]}", end=" ")

# Exibe a quantidade de números negativos encontrados
print(f"\n\n# QUANTIDADE DE NEGATIVOS = {qtdNeg}")
