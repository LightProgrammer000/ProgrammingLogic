def popular_matriz(matriz, tipo, txt):

    # Solicita os valores para preencher a matriz
    print(f"\n# Digite os valores da {txt}: ")

    for i in range(len(matriz)):
        for j in range(len(matriz[0])):
            while True:

                try:
                    matriz[i][j] = tipo(input(f"# Elemento [{i},{j}]: "))  # Captura o elemento
                    break

                except Exception:
                    print("\n# Entrada invalida !")  # Mensagem de erro

def matriz_soma(matriz1, matriz2):

    # Cria a matriz resultante da soma
    matC = [[0 for _ in range(len(matriz1[0]))] for _ in range(len(matriz1))]

    print("\n# MATRIZ SOMA: ", end="")
    for i in range(len(matC)):
        print("")

        for j in range(len(matC[0])):
            matC[i][j] = matriz1[i][j] + matriz2[i][j]  # Soma as matrizes
            print(f"{matC[i][j]} ", end="")             # Imprime resultado

def protecao_entrada_dados(txt, tipo):

    # Valida a entrada de dados
    while True:

        try:
            val = tipo(input(txt))  # Captura valor
            if val > 0:
                return val  # Retorna valor válido

        except Exception:
            print("\n* Entrada invalida !")  # Mensagem de erro

def main():

    # Solicita dimensões das matrizes
    m = protecao_entrada_dados("# Quantas linhas vai ter cada matriz: ", int)
    n = protecao_entrada_dados("# Quantas colunas vai ter cada matriz: ", int)

    # Inicializa matrizes
    matA = [[0 for _ in range(n)] for _ in range(m)]
    matB = [[0 for _ in range(n)] for _ in range(m)]

    # Preenche as matrizes
    popular_matriz(matA, int, "matriz A")
    popular_matriz(matB, int, "matriz B")

    # Soma as matrizes
    matriz_soma(matA, matB)

if __name__ == '__main__':
    main()  # Executa o programa