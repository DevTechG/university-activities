"""
nota1 = float(input("Digite a nota 1: "))
nota2 = float(input("Digite a nota 2: "))
print("A soma das notas é", (nota1+nota2))
print(f"A sua média é {(nota1+nota2)/2}")
print("A multiplicação das suas notas é {}".format((nota1*nota2)))
print("A sua média é {} {}".format( ((nota1+nota2)/2) , 'teste'))
"""

def menu():
	op = ''
	while (op != '0'):
		op = input("Escolha a operação: \n+ \n- \n/ \n* \nDigite 0 para sair\n")
		if (op == '0'):
			break
		else:
			num1 = float(input("Digite o primeiro número:\n"))
			num2 = float(input("Digite o segundo número:\n"))
			if (op == '+'):
				print("{} + {} = {}".format(num1, num2, (num1+num2)))
			elif (op == '-'):
				print("{} - {} = {}".format(num1, num2, (num1-num2)))
			elif (op == '/'):
				print("{} / {} = {}".format(num1, num2, (num1/num2)))
			elif (op == '*'):
				print("{} * {} = {}".format(num1, num2, (num1*num2)))
			else:
				print("Opção inválida")

menu()


