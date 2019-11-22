salario: float; novosalario: float; aumento: float
porcentagem: int

salario = float(input("Digite o salario da pessoa: "))

if salario <= 1000.0:
	porcentagem = 20
	aumento = salario * porcentagem / 100
	novosalario = salario + aumento
elif salario <= 3000.0:
	porcentagem = 15
	aumento = salario * porcentagem / 100
	novosalario = salario + aumento
elif salario <= 8000.0:
	porcentagem = 10
	aumento = salario * porcentagem / 100
	novosalario = salario + aumento
else:
	porcentagem = 5
	aumento = salario * porcentagem / 100
	novosalario = salario + aumento

print(f"Novo salario = R$ {novosalario:.2f}")
print(f"Aumento = R$ {aumento:.2f}")
print(f"Porcentagem = {porcentagem} %")