# Solicita a senha
password = int(input("# Digite a senha: "))

# Repete enquanto a senha estiver incorreta
while password != 2002:

    # Solicita nova senha
    password = int(input("# Senha invalida! Tente novamente: "))

# Senha correta, acesso permitido
print("# Acesso permitido!")
