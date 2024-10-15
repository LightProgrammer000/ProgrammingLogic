def entDados():
    x = int(input("# Digite o valor de X: "))
    y = int(input("# Digite o valor de Y: "))
    return x, y

def main():
    soma = 0
    a, b = entDados()

    soma = a + b
    print(f"# Soma: {soma}")

if __name__ == '__main__':
    main()