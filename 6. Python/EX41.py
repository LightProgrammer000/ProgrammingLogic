# Inicializa variáveis
i = 0
tot = 0
qtdRat = 0
qtdSap = 0
qtdCoe = 0

# Solicita número de casos de teste
n = int(input("# Quantos casos de teste serao digitados: "))

# Verifica se o número de casos é válido
if n > 0:
    while i < n:
        # Solicita quantidade e tipo de cobaia
        qtd = int(input("\n# Quantidade de cobaias: "))
        tip = input("# Tipo de cobaia: ")[0].upper()  # Captura a primeira letra

        # Atualiza as quantidades com base no tipo de cobaia
        switch = {
            'R': lambda: globals().__setitem__('qtdRat', globals()['qtdRat'] + qtd),
            'S': lambda: globals().__setitem__('qtdSap', globals()['qtdSap'] + qtd),
            'C': lambda: globals().__setitem__('qtdCoe', globals()['qtdCoe'] + qtd)
        }

        # Verifica e executa a função correta
        if tip in switch:
            switch[tip]()
            i += 1
        else:
            print("# Cobaia invalida !")
            continue

    tot = qtdRat + qtdSap + qtdCoe  # Calcula o total de cobaias

else:
    print("# Numeros de casos invalidos !")

# Verifica se há cobaias registradas
if tot > 0:
    # Exibe o relatório final
    print("\n*** RELATORIO FINAL ***")
    print(f"# Total: {tot}")
    print(f"# Total de coelhos: {qtdCoe}")
    print(f"# Total de ratos: {qtdRat}")
    print(f"# Total de sapos: {qtdSap}")
    print(f"# Percentual de coelhos: {((qtdCoe / tot) * 100):.2f}")
    print(f"# Percentual de ratos: {((qtdRat / tot) * 100):.2f}")
    print(f"# Percentual de sapos: {((qtdSap / tot) * 100):.2f}")
else:
    print("# Quantidade invalida !")
