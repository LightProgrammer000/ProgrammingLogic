# Lê o valor da glicose
gli = float(input("# Digite a medida da glicose: "))

# Classifica o nível de glicose
if gli <= 100:
    print("* Classificação: normal")
else:
    if gli <= 140:
        print("* Classificação: elevado")
    else:
        print("* Classificação: diabetes")
