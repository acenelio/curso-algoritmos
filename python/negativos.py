n: int

n = int(input("Quantos numeros voce vai digitar? "))

vetor: int = []

for i in range(n):
	vetor.append(int(input("Digite um numero: ")))

print("NUMEROS NEGATIVOS:")

for i in range(n):
	if vetor[i] < 0:
		print(vetor[i])