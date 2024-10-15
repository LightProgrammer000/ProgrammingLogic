# Inicializa contadores
cod = 0
gas = 0
die = 0
alc = 0

# Loop até que o código 4 seja informado
while cod != 4:

    # Solicita um código ao usuário
    cod = int(input("# Informe um codigo (1, 2, 3) ou 4 para parar: "))

    # Incrementa o contador de álcool
    if cod == 1:
        alc += 1

    # Incrementa o contador de gasolina
    elif cod == 2:
        gas += 1

    # Incrementa o contador de diesel
    elif cod == 3:
        die += 1

# Exibe a mensagem de agradecimento e os resultados
print("\n# MUITO OBRIGADO")
print(f"# Alcool: {alc}")
print(f"# Gasolina: {gas}")
print(f"# Diesel: {die}")
