# Solicita a quantidade de números a serem digitados
qtd = int(input("# Quantos numeros voce vai digitar: "))

# Loop para leitura dos números
for i in range(qtd):
    n = int(input("\n# Digite um numero: "))

    # Verifica se o número é positivo
    if n > 0:
        if n % 2 == 0:
            print("# PAR POSITIVO")  # Número par positivo
        else:
            print("# IMPAR POSITIVO")  # Número ímpar positivo

    # Verifica se o número é negativo
    elif n < 0:
        if n % 2 == 0:
            print("# PAR NEGATIVO")  # Número par negativo
        else:
            print("# IMPAR NEGATIVO")  # Número ímpar negativo

    # Caso o número seja zero
    else:
        print("# NULO")  # Número nulo
