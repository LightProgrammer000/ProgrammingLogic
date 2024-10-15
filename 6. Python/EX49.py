# Inicializa acumulador e contador de pares
acuSom = 0
qtdPar = 0

# Solicita a quantidade de elementos do vetor
qtd = int(input("# Quantos elementos vai ter o vetor: "))

# Cria vetor para os números
numVet = [0 for i in range(qtd)]

# Coleta os números
for i in range(qtd):
    numVet[i] = int(input("# Digite um numero: "))  # Coleta o número

    # Verifica se é par
    if numVet[i] % 2 == 0:
        acuSom += numVet[i]     # Acumula a soma dos pares
        qtdPar += 1             # Incrementa o contador de pares

# Exibe a média dos pares ou mensagem se não houver pares
if qtdPar > 0:
    print(f"# MEDIA DOS PARES = {(acuSom / qtdPar)}")  # Calcula e exibe a média
else:
    print("# NENHUM NUMERO PAR")  # Mensagem se não houver pares
