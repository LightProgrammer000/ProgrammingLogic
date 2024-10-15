def protecao(texto):
    while True:
        try:
            return int(input(texto))  # Lê e retorna um número inteiro
        except Exception:
            print("# Entrada Invalida !")

def quantidade():
    while True:
        try:
            n = int(input("# Quantos numeros voce vai digitar: "))  # Lê a quantidade de números
            if 0 < n <= 10:  # Verifica intervalo
                return n
        except Exception:
            print("# Entrada Invalida !")

def programa():
    n = quantidade()  # Obtém a quantidade
    vet = [0] * n

    for i in range(n):
        vet[i] = protecao("# Digite um numero: ")  # Preenche a lista

    print("\n# Numeros negativos")  # Exibe negativos
    for i in range(n):
        if vet[i] < 0:
            print(f"* {vet[i]}")  # Imprime número negativo

programa()  # Executa o programa
