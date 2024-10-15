# Solicita a escala e converte a temperatura
opc = input("# Você vai digitar a temperatura em qual escala (C/F): ")[0].upper()

# Se for Fahrenheit, converte para Celsius
if opc == 'F':
    fah = float(input("# Digite a temperatura em Fahrenheit: "))

    cel = 5/9 * (fah - 32)
    print(f"# Temperatura equivalente em Celsius: {cel:.2f}")

# Se for Celsius, converte para Fahrenheit
elif opc == 'C':
    cel = float(input("# Digite a temperatura em Celsius: "))

    fah = (9 * cel) / 5 + 32
    print(f"# Temperatura equivalente em Fahrenheit: {fah:.2f}")

# Caso a opção seja inválida
else:
    print("# Opcao inválida!")
