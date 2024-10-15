# Função que calcula o fatorial de n
def fatorial(n):

    fat = 1  # Inicializa fatorial

    # Loop para multiplicar de 1 até n
    for i in range(1, n + 1, 1):

        fat *= i  # Multiplica o valor atual por i

    return fat  # Retorna o fatorial calculado

# Função principal
def main():

    while True:  # Loop para entrada de dados

        try:
            n = int(input("# Digite o valor de N: "))  # Lê o valor de N

            # Verifica se n está dentro do limite
            if 0 <= n <= 15:
                print(f"# Fatorial = {fatorial(n)}")  # Exibe o fatorial
                break  # Sai do loop

            else:
                print("# Digite valores abaixo de 15")

        except Exception:
            print("# Erro !")  # Trata entradas inválidas

# Verifica se o script está sendo executado diretamente
if __name__ == '__main__':
    main()  # Chama a função principal