acum = 0  # Inicializa acumulador

# Solicita a ordem da matriz
qtd = int(input("# Qual a ordem da matriz: "))

# Cria a matriz quadrada de ordem qtd
mat = [[0 for i in range(qtd)] for i in range(qtd)]

# Preenche a matriz
for i in range(qtd):
    for j in range(qtd):
        mat[i][j] = int(input(f"# Elemento [{i},{j}]: "))  # Captura elemento

        if i < j:               # Verifica elementos acima da diagonal principal
            acum += mat[i][j]  # Acumula a soma

# Exibe a soma dos elementos acima da diagonal
print(f"# SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {acum}")
