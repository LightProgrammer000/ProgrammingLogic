# Inicializa variáveis para maior e menor altura, quantidade de homens e mulheres e acumulação de altura de mulheres
mai = float('-inf')  # Inicia com o menor valor possível
men = float('inf')   # Inicia com o maior valor possível
qtdF = 0
qtdM = 0
acuAltM = 0
listaGen = ['F', 'M']

# Solicita a quantidade de pessoas a serem digitadas
qtd = int(input("# Quantas pessoas serao digitadas: "))

# Cria vetor para armazenar as alturas
vetAlt = [0.0 for i in range(qtd)]

# Coleta dados das pessoas
for i in range(qtd):
    vetAlt[i] = float(input(f"\n# Altura da {i+1}a pessoa: "))  # Coleta a altura da pessoa

    if vetAlt[i] > mai:  # Atualiza a maior altura se necessário
        mai = vetAlt[i]

    if vetAlt[i] < men:  # Atualiza a menor altura se necessário
        men = vetAlt[i]

    # Coleta o gênero e contabiliza alturas
    while True:
        sex = input(f"# Genero da {i+1}a pessoa (F/M): ")[0].upper()

        if sex in listaGen:  # Verifica se o gênero é válido
            break

        print("# Genero invalido. Por favor, digite 'F' ou 'M'.")

    if sex == 'F':              # Se a pessoa for mulher
        acuAltM += vetAlt[i]    # Acumula a altura das mulheres
        qtdF += 1               # Contabiliza uma mulher
    else:
        qtdM += 1               # Contabiliza um homem

# Exibe menor altura encontrada
print(f"\n# Menor altura = {men:.2f}")

# Exibe maior altura encontrada
print(f"# Maior altura = {mai:.2f}")

# Verifica se há mulheres para calcular a média
if qtdF > 0:
    print(f"# Media das alturas das mulheres = {(acuAltM / qtdF):.2f}")  # Exibe média das alturas das mulheres
else:
    print("# Nao ha mulheres para calcular a media")                     # Mensagem caso não haja mulheres

# Exibe o número de homens
print(f"# Numero de homens = {qtdM}")
