# Lê o primeiro valor e assume como menor
n1 = int(input("# Primeiro valor: "))
menor = n1

# Lê os outros valores
n2 = int(input("# Segundo valor: "))
n3 = int(input("# Terceiro valor: "))

# Verifica se há empate
if (n1 == n2) and (n2 == n3):

    # Exibe empate
    print(f"# Empate: {n1}")

else:

    # Atualiza o menor valor
    if menor > n2:
        menor = n2

    if menor > n3:
        menor = n3

    # Exibe o menor valor
    print(f"# Menor: {menor}")
