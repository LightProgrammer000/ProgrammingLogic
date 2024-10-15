# Solicita a quantidade de alunos
qtd = int(input("# Quantos alunos serao digitados: "))

# Cria vetores para nomes e médias
vetNom = ["" for i in range(qtd)]  # Vetor para nomes
vetMed = [0.0 for i in range(qtd)]  # Vetor para médias

# Coleta dados dos alunos
for i in range(qtd):
    vetNom[i] = input("\n# Digite nome: ")  # Coleta o nome
    nota1 = float(input(f"# Digite 1a nota do {i+1}o aluno: "))  # Coleta a primeira nota
    nota2 = float(input(f"# Digite 2a nota do {i+1}o aluno: "))  # Coleta a segunda nota

    vetMed[i] = (nota1 + nota2) / 2  # Calcula a média

# Exibe os alunos aprovados
print("\n* Alunos aprovados: ")
for i in range(qtd):
    if vetMed[i] >= 6.0:  # Verifica se a média é maior ou igual a 6
        print(vetNom[i])  # Exibe o nome do aluno aprovado
