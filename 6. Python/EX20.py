# Solicita dois números inteiros
print("# Digite dois números inteiros")
n1 = int(input("# N1: "))
n2 = int(input("# N2: "))

# Troca os números para garantir que n1 seja o maior
if n1 < n2:
    aux = n1
    n1 = n2
    n2 = aux

# Verifica se são múltiplos
if n1 % n2 == 0:
    print("# São múltiplos")
else:
    print("# Não são múltiplos")
