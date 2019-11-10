n: int; valor: int

n = int(input("Quantos numeros voce vai digitar? "))

for i in range(n):
	valor = int(input("Digite um numero: "))

	if valor == 0:
		print("NULO")
	else:
		if valor % 2 == 0:
			print("PAR", end="")
		else:
			print("IMPAR", end="")
		if valor > 0:
			print(" POSITIVO")
		else:
			print(" NEGATIVO")
