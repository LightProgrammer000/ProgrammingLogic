# Inicializa variáveis de controle
idAux = 0
acuSom = 0
qtdAbaiMed = 0

# Solicita a quantidade de elementos do vetor
qtd = int(input("# Quantos elementos vai ter o vetor: "))

# Cria vetores para os números e elementos abaixo da média
aux = [0.0 for i in range(qtd)]
vetNum = [0.0 for i in range(qtd)]

# Coleta os números e calcula a soma
for i in range(qtd):
    vetNum[i] = float(input("# Digite um numero: "))    # Coleta o número
    acuSom += vetNum[i]                                 # Acumula a soma

# Calcula a média
med = acuSom / qtd

# Encontra elementos abaixo da média
for i in range(qtd):
    if vetNum[i] < med:
        aux[idAux] = vetNum[i]  # Armazena o elemento abaixo da média
        idAux += 1              # Incrementa o índice
        qtdAbaiMed += 1         # Conta quantos estão abaixo da média

# Exibe a média do vetor
print(f"\n# MEDIA DO VETOR = {med:.3f}")

# Exibe os elementos abaixo da média
print("# ELEMENTOS ABAIXO DA MEDIA:")

for i in range(qtdAbaiMed):
    print(f"{aux[i]:.1f}")  # Exibe elemento abaixo da média
