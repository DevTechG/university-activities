-- 1. Faça um programa que leia do teclado um nome e sobrenome e printe na tela o nome completo.

-- Utilizando io.write
io.write('Informe o seu nome: \n')
name = io.read()

io.write('Informe o seu sobrenome: \n')
surname = io.read()

io.write("Seu nome é " .. name .. " " .. surname ..".\n")

-- Utilizando print
print('Informe o seu nome:')
name = io.read()

print('Informe o seu sobrenome:')
surname = io.read()

print("Seu nome é " .. name .. " " .. surname)
