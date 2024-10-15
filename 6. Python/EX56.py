# Solicita a quantidade de linhas da matriz
m = int(input("# Qual a quantidade de linhas da matriz: "))

# Solicita a quantidade de colunas da matriz
n = int(input("# Qual a quantidade de colunas da matriz: "))

idAux = 0                                       # Inicializa índice para negativos
aux = [0 for i in range(m * n)]                 # Cria lista para armazenar negativos
mat = [[0 for i in range(n)] for i in range(m)] # Inicializa a matriz

# Preenche a matriz com entradas do usuário
for i in range(m):

    for j in range(n):
        mat[i][j] = int(input(f"# Elemento [{i},{j}]: "))  # Captura elemento

        if mat[i][j] < 0:           # Checa se o elemento é negativo
            aux[idAux] = mat[i][j]  # Armazena valor negativo
            idAux += 1              # Incrementa o índice

# Exibe os valores negativos armazenados
print("\n# VALORES NEGATIVOS: ")
for i in range(idAux):
    print(f"# {aux[i]}")  # Imprime cada negativo
