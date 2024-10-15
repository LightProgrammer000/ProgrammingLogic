# Solicita as coordenadas X e Y
print("# Digite os valores das coordenadas X e Y: ")
x = int(input("# X: "))
y = int(input("# Y: "))

# Enquanto as coordenadas não forem ambas zero
while x != 0 and y != 0:

    # Verifica em qual quadrante está
    if x > 0 and y > 0:
        print("* QUADRANTE Q1")

    elif x > 0 > y:
        print("* QUADRANTE Q4")

    elif x < 0 and y < 0:
        print("* QUADRANTE Q3")

    elif x < 0 < y:
        print("* QUADRANTE Q2")

    # Solicita novas coordenadas
    print("\n# Digite os valores das coordenadas X e Y:")
    x = int(input("# X: "))
    y = int(input("# Y: "))
