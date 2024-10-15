from math import pow

# Função para exibir o relatório das áreas
def relatorio(areQua, areTri, areTra):
    print(f"* AREA DO QUADRADO = {areQua:.4f}")     # Exibe a área do quadrado
    print(f"* AREA DO TRIANGULO = {areTri:.4f}")    # Exibe a área do triângulo
    print(f"* AREA DO TRAPEZIO = {areTra:.4f}")     # Exibe a área do trapézio

def main():
    # Solicita as medidas
    a = float(input("# Digite a medida A: "))
    b = float(input("# Digite a medida B: "))
    c = float(input("# Digite a medida C: "))

    # Calcula as áreas
    areQua = pow(a, 2)          # Área do quadrado
    areTri = (a * b) / 2        # Área do triângulo
    areTra = ((a + b) * c) / 2  # Área do trapézio

    # Chama a função para exibir o relatório
    relatorio(areQua, areTri, areTra)

if __name__ == '__main__':
    main()  # Executa a função principal
