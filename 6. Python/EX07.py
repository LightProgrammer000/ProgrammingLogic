# Solicita o nome do trabalhador
nom = input("# Nome: ")

# Solicita o valor pago por hora e converte para float
valHor = float(input("# Valor por hora: "))

# Solicita o número de horas trabalhadas e converte para float
horTra = float(input("# Horas trabalhadas: "))

# Calcula o pagamento multiplicando o valor por hora pelas horas trabalhadas
pag = valHor * horTra

# Imprime o resultado formatado com duas casas decimais
print(f"# O pagamento para {nom} deve ser {pag:.2f}")
