# Função para obter entrada validada.
def protecao_entDados(txt, tipo):
    while True:
        try:
            a = tipo(input(txt))
            if a > 0:
                return a

        except Exception:
            print("\n# Entrada Invalida !")

# Função para popular matriz e calcular somas das linhas.
def popular_matriz(mat, aux):

    for i in range(len(mat)):

        acuSom = 0
        print(f"\n# Digite os elementos da {i+1}a. linha: ")

        for j in range(len(mat[0])):
            mat[i][j] = protecao_entDados("# Elemento: ", float)
            acuSom += mat[i][j]
        aux[i] = acuSom

    return aux

# Função para exibir vetor de somas.
def relatorio(aux):
    print("\n# Vetor Gerado: ")

    for i in range(len(aux)):
        print(aux[i])

# Função principal.
def main():
    m = protecao_entDados("# Qual a quantidade de linhas da matriz: ", int)
    n = protecao_entDados("# Qual a quantidade de colunas da matriz: ", int)

    aux = [0 for _ in range(m)]
    mat = [[0 for _ in range(n)] for _ in range(m)]

    relatorio(popular_matriz(mat, aux))

# Execução.
if __name__ == '__main__':
    main()