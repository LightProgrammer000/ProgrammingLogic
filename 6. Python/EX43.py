# Inicializa a soma acumulada
acuSom = 0

# Solicita a quantidade de números a serem digitados
n = int(input("# Quantos numeros voce vai digitar: "))

# Cria um vetor de tamanho n preenchido com zeros
vet = [0.0 for i in range(n)]

# Loop para receber os números e calcular a soma
for i in range(n):

    # Lê um número e o armazena no vetor
    vet[i] = float(input("# Digite um numero: "))

    # Acumula a soma dos números
    acuSom += vet[i]

# Exibe os valores digitados
print("\n# VALORES = ", end="")
for i in range(n):

    # Formata a saída para duas casas decimais
    print(f"{vet[i]:.2f}", end=" ")

# Exibe a soma dos valores
print(f"\n# Soma = {acuSom:.2f}")

# Exibe a média dos valores
print(f"# Media = {(acuSom/n):.2f}")
