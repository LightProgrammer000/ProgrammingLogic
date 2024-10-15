# Solicita a ordem da matriz
n = int(input("# Qual a ordem da matriz: "))

# Cria uma lista para armazenar o maior elemento de cada linha
aux = [0 for i in range(n)]

# Cria a matriz quadrada de ordem n
mat = [[0 for i in range(n)] for i in range(n)]

# Preenche a matriz
for i in range(n):
    for j in range(n):
        mat[i][j] = int(input(f"# Elemento [{i}, {j}]: "))  # Captura o elemento

        # Atualiza o maior elemento da linha
        if j == 0 or aux[i] < mat[i][j]:
            aux[i] = mat[i][j]  # Armazena o maior elemento da linha

# Exibe o maior elemento de cada linha
print("\n# MAIOR ELEMENTO DE CADA LINHA:")
for i in range(n):
    print(f"# Linha {i+1}: {aux[i]}")   # Imprime o maior elemento
