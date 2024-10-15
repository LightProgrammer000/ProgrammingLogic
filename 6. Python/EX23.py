# Solicita os valores de X e Y
x = float(input("# Valor de X: "))  # Lê o valor de X
y = float(input("# Valor de Y: "))  # Lê o valor de Y

# Verifica a posição de acordo com os eixos e quadrantes
if x == 0 and y == 0:
    print("# Origem")  # Ponto na origem

elif x == 0 and y != 0:
    print("# Eixo Y")  # Ponto no eixo Y

elif x != 0 and y == 0:
    print("# Eixo X")  # Ponto no eixo X

elif x > 0:
    if y > 0:
        print("# Q1")  # Primeiro quadrante
    else:
        print("# Q4")  # Quarto quadrante

elif x < 0:
    if y > 0:
        print("# Q2")  # Segundo quadrante
    else:
        print("# Q3")  # Terceiro quadrante
