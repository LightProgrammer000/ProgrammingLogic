from math import pow  # Importa função para potência

idAux = 0  # Índice para elementos da diagonal principal
acuSomPos = 0  # Acumulador para a soma de elementos positivos

# Solicita a ordem da matriz
qtd = int(input("# Qual a ordem da matriz: "))

# Inicializa listas para a matriz e matriz alterada
aux = [0.0 for i in range(qtd)]
mat = [[0.0 for i in range(qtd)] for i in range(qtd)]
matAlt = [[0.0 for i in range(qtd)] for i in range(qtd)]

# Preenche a matriz
for i in range(qtd):
    for j in range(qtd):
        mat[i][j] = float(input(f"# Elemento [{i}, {j}]: "))  # Captura elemento

        if mat[i][j] >= 0:  # Verifica se é positivo
            acuSomPos += mat[i][j]  # Acumula soma
            matAlt[i][j] = mat[i][j]  # Mantém o valor original
        else:
            matAlt[i][j] = pow(mat[i][j], 2)  # Armazena o quadrado do valor negativo

        if i == j:  # Verifica diagonal principal
            aux[idAux] = mat[i][j]  # Armazena elemento
            idAux += 1  # Incrementa índice

# Exibe a soma dos elementos positivos
print(f"\n# SOMA DOS POSITIVOS: {acuSomPos}")

# Solicita e exibe uma linha escolhida
m = int(input("\n# Escolha uma linha: "))
print("# LINHA ESCOLHIDA: ", end="")
for j in range(qtd):
    print(f"{mat[m][j]} ", end="")

# Solicita e exibe uma coluna escolhida
n = int(input("\n\n# Escolha uma coluna: "))
print("# COLUNA ESCOLHIDA: ", end="")
for i in range(qtd):
    print(f"{mat[i][n]} ", end="")

# Exibe a diagonal principal
print("\n\n# DIAGONAL PRINCIPAL: ", end="")
for i in range(idAux):
    print(f"{aux[i]} ", end="")

# Exibe a matriz alterada
print("\n\n# MATRIZ ALTERADA: ", end="")
for i in range(qtd):
    print("")
    for j in range(qtd):
        print(f"{matAlt[i][j]} ", end="")
