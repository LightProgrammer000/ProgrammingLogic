# Função para ler e validar a quantidade de casos
def entDados():

    n = 0           # Inicializa n
    while n <= 0:   # Loop até receber um número positivo
        try:
            n = int(input("# Quantos casos voce vai digitar: "))  # Lê a quantidade de casos

        except Exception:
            print("# ERRO !")

    return n  # Retorna a quantidade válida

# Função para realizar a análise da divisão
def analise(num, den):

    # Realiza a divisão e exibe o resultado ou mensagem de erro
    print(f"* DIVISAO = {(num/den):.2f}\n") if den != 0 else print("* DIVISAO IMPOSSIVEL\n")

# Função principal
def main():

    # Loop para processar cada caso
    for i in range(entDados()):

        # Lê numerador e denominador e chama a função de análise
        analise(float(input("# Entre com o numerador: ")),
                float(input("# Entre com o denominador: ")))

# Verifica se o script está sendo executado diretamente
if __name__ == '__main__':
    main()  # Chama a função principal
