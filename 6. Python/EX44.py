# Inicializa variáveis para acumular altura e controle de idade
acuAlt = 0
idAux = 0
contIda = 0

# Solicita a quantidade de pessoas a serem digitadas
qtd = int(input("# Quantas pessoas serao digitadas: "))

# Valida a entrada para garantir que esteja entre 1 e 5
while qtd < 1 or qtd > 5:
    print("# Valor maximo de 5 pessoas")
    qtd = int(input("# Quantas pessoas serao digitadas: "))

# Cria vetores para armazenar dados de idade, altura e nomes
vetIda = [0 for i in range(qtd)]
vetAlt = [0.0 for i in range(qtd)]
aux = ["" for i in range(qtd)]
vetNom = ["" for i in range(qtd)]

# Loop para coletar dados de cada pessoa
for i in range(qtd):
    print(f"\n# Dados da {i + 1}a pessoa: ")

    # Lê o nome, idade e altura da pessoa
    vetNom[i] = input("# Nome: ")
    vetIda[i] = int(input("# Idade: "))
    vetAlt[i] = float(input("# Altura: "))

    # Acumula a altura total
    acuAlt += vetAlt[i]

# Loop para contar pessoas com menos de 16 anos
for i in range(qtd):
    if vetIda[i] < 16:

        # Armazena nomes das pessoas menores de 16 anos
        aux[idAux] = vetNom[i]
        idAux += 1
        contIda += 1

# Exibe a altura média
print(f"# Altura media: {(acuAlt / qtd):.2f}")

# Exibe a porcentagem de pessoas com menos de 16 anos
print(f"# Pessoas com menos de 16 anos: {((contIda / qtd) * 100):.1f} %")

# Exibe os nomes das pessoas com menos de 16 anos
for i in range(contIda):
    print(aux[i])
