# Função para popular um vetor com valores do usuário
def popVetor(tam, txt, vet):
    print(f"\n{txt}")

    for i in range(tam):
        vet[i] = int(input(f"# Valor {[i+1]}: "))  # Coleta valor do vetor

    return vet

# Solicita a quantidade de valores para os vetores
qtd = int(input("# Quantos valores vai ter cada vetor: "))

# Cria vetores A, B e C
vetA = [0 for i in range(qtd)]
vetB = [0 for i in range(qtd)]
vetC = [0 for i in range(qtd)]

# Popula os vetores A e B
popVetor(qtd, "# Digite os valores do vetor A: ", vetA)
popVetor(qtd, "# Digite os valores do vetor B: ", vetB)

# Exibe o vetor resultante C
print("\n# VETOR RESULTANTE: ")
for i in range(qtd):
    vetC[i] = vetA[i] + vetB[i]  # Soma os vetores A e B
    print(f"-> {vetC[i]}")       # Exibe valor do vetor C
