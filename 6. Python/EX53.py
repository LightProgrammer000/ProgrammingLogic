def analiseLucro(flag1, flag2, flag3, luc, tam):

    # Analisa o lucro e define as flags de acordo com os intervalos de lucro
    for i in range(0, tam):
        if luc[i] < 10:
            flag1 = True  # Flag para lucro abaixo de 10%

        elif 10 <= luc[i] <= 20:
            flag2 = True  # Flag para lucro entre 10% e 20%

        elif luc[i] > 20:
            flag3 = True  # Flag para lucro acima de 20%

    return flag1, flag2, flag3


def relatorio(flag1, flag2, flag3, luc, tam, ind):

    # Gera o relatório com base nas flags definidas
    if flag1:
        print("\n# Lucro abaixo de 10%: ", end=" ")
        for i in range(tam):
            if luc[i] < 10:
                print(f"{ind[i]+1}", end=" ")  # Exibe o índice do produto

    if flag2:
        print("\n# Lucro entre 10% e 20%: ", end=" ")
        for i in range(tam):
            if 10 <= luc[i] <= 20:
                print(f"{ind[i]+1}", end=" ")  # Exibe o índice do produto

    if flag3:
        print("\n# Lucro acima de 20%: ", end=" ")
        for i in range(tam):
            if luc[i] > 20:
                print(f"{ind[i]+1}", end=" ")  # Exibe o índice do produto


def main():

    # Inicializa variáveis para total de compra e venda
    totCom = 0
    totVen = 0
    flag1 = False
    flag2 = False
    flag3 = False

    # Solicita a quantidade de produtos
    qtd = int(input("# Serao digitados dados de quantos produtos: "))
    prdInd = [0 for _ in range(qtd)]    # Lista para índices dos produtos
    luc = [0.0 for _ in range(qtd)]     # Lista para armazenar lucros

    # Coleta dados de cada produto
    for i in range(qtd):
        print(f"\n# Produto {i + 1}")

        input("# Nome: ")   # Coleta o nome do produto (não é armazenado)
        prdInd[i] = i       # Armazena o índice do produto

        preCom = float(input("# Preco de compra: "))    # Coleta o preço de compra
        preVen = float(input("# Preco de venda: "))     # Coleta o preço de venda

        # Calcula o lucro percentual
        luc[i] = ((preVen - preCom) / preCom) * 100

        # Acumula os valores totais de compra e venda
        totCom += preCom
        totVen += preVen

    # Analisa o lucro e gera o relatório
    flag1, flag2, flag3 = analiseLucro(flag1, flag2, flag3, luc, qtd)
    relatorio(flag1, flag2, flag3, luc, qtd, prdInd)

    # Exibe os valores totais de compra, venda e lucro
    print(f"\n# Valor total de compra: {totCom:.2f}")
    print(f"# Valor total de venda: {totVen:.2f}")
    print(f"# Lucro total: {(totVen - totCom):.2f}")

# Ponto de entrada do programa
if __name__ == '__main__':
    main()
