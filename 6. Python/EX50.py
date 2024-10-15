# Solicita a quantidade de pessoas
qtd = int(input("# Quantas pessoas voce vai digitar: "))

# Inicializa variáveis para controle
mai = 0
auxNom = ""
vetNom = ["" for i in range(qtd)]  # Vetor para nomes
vetIda = [0 for i in range(qtd)]   # Vetor para idades

# Coleta dados das pessoas
for i in range(qtd):
    print(f"\n# Dados da {i+1}a pessoa: ")

    vetNom[i] = input("# Nome: ")           # Coleta o nome
    vetIda[i] = int(input("# Idade: "))      # Coleta a idade

    # Verifica se a idade atual é maior que a máxima
    if i == 0 or mai < vetIda[i]:
        mai = vetIda[i]         # Atualiza a idade máxima
        auxNom = vetNom[i]      # Armazena o nome da pessoa mais velha

# Exibe o nome da pessoa mais velha
print(f"\n# PESSOA MAIS VELHA: {auxNom}")

