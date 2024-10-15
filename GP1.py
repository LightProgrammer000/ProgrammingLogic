import numpy as np

# Dados
colaboradores = [
    {"nome": "Bruninha", "horas": 3, "pagamento": 750},
    {"nome": "Rayane Coimbra", "horas": 2, "pagamento": 500},
    {"nome": "Loren Andrade", "horas": 6, "pagamento": 1200},
    {"nome": "Eva Sanchez", "horas": 3, "pagamento": 900},
    {"nome": "Alice Durant", "horas": 3.5, "pagamento": 850},
    {"nome": "Cida", "horas": 1.5, "pagamento": 200},
    {"nome": "Fernanda Diaz", "horas": 1, "pagamento": 250},
    {"nome": "Índia Pitanga", "horas": 1, "pagamento": 200},
    {"nome": "Monique Moura", "horas": 3.5, "pagamento": 800},
    {"nome": "Alicia Ferrari", "horas": 1, "pagamento": 250},
    {"nome": "Karen Bellini", "horas": 2, "pagamento": 500},
    {"nome": "Jennifer Andrade", "horas": 1.5, "pagamento": 350},
    {"nome": "Giovana Branca", "horas": 1, "pagamento": 250},
    {"nome": "Núbia Fernandes", "horas": 2, "pagamento": 360},
    {"nome": "Clara Dias", "horas": 1, "pagamento": 200},
    {"nome": "Julia Araujo", "horas": 0.5, "pagamento": 140},
    {"nome": "Marcela Leal", "horas": 1, "pagamento": 260},
    {"nome": "Juhly Zombie", "horas": 1, "pagamento": 250},
    {"nome": "Hellen Petrovick", "horas": 1, "pagamento": 200},
    {"nome": "Laurel", "horas": 1, "pagamento": 250},
    {"nome": "Yvy", "horas": 1, "pagamento": 200},
    {"nome": "Luara Paz", "horas": 1, "pagamento": 250},
]

# Extração dos dados
horas = np.array([c["horas"] for c in colaboradores])
pagamentos = np.array([c["pagamento"] for c in colaboradores])

# Estatísticas básicas
media_horas = np.mean(horas)
media_pagamento = np.mean(pagamentos)
mediana_horas = np.median(horas)
mediana_pagamento = np.median(pagamentos)
max_horas = np.max(horas)
min_horas = np.min(horas)
max_pagamento = np.max(pagamentos)
min_pagamento = np.min(pagamentos)

# Soma total de pagamento e horas trabalhadas
soma_pagamento = np.sum(pagamentos)
soma_horas = np.sum(horas)

# Eficiência (pagamento por hora) e identificação da pessoa mais eficiente
eficiencia = pagamentos / horas
pessoa_mais_eficiente = colaboradores[np.argmax(eficiencia)]  # Quem ganha mais por hora

# Gasto por mulher (nome e valor gasto)
print(f"# Total de horas trabalhadas por todas as colaboradoras: {soma_horas} horas")
print(f"# Gasto total: R${soma_pagamento:.2f}\n")

for c in colaboradores:
    gasto_por_hora = c["pagamento"] / c["horas"]
    print(f"{c['nome']} trabalhou {c['horas']} horas e custou R${c['pagamento']:.2f}, "
          f"o que dá R${gasto_por_hora:.2f} por hora")

# Resultados
print(f"\n# Estatísticas Resumidas:")
print(f"- Média de horas trabalhadas: {media_horas:.2f} horas")
print(f"- Média de pagamento: R${media_pagamento:.2f}")
print(f"- Mediana de horas trabalhadas: {mediana_horas:.2f} horas")
print(f"- Mediana de pagamento: R${mediana_pagamento:.2f}")
print(f"- Máximo de horas trabalhadas: {max_horas:.2f} horas")
print(f"- Mínimo de horas trabalhadas: {min_horas:.2f} horas")
print(f"- Máximo de pagamento: R${max_pagamento:.2f}")
print(f"- Mínimo de pagamento: R${min_pagamento:.2f}")

print(f"\n# Correlação entre horas trabalhadas e pagamento: {np.corrcoef(horas, pagamentos)[0, 1]:.2f}")
print(f"# Pessoa mais eficiente (maior pagamento por hora): {pessoa_mais_eficiente['nome']} - "
      f"R${pessoa_mais_eficiente['pagamento']} por {pessoa_mais_eficiente['horas']}h")
