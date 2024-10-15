# Inicializa contadores
cod = 0
gas = 0
die = 0
alc = 0

# Executa enquanto o código for diferente de 4
while cod != 4:
    # Solicita um código ao usuário
    cod = int(input("# Informe um código (1, 2, 3) ou 4 para parar: "))

    # Dicionário com funções para incrementar contadores
    switch = {
        1: lambda: globals().__setitem__("alc", alc + 1),  # Incrementa álcool
        2: lambda: globals().__setitem__("gas", gas + 1),  # Incrementa gasolina
        3: lambda: globals().__setitem__("die", die + 1)   # Incrementa diesel
    }

    # Verifica e executa o incremento conforme o código
    if cod in switch:
        switch[cod]()

# Exibe a mensagem de agradecimento e os resultados
print("\n# MUITO OBRIGADO")
print(f"# Álcool: {alc}")
print(f"# Gasolina: {gas}")
print(f"# Diesel: {die}")
