# Função para entrada de dados
def entDados():
    while True:

        try:
            x = int(input("# Digite o valor de X: "))
            if x >= 1:  # Verifica se X é positivo
                return x

        except Exception:
            print("# Entrada Invalida !")  # Mensagem de erro

# Função para analisar se o número é ímpar
def analiseImpar(n):

    if n % 2 != 0:  # Verifica se ímpar
        return True

# Função principal
def main():

    for i in range(entDados()):      # Loop até o valor de X

        if analiseImpar(i):         # Verifica se i é ímpar
            print(f"# X: {i}")      # Imprime o valor ímpar

# Executa a função principal
if __name__ == '__main__':
    main()
