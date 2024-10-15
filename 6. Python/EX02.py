# Importa funções matemáticas
from math import sqrt, pow

# Base do retângulo
bas = float(input("# Base do retangulo: "))

# Altura do retângulo
alt = float(input("# Altura do retangulo: "))

# Área do retângulo
area = bas * alt

# Perímetro do retângulo
perimetro = 2 * (bas + alt)

# Diagonal do retângulo
diagonal = sqrt(pow(bas, 2) + pow(alt, 2))

# Exibe a área
print(f"\n# Area: {area:.4f}")

# Exibe o perímetro
print(f"# Perimetro: {perimetro:.4f}")

# Exibe a diagonal
print(f"# Diagonal: {diagonal:.4f}")
