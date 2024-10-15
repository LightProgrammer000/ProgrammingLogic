# Pede dois números
print("# Digite dois numeros: ")

# Lê X e Y
x = int(input("# X: "))
y = int(input("# Y: "))

# Enquanto X for diferente de Y
while x != y:

    # Verifica se X é maior que Y
    if x > y:

        # Exibe "Decrescente"
        print("# DECRESCENTE!")

    # Caso contrário
    else:
        
        # Exibe "Crescente"
        print("# CRESCENTE!")

    # Pede outros dois números
    print("\n# Digite outros dois numeros: ")

    # Lê novos X e Y
    x = int(input("# X: "))
    y = int(input("# Y: "))
