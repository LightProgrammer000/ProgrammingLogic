from math import pi, pow

# Solicita o valor do raio do círculo
r = float(input("# Digite o valor do raio do circulo: "))

# Calcula a área do círculo
area = pi * pow(r, 2)

# Imprime a área formatada com três casas decimais
print(f"# Area: {area:.3f}")
