# Inicializa variáveis
z = True
i = 0
som = 0

# Loop principal
while z:

    # Recebe número
    n = int(input("# Digite um número inteiro: "))

    # Encerra se for 0
    if n == 0:
        z = False

    else:
        # Soma próximos 5 pares
        while i < 5:

            # Se par
            if n % 2 == 0:

                # Soma
                som += n

                # Incrementa contador
                i += 1

            # Próximo número
            n += 1

    # Exibe soma
    print(f"# SOMA: {som}")

    # Reinicia contador
    i = 0

    # Reinicia soma
    som = 0
