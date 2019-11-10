n: int; x: int; fora: int; dentro: int

n = int(input("Quantos numeros voce vai digitar? "))

fora = 0
dentro = 0

for i in range(n):
	x = int(input("Digite um numero: "))

	if x < 10 or x > 20:
		fora = fora + 1
	else:
		dentro = dentro + 1

print(f"{dentro} DENTRO")
print(f"{fora} FORA")