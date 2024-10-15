# Solicita a quantidade de casos a serem digitados
qtd = int(input("# Quantos casos voce vai digitar: "))

# Loop para cada caso
for i in range(qtd):

    som = 0  # Inicializa a soma
    print("")  # Linha em branco para separar casos

    # Loop para entrada de notas
    for j in range(3):

        n = float(input(f"# Nota {j+1}: "))  # Lê a nota

        # Aplica os pesos às notas
        if j == 0:
            som += n * 2  # Peso 2 para a primeira nota

        elif j == 1:
            som += n * 3  # Peso 3 para a segunda nota
            
        else:
            som += n * 5  # Peso 5 para a terceira nota

    # Calcula e exibe a média
    print(f"# Media = {(som / 10):.1f}")  # Média ponderada
