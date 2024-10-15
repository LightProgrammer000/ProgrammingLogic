from math import sqrt, pow

# Coeficientes da equação
a = float(input("# Coeficiente a: "))  # a
b = float(input("# Coeficiente b: "))  # b
c = float(input("# Coeficiente c: "))  # c

# Calcula delta
delta = pow(b, 2) - 4 * a * c  # delta = b² - 4ac

# Verifica validade da equação
if (a == 0) or (delta < 0):
    print("\n* Esta equacao esta invalidada ou nao possui raizes reais")  # Erro

else:
    # Calcula as raízes
    x1 = (-b + sqrt(delta)) / (2 * a)  # Raiz 1
    x2 = (-b - sqrt(delta)) / (2 * a)  # Raiz 2

    # Exibe as raízes
    print(f"\n* X1 = {x1:.4f}") # Exibe raiz 1
    print(f"* X2 = {x2:.4f}")   # Exibe raiz 2
