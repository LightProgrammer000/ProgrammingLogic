# Dados da primeira pessoa
print("# Dados da primeira pessoa: ")
nom1 = input("# Nome: ")        # Nome da primeira pessoa
ida1 = int(input("# Idade: "))  # Idade da primeira pessoa

# Dados da segunda pessoa
print("\n# Dados da segunda pessoa: ")
nom2 = input("# Nome: ")        # Nome da segunda pessoa
ida2 = int(input("# Idade: "))  # Idade da segunda pessoa

# Cálculo da idade média
media = (ida1 + ida2) / 2

# Exibe a idade média
print(f"\n# A idade media de {nom1} e {nom2} = {media:.1f} anos")
