# Função para entrada de dados
def entDados():

    while True:
        try:

            # Solicita um número para a tabuada
            n = int(input("# Deseja a tabuada para qual valor: "))

            # Verifica se o número é positivo
            if n > 0:
                return n  # Retorna o número válido

            else:
                continue  # Repete se não for positivo

        except Exception:
            print("# Entrada Invalida !")  # Mensagem de erro para entrada inválida

# Função principal que imprime a tabuada
def main(n):

    for i in range(1, 11, 1):

        # Exibe a tabuada
        print(f"# {n} x {i} = {n * i}")

# Executa a função principal
if __name__ == '__main__':
    main(entDados())  # Chama a função de entrada e passa o resultado para main
