# Solicita a entrada das notas
n1 = float(input("# Digite a primeira nota: "))
n2 = float(input("# Digite a segunda nota: "))

# Calcula a soma das notas
soma = n1 + n2

# Exibe a nota final com uma casa decimal
print(f"# Nota Final: {soma:.1f}")

# Verifica se a nota final é menor que 60
if soma < 60:
    print("# Reprovado")

