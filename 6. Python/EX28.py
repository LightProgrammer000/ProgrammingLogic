def main():

    # Inicializa a soma das notas
    som = 0

    # Lê e soma as duas notas
    som += entDados("# Digite a primeira nota: ")
    som += entDados("# Digite a segunda nota: ")

    # Calcula e exibe a média
    print(f"# Media: {(som / 2):.2f}")

def entDados(texto):

    # Loop para garantir entrada válida
    while True:

        try:
            # Lê a nota
            n = float(input(texto))

            # Verifica se a nota está no intervalo válido
            if 0 <= n <= 10:
                return n

            else:
                print("# Valor invalido! Tente novamente\n")

        except Exception:
            print("# Entrada invalida! Tente novamente\n")

# Executa a função main se o script for o principal
if __name__ == '__main__':
    main()
