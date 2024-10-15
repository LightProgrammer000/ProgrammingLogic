# Inicializa variáveis
i = 0
ida = 0
som = 0

# Pede as idades
print("# Digite as idades: ")

# Loop infinito
while True:

    # Lê a idade
    ida = int(input("# Idade: "))

    # Verifica se a idade é negativa
    if ida < 0:
        break
    else:
        # Soma a idade e incrementa o contador
        som += ida
        i += 1

# Se houve entradas válidas, calcula e exibe a média
if i > 0:
    print(f"# Media: {(som/i):.2f}")
else:
    # Caso contrário, exibe mensagem de erro
    print("# IMPOSSIVEL CALCULAR")
