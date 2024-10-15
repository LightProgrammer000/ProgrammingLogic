# Solicita o salário atual
salAtu = float(input("# Digite o salário da pessoa: "))

# Define a porcentagem de aumento com base no salário
if salAtu > 8000:
    per = "5"
    aum = 0.05 * salAtu

elif salAtu > 3000:
    per = "10"
    aum = 0.10 * salAtu

elif salAtu > 1000:
    per = "15"
    aum = 0.15 * salAtu

else:
    per = "20"
    aum = 0.20 * salAtu

# Exibe os resultados
print(f"# Novo salário: R$ {(salAtu + aum):.2f}")
print(f"# Aumento: R$ {aum:.2f}")
print(f"# Porcentagem = {per} %")
