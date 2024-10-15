# Inicializa variáveis
tot = 0
qtdRat = 0
qtdSap = 0
qtdCoe = 0

# Solicita número de casos de teste
n = int(input("# Quantos casos de teste serao digitados: "))

# Verifica se o número de casos é válido
if n > 0:

    for i in range(n):
        # Solicita a quantidade e tipo de cobaia
        qtd = int(input("\n# Quantidade de cobaias: "))
        tip = input("# Tipo de cobaia: ")[0].upper()    # Pega a inicial e converte para maiúsculo

        # Incrementa de acordo com o tipo de cobaia
        if tip == 'R':
            qtdRat += qtd

        elif tip == 'S':
            qtdSap += qtd

        elif tip == 'C':
            qtdCoe += qtd

    tot = qtdRat + qtdSap + qtdCoe  # Calcula o total de cobaias

else:
    print("# Numeros de casos invalidos !")

# Verifica se o total é válido
if tot > 0:
    # Exibe relatório final
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
